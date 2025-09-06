#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main(){
    std::string word;
    std::cin >> word;
    int lowercase_count = 0;
    int uppercase_count = 0;
    for(char c: word){
        if (islower(c)){
            lowercase_count++;
        }
        else if (isupper(c)){
            uppercase_count++;
        }
    }
    if(lowercase_count < uppercase_count){
        std::transform(word.begin(),word.end(),word.begin(),::toupper);
    }else if(lowercase_count >= uppercase_count){
        std::transform(word.begin(),word.end(),word.begin(),::tolower);
    }
    std::cout << word << std::endl;
    return 0;

}
