#include <iostream>
using namespace std;
#define size 5
class stack
{
    int stack[size];
    int top;
public:
    void init();
    void push();
    int pop();
    void display();
};

void stack::init()
{
    top = -1;
}

void stack::push()

{
    if (top == size-1)
    {
        cout << "Stack overflowl \n";
        return;
    }
    cout << "Enter element: ";
    cin >> stack[++top];
}

int stack::pop()
{
    if (top == -1)
    {
        cout << "Stack underflow\n";
        return 1;
    }
    cout <<"Popped element is "<< stack[top--]<<"\n";
    return 0;

}
void stack::display()
{
    if (top == -1)
    {
        cout << "Stack is empty \n";
        return;
    }
    for (int i = top; i >=0; i--)
    {
       cout << stack[i] << "\n";
    }
}

int main()
{
    int ch, i;
    stack s;
    s.init();
    while (1)
    {
            cout << "1-Push 2-Pop 3-Display 4-Exit \n";

        cout<< "\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1: s.push();
                break;
        case 2: s.pop();
                break;
        case 3: s.display();
                break;
        case 4: exit(0);
                break;
        default:
            cout<<"Enter a valid choice!\n";
        return 0;
       }
    }
}