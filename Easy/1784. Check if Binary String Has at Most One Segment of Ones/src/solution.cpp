#include <string>
class Solution {
public:
    bool checkOnesSegment(std::string s) {
      int i=0;  
     while(i <s.size() and s[i] != '0'){
        i++;
    }
    
    if(i!=s.size()){
        while(i< s.size()){
            if(s[i] == '1') return false;
            i++;
        }
    }
    return true;
    }
};
int main(){

}