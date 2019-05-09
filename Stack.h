#ifndef STACK_H
#define STACK_H
#include <iostream>

#include <queue>
using namespace std;

class Stack
{
    public:
        int top(); /// returns the top element.
        void pop(); /// removes the top element.
        void push(int value); /// adds an element to the top of the stack.
        void print();
    private:
        queue<int> Q;
};

#endif // STACK_H
