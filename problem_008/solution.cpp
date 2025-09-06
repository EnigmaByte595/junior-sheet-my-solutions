#include <iostream>
#include <string>
#include <set>


int main(){

    std::string name;
    std::cin >> name;
    std::set<char> distinct_letters(name.begin(),name.end());

    if(distinct_letters.size()%2 == 0){
        std::cout << "CHAT WITH HER!" << std::endl;
    }else{
        std::cout << "IGNORE HIM!" << std::endl;
    }
    return 0;
}
