#include <string>
class Solution {
public:
    bool detectCapitalUse(std::string word) {
        bool isCapital{true};
        bool allLower = true;
        bool firstLetterUp = isupper(word[0]);
        
        if(word.size() <= 1 )return true;
        for(int i{0}; i<word.size();i++){
            if(islower(word[i])) {isCapital =false;}
        }
        if(isCapital) return true;
        for(int i{1};i<word.size();i++){
           if (isupper(word[i])) {allLower = false; break;}
        }
        if(firstLetterUp and allLower) return true;
        else if(allLower) return true;
         else return false;
    }
};
int main(){
    
}