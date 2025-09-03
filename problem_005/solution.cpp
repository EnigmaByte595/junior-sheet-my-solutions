#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    int r = -1, c = -1; //-1 is a placeholder that means not found yet
    for(int i = 1; i <= 5; i++){
        for(int j = 1;j<=5; j++){
            cin >> x;
            if(x ==1) { r = i; c = j;}
        }
    }

    cout << abs(r-3) + abs(c-3) << "\n";
    return 0;
}
