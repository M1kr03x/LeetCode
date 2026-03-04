#include <iostream>
#include <vector>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        auto beginIterator = nums.begin();
        for (unsigned counter{ 0 }; beginIterator != nums.end(); beginIterator++) {
            if (*beginIterator == target) return counter;
            counter++;
        }
        beginIterator = nums.begin();

        for (unsigned counter{ 0 }; beginIterator != nums.end(); beginIterator++) {

            if (*beginIterator > target) return counter;
            ++counter;
        }
        return nums.size();
    }
};
int main()
{
    std::cout << "Hello World!\n";
}
