#include <iostream>
#include <queue>
#include "Stack.h"
using namespace std;

int main()
{
    Stack s;
    s.push(55);
    s.push(66);
    s.push(77);
    s.push(88);
    s.push(99);
    cout <<"the top is "<< s.top()<<endl;
    s.pop();
    s.print();

    return 0;
}
