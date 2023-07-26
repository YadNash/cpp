#include <iostream>
#include <cstring>
using namespace std;

// Class definition for Student
class student
{
    char usn[10], name[30];
    int marks[3];

public:
    float topp;
    void read();    // Function to read student details
    void display(); // Function to display student details
    void best();    // Function to calculate best of 2 subjects
    void topper();  // Function to display the topper's name
};

// Function to read student details
void student::read()
{
    cout << "Enter the name of student:" << endl;
    cin >> name;
    cout << "Enter the usn of student:" << endl;
    cin >> usn;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the mark" << (i + 1) << ':' << endl;
        cin >> marks[i];
    }
    cout << endl;
}

// Function to calculate best of 2 subjects
void student::best()
{
    int a = marks[0];
    int b = marks[1];
    int c = marks[2];
    float sum = 0;

    if (a < b)
    {
        if (a < c)
            sum = (float)(b + c) / 2;
        else
            sum = (float)(b + a) / 2;
    }
    else if (b < c)
        sum = (float)(a + c) / 2;
    else
        sum = (float)(a + b) / 2;
    topp = sum;
    cout << "Average of best of 2:" << sum << endl;
}

// Function to display student details
void student::display()
{
    cout << "Name:" << name << endl;
    cout << "USN:" << usn << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Marks:" << marks[i] << endl;
    }
}

// Function to display the topper's name
void student::topper()
{
    cout << "Topper is:" << name << endl;
}

int main()
{
    float arr[2];
    int count = 0, max = arr[0];

    student s[2];   // Create an array of 2 student objects
    for (int i = 0; i < 2; i++)
    {
        s[i].read();     // Read details for each student
        s[i].best();     // Calculate best of 2 subjects for each student
        s[i].display();  // Display the student details
        arr[i] = s[i].topp;   // Store the average of best of 2 in an array
    }

    for (int i = 0; i < 2; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count = i;
        }
    }

    s[count].topper();  // Display the topper's name
    return 0;
}
