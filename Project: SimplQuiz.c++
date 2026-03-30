#include <iostream>
using namespace std;

int main() {
    int score = 0, ans;

    cout << "2+2?\n";
    cin >> ans;
    if (ans == 4) score++;

    cout << "3+5?\n";
    cin >> ans;
    if (ans == 8) score++;

    cout << "Score: " << score;
}
