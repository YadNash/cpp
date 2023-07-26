#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class date {
    int dd, mm, yy;  // Private member variables to store the day, month, and year

public:
    // Constructor that takes individual day, month, and year values
    date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    // Constructor that takes a string in the format "dd/mm/yyyy"
    date(const char* d) {
        sscanf(d, "%d%*c%d%*c%d", &dd, &mm, &yy);
    }

    void show_dateu();  // Member function to display the date in the "dd/mm/yyyy" format
};

void date::show_dateu() {
    cout << dd << '/' << mm << '/' << yy << endl;
}

int main() {
    int dd,mm,yy;
    cout<<"Enter the date, month, year:"<<endl;
    cin>>dd>>mm>>yy;
    date dat1(dd,mm,yy);  // Create a date object using the first constructor
    date dat2("11/10/2003");  // Create a date object using the second constructor

    dat1.show_dateu();  // Display the date using the show_dateu method
    dat2.show_dateu();  // Display the date using the show_dateu method

    return 0;
}
