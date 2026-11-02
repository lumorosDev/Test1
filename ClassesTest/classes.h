//


class Animal
{
    private:

        std::string Name;
        int age;
        std::string race;
public:

Animal();

void speak()
{

    std::cout << "Miaw" << "\n";

}

void attack();
void defense();
void setName(std::string name);
void setAge(int age);
void setRace(std::string race);

std::string getName();
int getAge();
std::string getRace();



};