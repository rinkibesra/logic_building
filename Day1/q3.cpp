#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a % 5 == 0 && a%11==0)
    {
        cout << "divisible by both";
    }

    else
    {
        cout << "not divisible by both";
    }

    return 0;
}