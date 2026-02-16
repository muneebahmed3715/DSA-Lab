#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n < 0)   // base case
        return;

    cout << n << " ";
    printNumbers(n - 1);   // recursive call
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printNumbers(num);

    return 0;
}

