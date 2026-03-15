#include <vector>
#include <algorithm>
#include <unordered_map>
class Solution {
public:
   std::vector<int> frequencySort( std::vector<int>& nums) {
        std::unordered_map<int,int> digits;
        for (int num:nums)
        {
            digits[num] += 1;
        }
        std::sort(nums.begin(),nums.end(),[&](int a,int b){
            return digits[b] == digits[a] ? a>b : digits[b] > digits[a];
        });
        return nums;
        
    }
    
};
int main(){

}