#include <iostream>
#include <string>
#include <vector>
class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        for (auto beginIterator = nums.begin();beginIterator!=nums.end() ; beginIterator++) {
            if (*beginIterator == target) { return beginIterator - nums.begin(); }
        }
        return -1;
    }
};
int main() {
    std::vector<int> vector{ 4,5,6,7,0,1,2 };
    Solution solv;
    int result = solv.search(vector, 3);
    std::cout << result;
}
