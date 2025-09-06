#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype> //for ::tolower

int main(){
   std::string s1;
   std::cin >> s1;
   std::string s2;
   std::cin >> s2;
   std::transform(s1.begin(),s1.end(),s1.begin(), ::tolower); //start geiing input , stop getting input , start putting result
   std::transform(s2.begin(),s2.end(),s2.begin(),::tolower);
   
    if(s1>s2){
        std::cout << "1";
    }else if (s1<s2){
        std::cout << "-1";
    }else{
        std::cout << "0";
    }
    return 0;
      
}
