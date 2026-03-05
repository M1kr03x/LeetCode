#include <algorithm>
#include <string>
class Solution {
public:
    int minOperations(std::string s) {
        int zeroSt{0};
       for(int i{0} ; i<s.size();i++){
            if(i%2==0) {
                if(s[i]!='0'){ 
                zeroSt++;}}
            else if(s[i]!='1') {zeroSt++;}
        }
        int firstSt = s.size() - zeroSt;
        return std::min(firstSt,zeroSt);
    }
};