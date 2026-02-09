#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;

int main() {
    char filename[50];
    cout << "Enter filename: ";
    cin >> filename;

    ifstream fin(filename);
    if (!fin) {
        cout << "File not found!";
        return 0;
    }

    int studentCount, gradeCount;
    fin >> studentCount;
    fin >> gradeCount;

    student* students = new student[studentCount];

    for (int i = 0; i < studentCount; i++) {
        char name[50];
        int grades[10];

        fin >> ws;
        fin.getline(name, 50);

        for (int j = 0; j < gradeCount; j++)
            fin >> grades[j];

        students[i].setData(name, grades, gradeCount);
        students[i].calculateAverage();
    }

    fin.close();

    int choice = 0;
    do {
        cout << "--MENU--" << endl;
        cout << "1. Print all students" << endl;
        cout << "2. Find a student" << endl;
        cout << "3. Quit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        

        if (choice == 1) {
            for (int i = 0; i < studentCount; i++)
                students[i].print();
            cout << " " << endl;
        }
        else if (choice == 2) {
            char searchName[50];
            cout << "Enter student name: ";
            cin >> ws;
            cin.getline(searchName, 50);

            int found = 0;
            for (int i = 0; i < studentCount; i++) {
                if (students[i].compareName(searchName)) {
                    students[i].print();
                    found = 1;
                    break;
                }
            }

            if (!found)
                cout << "Student not found";
        }

    } while (choice != 3);

    delete[] students;
    return 0;
}
