#ifndef STACK_H
#define STACK_H

template <class T>
class DynamicStack {       //class created
private:
    T* arr;
    int top;
    int size;

public:
    DynamicStack();            //constructor   
    DynamicStack(int s);
    ~DynamicStack();

    bool isEmpty() const;     //member functions created
    bool isFull() const;
    bool push(T value);
    bool pop(T& value);
};

#endif
