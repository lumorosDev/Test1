

#include <iostream>
#include <vector>
#include <unordered_map>


int main()
{

    std::vector<int> nums = { 1,4,6,8,10,52,60,70,88,99,154,190};


    int target = 99;
    int left = 0;
    int right = nums.size() - 1;
    int resultTarget = 0;
    
    while(left <= right)
    {
        int mid = left + (right - left)/2; 
        if(nums[mid] == target) //es el target asi que pum, para afuera
        {
            resultTarget = mid;
            break;

        }else if(nums[mid] < target )
        {

            left = mid + 1;
        }else{

            right = mid - 1;
        }
    }

    std::cout << resultTarget << std::endl;


    return 0;
}