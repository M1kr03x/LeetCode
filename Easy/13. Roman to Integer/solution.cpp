#include <string>
#include <iostream>
#include <unordered_map>
class Solution {
public:

    int romanToInt(std::string s) {
        int counter{ 0 };
        int result{ 0 };
        std::unordered_map<char, int> hashmap{ {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500}, {'M',1000} };
        for (int i{ 0 }; i < s.size(); i++) {
            if (i + 1 < s.size() and hashmap[(s[i])] < hashmap[(s[i + 1])]) result -= hashmap[(s[i])];
            else result += hashmap[(s[i])];
        }
        return result;
    }
};
int main() {
    Solution sol;
    std::cout<< sol.romanToInt("LVIII");
}