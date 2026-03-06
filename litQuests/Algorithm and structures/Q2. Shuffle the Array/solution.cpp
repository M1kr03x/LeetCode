#include <vector>
class Solution {
public:
    std::vector<int> shuffle(std::vector<int>& nums, int n) {
        std::vector<int> shuffledVec(2*n);
        for(unsigned i{0}; i<n;i++){
            shuffledVec[2*i] = nums[i];
            shuffledVec[2*i+1]=nums[i+n];
        }
        return shuffledVec;
    }
};