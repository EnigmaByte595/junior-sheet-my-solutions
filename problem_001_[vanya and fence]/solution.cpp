#include <iostream>
using namespace std;

int main(){
int n,h;
cin >> n >> h;

int totalwidth = 0;

for(int i = 0; i<n;i++){
    int ai;
    cin >> ai;

    if(ai > h){
        totalwidth += 2;
    }else {
        totalwidth += 1;
    }
}

cout << totalwidth << endl;

return 0;

}
