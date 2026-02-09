#ifndef STUDENT_H
#define STUDENT_H

class student {
private:
    char name[50];
    int lab[10];
    float average;
    int gradeCount;

public:
    void setData(char n[], int g[], int count);
    void calculateAverage();
    void print() const;
    int compareName(char n[]) const;
};

#endif
