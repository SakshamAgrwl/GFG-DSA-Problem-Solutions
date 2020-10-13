#include <iostream>

using namespace std;

#define MAX 100

class StackAsArray {
  private:
    int top;

  public:
    int myStack[MAX];

    StackAsArray() { top = -1; }
    bool isEmpty();
    bool push(int nNum);
    int pop();
    int peek();
};

bool StackAsArray::isEmpty() {
  return (top < 0);
}

bool StackAsArray::push(int nNum) {
  if (top == MAX-1) {
    cout << "Stack Overflow!" << endl;
    return false;
  } else {
    myStack[++top] = nNum;
    cout << nNum << " pushed to stack." << endl;
    return true;
  }
}

int StackAsArray::pop() {
  if (top < 0) {
    cout << "Stack Underflow!" << endl;
    return -1;
  } else {
    return myStack[top--];
  }
}

int StackAsArray::peek() {
  if (top < 0) {
    cout << "Stack empty!!" << endl;
    return -1;
  } else {
    int x = myStack[top];
    return x;
  }
}

int main() {
  StackAsArray myStack = StackAsArray();
  myStack.push(10);
  myStack.push(12);
  myStack.push(7);
  cout << myStack.pop() << " popped from stack" << endl;
  cout << myStack.pop() << " popped from stack" << endl;
  cout << myStack.peek() << " is the top element." << endl;
  return 0;
}