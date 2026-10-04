

#include <iostream>
#include "classes.h"

/*
private:
    int HP;
    int Exp;
    std::string Name;
    Weapon* ArmaEquipada;

public:
Animal();
~Animal();
void createAnimal();
void SetAnimalName(std::string NewName);
int hpAnimal();
void PickUpWeapon(Weapon* armaEquipada);
void MyWeapon();

*/
Animal::Animal()
{
    Name = "someName";
    HP = 100;
    Exp = 0; 
    std::cout << "Basic Animal Created" <<"\n";
    std::cout << "HP = " << HP << "\n";
    std::cout << "EXP = " << Exp << "\n";
    std::cout << "Name = " << Name << "\n";
}
Animal::Animal(int HP, int Exp, std::string Name)
{

    this->HP = HP;
    this->Name = Name;
    this->Exp = Exp; 
    std::cout << "personalized Animal Created" <<"\n";
    std::cout << "HP = " << HP << "\n";
    std::cout << "EXP = " << Exp << "\n";
    std::cout << "Name = " << Name << "\n";

}


Animal::~Animal() // destructor
{
    std::cout << "Animal Destroyed" << "\n";
}

void Animal::SetAnimalName(std::string Name)
{
    this->Name = Name;
    std::cout << "New Name Set To " << "\n" << "Name = " << Name << std::endl;
}

void Animal::PickUpWeapon(Weapon &armaEquipada)
{
    ArmaEquipada = &armaEquipada;
}

void Animal::MyWeapon()
{

    
    std::cout << ArmaEquipada->Name << std::endl;
    std::cout << "Dano " << ArmaEquipada->dano << std::endl;
    std::cout << "durabilidad " << ArmaEquipada->Name << std::endl;
    std::cout << "------------------------" << std::endl;

}


int Animal::hpAnimal()
{
    
    std::cout << Name << " Take a Hit of 10" << std::endl;
    std::cout << "new HP" << std::endl;
    int temp = HP - 10;
    std::cout << "------------------------" << std::endl;



}

void Cat::CatSpeak()
{

std::cout << "meaw" << std::endl;

}

void Cat::SetCatName(std::string Name)
{
this->Name = Name;
}