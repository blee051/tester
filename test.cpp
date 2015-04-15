#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10);
    *ptr = 5;
    cout << ptr << endl;
    return 0;
}