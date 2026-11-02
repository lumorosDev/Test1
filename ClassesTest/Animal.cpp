
#include <iostream>
#include "classes.h"



Animal::Animal(){

Name = "Random Cat";
age = 0;
race = "Street cat"; 

std::cout << "cat Created" << "\n";

}



void Animal::attack()
{

    std::cout << Name << "Attacked" << "\n";

}

void Animal::defense()
{

std::cout << Name << "Attacked" << "\n";

}

void Animal::setName(std::string name)
{

    this -> Name = name;

}

void Animal::setRace(std::string race)
{

    this -> race = race;

}
void Animal::setAge(int age)
{

    this -> age = age;

}

std::string Animal::getName()
{
return Name;
}

int Animal::getAge()
{
return age;
}

std::string Animal::getRace()
{
return race;
}
