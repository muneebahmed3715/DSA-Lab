#define _CRT_SECURE_NO_WARNINGS

#include "student.h"
#include <iostream>
#include <cstring>
using namespace std;

void student::setData(char n[], int g[], int count) {
    strcpy(name, n);
    gradeCount = count;

    for (int i = 0; i < count; i++)
        lab[i] = g[i];
}

void student::calculateAverage() {
    int sum = 0;
    for (int i = 0; i < gradeCount; i++)
        sum += lab[i];

    average = (float)sum / gradeCount;
}

void student::print() const {
    cout << "Name: " << name << endl;
    cout << "Grades: ";
    for (int i = 0; i < gradeCount; i++)
        cout << lab[i] << " ";
    cout << endl;
    cout << "Average: " << average << endl;
    cout << "";
}

int student::compareName(char n[]) const {
    return strcmp(name, n) == 0;
}
