#include <iostream>
#include <cstring>
using namespace std;

// Structure representing a node in the linked list
struct node
{
    int val;
    struct node *next;
};

// Class representing a linked list
class list
{
    struct node *n;  // Pointer to the head node

public:
    list()
    {
        n = NULL;  // Initialize the head node to NULL
    }

    void inst(int i);  // Method to insert a value at the beginning of the list
    void del();  // Method to delete the first node in the list
    void disp();  // Method to display the values in the list
};

void list::inst(int i)
{
    struct node *temp = new node;  // Create a new node
    temp->val = i;  // Assign the given value to the node
    temp->next = n;  // Make the new node point to the current head node
    n = temp;  // Make the new node the new head node
}

void list::del()
{
    struct node *p = n;  // Create a pointer pointing to the head node
    if (p == NULL)
    {
        cout << "Empty list" << endl;  // If the list is empty, display an error message
    }
    else
    {
        n = n->next;  // Make the second node (if exists) the new head node
        delete p;  // Delete the original head node
    }
}

void list::disp()
{
    struct node *p = n;  // Create a pointer pointing to the head node
    while (p != NULL)
    {
        cout << p->val << "\t";  // Display the value of the node
        p = p->next;  // Move to the next node
    }
    cout << endl;
}

int main()
{
    int k, ch;
    list ob;
    bool c = 1;
    while (c)
    {
        cout << "1) Insert" << endl;
        cout << "2) Delete" << endl;
        cout << "3) Display" << endl;
        cout << "4) Exit" << endl;
        cout << "Enter the choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter the value: ";
            cin >> k;
            ob.inst(k);  // Call the inst method to insert a value
        }
        break;
        case 2:
        {
            ob.del();  // Call the del method to delete the first node
        }
        break;
        case 3:
        {
            ob.disp();  // Call the disp method to display the list
        }
        break;
        default:
            c = 0;  // Set c to false to exit the loop
            break;
        }
    }

    return 0;
}
