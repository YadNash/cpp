#include <iostream>
#include <cstring>
using namespace std;

// Function to find the maximum value among three integers
inline int max(int a, int b, int c)
{
    // Ternary operator is used to compare the values and return the maximum
    // return (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    return (a>b && a>c)?a:(b>c)?b:c;
}

int main()
{
    int a,b,c;
    cout<<"Enter 3 Elements:"<<endl;
    cin>>a>>b>>c;
    // Calling the max function with arguments 10, 4, and 3, and printing the result
    cout << "The maximum Element is:"<<max(a,b,c) << endl;

    return 0;
}
