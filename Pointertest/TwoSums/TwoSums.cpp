

#include <iostream>
#include <vector>

std::vector<int> TwoSums(std::vector <int> &sum, int NumberSum);

int main(){

std::vector <int> sum = {1,2,5,8,9,11,20,21,50,55};
std::vector <int> sum2 = {1,2,5,6,8,9,11};
std::vector <int> result = TwoSums(sum , 7);

std::cout << result[0] << " " << result[1] << std::endl;
result = TwoSums(sum2 , 41);
std::cout << result[0] << " " << result[1] << std::endl;
result = TwoSums(sum2 , 17);
std::cout << result[0] << " " << result[1] << std::endl;

}

std::vector<int> TwoSums(std::vector <int> &sum, int NumberSum) // find what number sums into that
{
    int Left = 0;
    int Right = sum.size() -1;
    while(Left < Right)
    {
        int temp = sum[Right] + sum[Left];
        if(NumberSum < temp)
        {
            Right--;
        }else if(NumberSum > temp)
        {
            Left++;
        }else if(temp == NumberSum)
        {
            return {Left,Right};
        }
    }
    return {0,0}; // meaning not found
}