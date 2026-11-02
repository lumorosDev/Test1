

#include <iostream>
#include <vector>
#include <unordered_map>


int main(){

std::string mystring = "banannnnnabanana";
std::unordered_map<char,int> map;

int max = 0;
int lastMax = 0;
char letra;

for(int i = 0; i < mystring.size(); i++ )
{
    map[mystring[i]]++; // this would add +1 for each string
}

auto it = map.begin(); 

while(it != map.end())
{
    auto pair = *it; 
     max = pair.second;
    if(max >= lastMax)
    {
        letra = pair.first;
        lastMax = max;
    } 
    it++;  
}

std::cout << "Result " << letra << " with " << lastMax << std::endl;

for(auto pair : map)
{
    max = pair.second;
    if(max >= lastMax)
    {
        letra = pair.first;
        lastMax = max;
    }
}

    std::cout << "Result " << letra << " with " << lastMax << std::endl;


    return 0;
}