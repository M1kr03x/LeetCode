#include <string>
class Solution {
public:
       std::string thousandSeparator(int n) {
        std::string stringNumber = std::to_string(n);
       
        if(stringNumber.size()<=3) {return stringNumber;}
        else{
           
            for(int i=stringNumber.size()-3;i>0;i-=3){
                stringNumber.insert(i,".");
            }
            return stringNumber;
        }
    }
};
int main(){
    
}