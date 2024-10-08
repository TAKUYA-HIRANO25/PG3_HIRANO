#include <stdio.h>
#include<Windows.h>

int Recursive(int n, int a) {

	if (a <= 0) {
		return (0);
	}

	return (n + Recursive(n * 2 - 50, a - 1));
}

int main() {

	int a = 1027;
	int b = 100;
	int time = 8;

	a *= time;
	
	int result = Recursive(b, time);

	printf("一般的な貸金体系\n");
	printf("時給%d円で%d時間働いた場合 = %d円になった\n", 1027, time, a);
	printf("再帰的な貸金体系\n");
	printf("時給%d円で%d時間働いた場合 = %d円になった\n", b, time, result);

	return 0;
}