#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy() :phase_(0) {}

void (Enemy::* Enemy::Phase[])()
= {
    &Enemy::Approach,
    &Enemy::Shot,
    &Enemy::withdrawal
};

void Enemy::Update()
{
    (this->*Phase[static_cast<size_t>(phase_)])();

    int choice;
    printf("\n次のフェーズへ行こうするには0を処理を終了するには1を入力して下さい\n");
    scanf_s("%d", &choice);

    if (choice == 1) {
        printf("終了します。\n");
        return;
    }
    else if (choice == 0) {
        if (phase_ == 2) {
            phase_ = 0;
        }
        else {
            phase_++;
        }
    }
    else {
        printf("無効な入力です。0または1を入力して下さい。\n");
    }

    Update();
}

void Enemy::Approach()
{
    printf("敵が接近！");
}

void Enemy::Shot()
{
    printf("敵の射撃！");
}

void Enemy::withdrawal()
{
    printf("敵が離脱！");
}