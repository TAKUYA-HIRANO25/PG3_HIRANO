#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <functional>  
#include "Enemy.h"


int main() {

    Enemy* enemy = nullptr;

    enemy = new Enemy();

    enemy->Update();

    return 0;
}