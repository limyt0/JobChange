#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname): Player(nickname)
{
    job_name = "전사";
    this->nickname = nickname;
    level = 1;
    HP = 2000;
    MP = 1000;
    power = 2000;
    defence = 2000;
    accuracy = 1000;
    speed = 1000;
}

void Warrior::attack()
{
    cout << "검으로 공격!" << endl;
}
