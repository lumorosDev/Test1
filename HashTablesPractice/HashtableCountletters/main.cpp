
#include <iostream>
#include <unordered_map>


int main()
{

    std::string word = "banana";
    std::unordered_map<char,int> frequencia;

    for(int i = 0; i < word.size(); i++)
    {
        frequencia[word[i]]++;     
    }


    std::cout << frequencia.size() << std::endl;

    for(auto pair : frequencia) // std::pair<const char, int> element
    {
        std::cout << "Numer de " << pair.first << "-> " << pair.second << std::endl;
    }


    return 0;
}

/*
auto it = map.begin();
 
for(int i = 0; i < map.size(); i++)
{
std::cout << it->first << " -> "
<< it->second << std::endl;
 
++it;
}

Aunque normalmente en STL se escribiría:

C++
auto it = map.begin();
 
while(it != map.end())
{
std::cout << it->first << " -> "
<< it->second << std::endl;
 
++it;
}


auto it = frecuencia.begin();

while(it != frecuencia.end())
{
    auto pair = *it;

     std::cout << "Numer de " << pair.first << "-> " << pair.second << std::endl;
    // tu código

    ++it;
}

*/