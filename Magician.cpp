#include "Magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "마법사";
    this->nickname = nickname;
    level = 1;
    HP = 1000;
    MP = 2000;
    power = 1000;
    defence = 1000;
    accuracy = 1000;
    speed = 1000;
}

void Magician::attack()
{
    cout << "지팡이로 마법공격!" << endl;
}
