#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


// コールバック関数
typedef void (*PFunc)(bool);

void Result(bool Answer) {
    if (Answer) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }
}

bool cheak(int number) {
    return number % 2 == 0;
}

int Dice() {
    return rand() % 6 + 1;
}
void GuessEven(PFunc callback) {
    int dice = Dice();
    int Guess;
    bool Even = cheak(dice);

    printf("サイコロの出目が奇数か偶数か当てて!(奇数: 0, 偶数: 1): ");
    scanf_s("%d", &Guess);

    bool cheakEven = Guess;

    printf("判定中...\n");
    Sleep(3000); 

    callback(Even == cheakEven);
}

int main() {
    srand(time(NULL));

    GuessEven(Result);

    return 0;
}