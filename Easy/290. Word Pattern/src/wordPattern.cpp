#include <string>
#include <unordered_map>
#include <iostream>
#include <vector>
class Solution {
public:
 std::vector<std::string> animalsVec;
    std::unordered_map<std::string,char> animalsMap;
    
    bool wordPattern(std::string pattern, std::string s) {
      
    size_t start {s.find_first_not_of(" ")};
    while(start!=std::string::npos){
       size_t end = s.find_first_of(" ", start);
        if(end == std::string::npos) 
        animalsVec.push_back(s.substr(start));
        else { animalsVec.push_back(s.substr(start, end-start)); }
        start = s.find_first_not_of(" ",end);
        
        

    }
    if (pattern.size() != animalsVec.size()) return false;
    for(int i = 0; i<pattern.size();i++ ){
        const std::string& word = animalsVec[i];
        char c = pattern[i];
            if(animalsMap.count(animalsVec[i])){if (animalsMap[word]!=c) return false;}
        else { for(const auto&[first,second] : animalsMap){
            if(second == c) return false;
        }
        animalsMap[word] = c;
        }
    }
    return true;
    }
};
int main(){
    
    
}