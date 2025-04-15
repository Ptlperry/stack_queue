
#include <iostream>
using namespace std;


class Stack {
private:
    int* array;
    int top;
    int capacity;

public:
    
    Stack(int capacity) {
        this->capacity = capacity;
        array = new int[capacity];
        top = -1;
    }

  
    ~Stack() {
        delete[] array;
    }


    void push(int value);
    void pop();
    void peek();
    bool isFull();
    bool isEmpty();
    void size();
    void display();
};


void Stack::push(int value) {
    cout << "Push element: ";
    if (isFull()) {
        cout << "Stack is Full" << endl;
        return;
    }
    array[++top] = value;
    cout << value << endl;
}


void Stack::pop() {
    cout << "Pop element: ";
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << array[top--] << endl;
}


void Stack::peek() {
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }
    cout << "Peek(Top) element: " << array[top] << endl;
}

bool Stack::isFull() {
    return top == capacity - 1;
}

bool Stack::isEmpty() {
    return top == -1;
}


void Stack::size() {
    cout << "Stack size: " << (top + 1) << endl;
}


void Stack::display() {
    cout << "Stack: ";
    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }

    for (int i = top; i >= 0; i--) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    Stack stack(5);
  
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    // stack.push(60); 
    // stack.push(70);
    
    stack.pop();
    stack.display();

    stack.peek();
    stack.size();

    cout<<"Stack is full: " <<stack.isFull()<< endl;
    cout<<"Stack is empty: " <<stack.isEmpty()<< endl;
    

    return 0;
}
