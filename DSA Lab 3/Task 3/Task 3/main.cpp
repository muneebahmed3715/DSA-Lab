#include <iostream>
using namespace std;

int checkingPrime(int n, int i)
{
    if (n <= 2) { // for 2 and below

        if (n == 2) {
            return 1; 
        }
        else {
            return 0; 
        }
    }

    if (n % i == 0) {
        return 0;
    }

    if (i * i > n) {
        return 1;
    }

    return checkingPrime(n, i + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (checkingPrime(n, 2) == 1)
        cout << n << " is  prime number." << endl;
    else
        cout << n << " is not prime number." << endl;

    return 0;
}