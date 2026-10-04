
class Weapon
{
    public:
    std::string Name;
    int dano;
    int durability;

    public:

    Weapon(std::string N, int d, int du) : Name(N), dano(d), durability(du) {};

};

class Animal
{
protected:
    int HP;
    int Exp;
    std::string Name;
    Weapon* ArmaEquipada; // un puntero para el arma que estas creando, utilizamos pointer porque puede ser null

public:
Animal(int HP, int Exp, std::string Name);
Animal();
~Animal();
void createAnimal();
void SetAnimalName(std::string Name);
int hpAnimal();
void PickUpWeapon(Weapon &armaEquipada);
void MyWeapon();


};

class Cat : public Animal
{

    public:
    Cat(int HP, int Exp, std::string Name): Animal(HP,Exp,Name) { std::cout << "Cat Constructor called" << std::endl; }; // lo llama como una lista
    void CatSpeak();
    void SetCatName(std::string Name);

};



