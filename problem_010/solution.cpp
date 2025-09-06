#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int groups = 0;
    string previous_magnet = "00";
    for(int i =0; i<n; i++){
        string current_magnet;
        cin >> current_magnet;

        if(current_magnet != previous_magnet){
            groups++;
        }
        previous_magnet = current_magnet;
    }
    cout << groups << endl;
    return 0;
    
}
