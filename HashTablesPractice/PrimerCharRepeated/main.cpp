

#include <iostream>
#include <vector>
#include <unordered_map>


int main(){


    std::unordered_map<char,int> map;

    std::string str = "abcdeebfg";
    char Target;

    for(int i = 0; i < str.size(); i++)
    {
        map[str[i]]++;
        /*
        if(map[str[i]] > 1)
        {
        Target = str[i];
        break;
        }
        
        
        */
        auto it = map.find(str[i]);
        if( it->second > 1 )
        {
            Target = it->first;
            break;
        }

    }

    std::cout << Target << std::endl;


    return 0;
}