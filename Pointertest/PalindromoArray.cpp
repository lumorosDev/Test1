

#include <iostream>
#include <vector>


bool palidromo(std::vector<int> &array);


int main()
{


    std::vector<int> array = {1,2,3,4,5,4,4,2,1};


    std::cout << palidromo(array);

    return 0;
}

bool palidromo(const std::vector<int> &array)
{
    bool Palidromo = 0;
    for(int i=0; i < array.size()/2; i++)
    {
        if(array[i] == array[array.size() - i - 1])
        {
            Palidromo = true;
        } else
        {
            return false;
        }
    }



/*
another way to do it
    left = 0;
    right = array.size()/2
    while( left < right)
    { 
    if(array[left] != array[right])
    {return false;}
    left ++ right --
    }
return true;

*/
    

return Palidromo;

}