#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if(abs(a-b)<abs(a-c))
    {
        cout << "b " << abs(a-b);
    }
    else if(abs(a-b)>abs(a-c))
    {
        cout << "c " << abs(a-c);
    }
    else
    {
        cout << "odinakovoe rasstoyanie " << abs(a-b);
    }
}
