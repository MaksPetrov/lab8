#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if(x>0 && y>0)
    {
        cout << 1;
    }
    if(x<0 && y>0)
    {
        cout << 2;
    }
    if(x<0 && y<0)
    {
        cout << 3;
    }
    if(x>0 && y<0)
    {
        cout << 4;
    }
    if(x==0 && y==0)
    {
        cout << "Начало координат";
    }
}
