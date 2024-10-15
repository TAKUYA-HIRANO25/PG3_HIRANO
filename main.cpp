#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


// コールバック関数
typedef void (*PFunc)(bool);

void DisplayResult(bool Answer) {
    if (Answer) {
        printf("正解\n");
    }
    else {
        printf("不正解\n");
    }
}

bool IsEven(int number) {
    return number % 2 == 0;
}

int RollDice() {
    return rand() % 6 + 1;
}
void GuessOddOrEven(PFunc callback) {
    int dice = RollDice();
    int userGuess;
    bool Even = IsEven(dice);

    printf("サイコロの出目が奇数か偶数か当てて!(奇数: 0, 偶数: 1): ");
    scanf_s("%d", &userGuess);

    bool userIsEven = userGuess;

    printf("判定中...\n");
    Sleep(3000); 

    callback(Even == userIsEven);
}

int main() {
    srand(time(NULL));

    GuessOddOrEven(DisplayResult);

    return 0;
}