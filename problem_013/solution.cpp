#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    int available_officers = 0;
    int untreated_crimes = 0;
    int event;

    for (int i = 0; i < n; ++i) {
        cin >> event;
        if (event > 0) {
            available_officers += event;
        } else {
            if (available_officers > 0) {
                available_officers--;
            } else {
                untreated_crimes++;
            }
        }
    }
    cout << untreated_crimes << std::endl;

    return 0;
}
