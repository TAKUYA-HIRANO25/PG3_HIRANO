#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <functional>  

// コールバック関数
typedef void (*PFunc)(int*);

void SetTime(PFunc callback, int time, int result) {
    Sleep(time);
    callback(&result);
}

void DisplayResult(int* Answer) {
    printf("結果は%d\n", *Answer);
}

int RollDice() {
    return rand() % 6 + 1;
}

void GuessOddOrEven() {
    int dice = RollDice();
    int userGuess;


    printf("サイコロの出目が奇数か偶数か当てて!(奇数: 1, 偶数: 2): ");
    scanf_s("%d", &userGuess);

    auto judgement = [userGuess, dice]()
        {
            int Even = (dice % 2 == 0); 

            if ((userGuess == 1 && !Even) || (userGuess == 2 && Even))
            {
                printf("正解です！\n");
            }
            else
            {
                printf("不正解です...\n");
            }
        };


    printf("判定中...\n");
    SetTime(DisplayResult, 3000, dice);

    judgement();

}

int main() {
    srand(time(NULL));

    GuessOddOrEven();

    return 0;
}