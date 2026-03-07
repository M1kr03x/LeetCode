#include <vector>
#include <string>
#include <bitset>
class Solution {
public:
    std::vector<std::bitset<16>> dated;
    char symbol{'-'};
    std::string result{};
    std::string returnWithoutZeros(const std::string &s) {
        auto start = s.find_first_not_of('0');
        if (start == std::string::npos) {}
        return s.substr(start);
    }
    std::string convertDateToBinary(std::string date) {
        auto start = date.find_first_not_of(symbol);
        

        while (start != std::string::npos) {
            auto end = date.find_first_of(symbol, start);
            if (end == std::string::npos) {
                std::string num = date.substr(start);
                dated.push_back(std::bitset<16>(std::stoi(num)));
                break;
            }
            std::string num = date.substr(start, end - start);
            dated.push_back(std::bitset<16>(std::stoi(num)));
            start = end + 1;
            

        }
        
        for (auto i = 0; i < dated.size(); i++) {
            std::string bin = dated[i].to_string();
            result += returnWithoutZeros(bin);
            if (i < dated.size() - 1) {
                result += "-";
            }
        }
        return result;
    }
    


};