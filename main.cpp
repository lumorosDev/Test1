

#include <iostream>
#include "classes.h"



int main()
{
    Weapon Machete("machete",15,150);
    Weapon Sword("Sword",25,120);

    Animal SomeAnimal;

    Animal MyAnimal(100, 10, "Balu");
    MyAnimal.SetAnimalName("Bolusita");

    Cat Apolo(110, 25, "Apolo");
    Apolo.hpAnimal(); 
    Apolo.PickUpWeapon(Machete);
    Apolo.MyWeapon();
    Apolo.PickUpWeapon(Sword);
    Apolo.MyWeapon();







    return 0;

}