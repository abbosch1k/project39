#include <iostream>
#include <unistd.h>
using namespace std;

int main() {
    int sec;
    cin >> sec;

    while (sec > 0) {
        cout << sec-- << endl;
        sleep(1);
    }
}
