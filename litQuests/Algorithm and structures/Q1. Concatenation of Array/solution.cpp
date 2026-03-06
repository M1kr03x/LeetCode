#include <vector>
class Solution {
public:
    std::vector<int> getConcatenation(std::vector<int>&& nums) {
        std::vector<int>secVec = nums;
        secVec.resize(secVec.size() * 2);
        auto iterator = (secVec.begin() + secVec.size() / 2);
        int counter{ 0 };
        for (; iterator < secVec.end(); iterator++) {
            *iterator = secVec[counter++];
        }
        return secVec;
    }
};
