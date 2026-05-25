#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << endl
         << "Enter the value of a: ";
    cin >> a;
    if (a > 0)
    {
        cout << "+ve";
    }
    else if (a < 0)
    {
        cout << "-ve";
    }
    else
    {
        cout << "0";
    }

    return 0;
}