#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "궁수";
    this->nickname = nickname;
    level = 1;
    HP = 1500;
    MP = 1000;
    power = 1500;
    defence = 1000;
    accuracy = 2000;
    speed = 1000;
}

void Archer::attack()
{
    cout << "화살로 공격!" << endl;
}
