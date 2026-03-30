#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    vector<string> names = {"Alex", "John", "Mike", "Sara"};
    cout << names[rand() % names.size()];
}
