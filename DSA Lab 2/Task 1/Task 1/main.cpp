#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    DynamicStack<int> s(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (!s.push(x)) {
            cout << "Stack Overflow";
        }
    }

    int value;
    int maxVal, minVal;

    if (s.pop(value)) {
        maxVal = minVal = value;
    }
    else {
        cout << "Stack is empty";
        return 0;
    }

    while (!s.isEmpty()) {
        s.pop(value);

        if (value > maxVal)
            maxVal = value;
        if (value < minVal)
            minVal = value;
    }
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}
