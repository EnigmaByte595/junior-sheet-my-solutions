#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<int> a(4);
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    string s;
    cin >> s;
    long long total_calories = 0;
    for(char c : s){
        int index = c - '1';
        total_calories += a[index];
    }
    cout << total_calories << std::endl;
    
    return 0;
}
