#include "Stack.h"

int Stack::top() /// returns the top element.
{
    return Q.back();
}
void Stack::pop() /// removes the top element.
{
    int temp;
    for(int i = 0 ; i < Q.size() - 1 ;i++ ){
         temp = Q.front();
         Q.pop();
         Q.push(temp);
    }
    Q.pop();
}
void Stack::push(int value) /// adds an element to the top of the stack.
{
    Q.push(value);
}

void Stack::print(){
    while(!Q.empty()){
		cout<<Q.front()<<" ";
		Q.pop();
	}

}
