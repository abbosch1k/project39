#include <iostream>
using namespace std;

int main() {
    string user = "admin", pass = "1234";
    string u, p;

    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;

    if (u == user && p == pass)
        cout << "Access Granted";
    else
        cout << "Access Denied";
}
