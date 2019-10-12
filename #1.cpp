#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if(a>b)
    {
        b = a;
    }
    else if(b>a)
    {
        a = b;
    }
    else
    {
        a = 0;
        b = 0;
    }
    cout << "a = " << a << endl << "b = "  << b;
}
