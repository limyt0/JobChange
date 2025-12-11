#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    this->nickname = nickname;
    level = 1;
    HP = 1000;
    MP = 1000;
    power = 1000;
    defence = 1000;
    accuracy = 1000;
    speed = 2000;
}

void Thief::attack()
{
    cout << "표창으로 공격!" << endl;
}
