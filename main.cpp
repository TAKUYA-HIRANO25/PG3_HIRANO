#include <stdio.h>
#include <thread>
#include <mutex>
#include <condition_variable>

std::mutex mx;
std::condition_variable ce;

int td = 1;

void Num1(int num) {
    std::unique_lock<std::mutex> lock(mx);
    ce.wait(lock, [] { return td == 1; });
    num += 1;
    printf("thread %d\n", num);
    td = 2;
    ce.notify_all();
}

void Num2(int num) {
    std::unique_lock<std::mutex> lock(mx);
    ce.wait(lock, [] { return td == 2; });
    num += 2;
    printf("thread %d\n", num);
    td = 3;
    ce.notify_all();
}

void Num3(int num) {
    std::unique_lock<std::mutex> lock(mx);
    ce.wait(lock, [] { return td == 3; });
    num += 3;
    printf("thread %d\n", num);
    td = 1;
    ce.notify_all();
}

int main() {
    int num = 0;

    std::thread thread1(Num1, num);
    std::thread thread2(Num2, num);
    std::thread thread3(Num3, num);

    thread1.join();
    thread2.join();
    thread3.join();

    return 0;
}