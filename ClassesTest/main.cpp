


#include <iostream>

#include "classes.h"

 void exchangeNumbers(int &A, int &B);

int main()
{

    Animal streetcat; 

   std::cout << streetcat.getName() << "\n";

   streetcat.setName("Apolo");

   std::cout << streetcat.getName() << "\n";

   int a, b;
   a = 5;
   b = 6;

   std::cout << "a is " << a << " and b is " << b << "\n";

   exchangeNumbers(a, b);


   std::cout << "a is " << a << " and b is " << b << "\n";


return 0;  
};


void exchangeNumbers(int &A, int &B)
{

    int temp = A;
    A = B;
    B = temp;
    

}