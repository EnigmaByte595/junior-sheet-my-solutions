#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    
    int count = 0;

    for(int i=0; i<n; i++){
        int Petya,Vasya,Tonya;
        cin >> Petya >> Vasya >>Tonya;
        int sum = Petya + Vasya + Tonya;

        if(sum >= 2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
