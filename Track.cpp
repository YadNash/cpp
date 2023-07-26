#include<iostream>
#include<cstring>
using namespace std;

class track {
    int a;  // Private member variable to store a value
    static int count;  // Static variable to keep track of the count

public:
    void tracker(int k) {
        a = k;  // Assign the value of k to a
        cout << "This is the value of a: " << a << endl;
        cout << "This is the value of count: " << ++count << endl;
        cout << endl;
    }
};

int track::count = 0;  // Initialize the static variable count to zero

int main() {
    track obj[3];  // Create an array of three track objects

    for (int i = 0; i < 3; i++) {
        obj[i].tracker(i+1);  // Call the tracker method for each object with a different value
    }

    return 0;
}
