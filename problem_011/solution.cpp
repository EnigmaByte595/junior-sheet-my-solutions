#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i = 0; i<n; i++){
        cin >> cards[i];
    }
    int sereja_score = 0;
    int dima_score = 0;
    int left = 0;
    int right = n-1;
    int turn_counter = 0;
    while (left <= right){
        int chosen_card;
        if(cards[left] > cards[right]){
            chosen_card = cards[left];
            left++;
        }else {
            chosen_card = cards[right];
            right--;
        }
        if(turn_counter%2 == 0){
            sereja_score += chosen_card;
        }else{
            dima_score += chosen_card;
        }
        turn_counter++;
    }
    cout << sereja_score << " " << dima_score << endl;
    return 0;

}
