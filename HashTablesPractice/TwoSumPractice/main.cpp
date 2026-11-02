
#include <iostream>
#include <vector>
#include <unordered_map>



int main()
{

    std::unordered_map<int,int> TwoSumMap;

    std::vector<int> Nums1 = {1,3,4,5,6,7,5,5,5,6,7,8,8,3,12,23,43,5,4,3,2,5,6,6,6,66,65,76};

    int target = 10; 
    int sum1 = 0;
    int index1, index2;

    for(int i = 0; i < Nums1.size(); i++)
    {
      
        sum1 = target - Nums1[i];
        if(TwoSumMap.find(sum1) != TwoSumMap.end())
        {
            auto it = TwoSumMap.find(sum1);
            index2 = it->second;
            index1 = i;
            break;
            //encontrado
        }else{
            TwoSumMap[Nums1[i]] = i ;
        }
    }


    std::cout << index1 << " , " << index2 << std::endl;
    return 0;

}