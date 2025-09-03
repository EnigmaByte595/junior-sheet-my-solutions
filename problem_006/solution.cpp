#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n; //n columns
    vector<int> columns(n); //need to store the heights of the columns 
    for(int i=0; i<n; i++){
        cin >> columns[i];
    }
    sort(columns.begin(), columns.end());
    for(int i = 0; i < n; i++){
        cout << columns[i];
        if(i < n-1) cout << " ";
    }
    cout << endl;
    return 0;


}
