

#include <iostream>
#include <vector>

int moveDuplicates(std::vector<int>& nums);

int main()
{

std::vector<int> nums = {0,0,0,0,0,1,1,2,2,2,3,4,4,5,6,7,7,8};


int result = moveDuplicates(nums);

std::cout << "The result is " << result << std::endl;

for(int i=0; i < (nums.size()); i++)
{
    std::cout << nums[i] << " ";
}


}

int moveDuplicates(std::vector<int>& nums) // mover los duplicados al inicio del array
{

    int read = 1;
    int write = 0; // onee reads into the next number one writes the result in the first numbers
    int result = 1; //send backs the number of no duplicates, se comienza con 1 porque siempre el primer elemento es unico.

    for(int i=0; i < (nums.size()); i++)
    {
        if(nums[read] != nums[write] ) // si que lee es diferente al que escribe, sobreescribe write en la posicion y sube 1
        {
            write++;
            nums[write] = nums[read];
            read++;
            result++;
        }else{

            read++;
        }
    }

return result;    

}