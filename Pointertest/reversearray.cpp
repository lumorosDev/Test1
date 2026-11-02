

#include <iostream>
#include <vector>


void reverseVector(int array[], int size);


int main()
{

    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    std::cout <<  " calls array " << std::endl;  
    reverseVector( array, size);


    return 0;
}

void reverseVector(int array[], int size)
{

    int Temp;
    for(int i = 0; i < size/2; i++)
    {

        Temp = array[i];
        array[i] = array[size - i - 1];  
        array[size - i - 1] = Temp;

    }

for(int i = 0; i < size; i++)
{
std::cout << array[i] << " ";    
}


}