#include<iostream>
#include<cstring>
using namespace std;

class sharedres {
    static int rescount;  // Static variable to keep track of the number of instances of sharedres class

public:
    sharedres() {
        rescount++;  // Increment the rescount when a new object is created
    }

    ~sharedres() {
        rescount--;  // Decrement the rescount when an object is destroyed
    }

    void accessres() {
        if (rescount > 1)
            cout << "Resource already being used by another object." << endl;
        else
            cout << "Resource accessed." << endl;
    }

};

int sharedres::rescount = 0;  // Initialize the static variable rescount to zero

int main() {
    sharedres obj1;  // Create the first object of sharedres
    obj1.accessres();  // Call the accessres method for obj1

    sharedres obj2;  // Create the second object of sharedres
    obj2.accessres();  // Call the accessres method for obj2

    return 0;
}
