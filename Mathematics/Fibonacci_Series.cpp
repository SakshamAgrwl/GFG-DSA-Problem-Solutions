// To print Fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, i, c, n;
    cout << "Enter no. of elements to be displayed = " << endl;
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        cout << "" << a << "\t"; // \t is used for spacing between the no. in a single line.
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}