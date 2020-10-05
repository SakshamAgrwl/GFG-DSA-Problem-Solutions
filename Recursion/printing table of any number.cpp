// To print table of any number

#include <iostream>
using namespace std;

int main()
{
    int i, number, ans;
    cout << "Enter the number" << endl;
    cin >> number;

    i = 1;
    do
    {
        ans = number * i;
        cout << "the value is : " << ans << endl;
        i++;

    } while (i <= 10);

    return 0;
}