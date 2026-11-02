
#include <iostream>
#include <vector>


int main()
{

    std::vector<int> nums = {1,4,4,4,5,6,8,10,52,60,70,88,99,154,190};


    int target = 4;
    int left = 0;
    int right = nums.size() - 1;
    int resultTarget = 0;
    
while(left < right)
{
int mid = left + (right - left)/2;
if(nums[mid] == target)
{
    resultTarget = mid;
    right = mid - 1;
    std::cout << resultTarget << std::endl;

}else if(nums[mid] > target)
{
    right = mid - 1;
    std::cout << "Go Left" << std::endl;
}else {
   left = mid + 1; 
   std::cout << "go Right" << std::endl;
}
}
std::cout << resultTarget << std::endl;
return 0;
}