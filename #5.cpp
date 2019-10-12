#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a<0)
    {
        cout << "отрицательное ";
        if(a%2==0)
        {
            cout << "чётное число";
        }
        else
        {
            cout << "нечётное число";
        }
    }
    if(a==0)
    {
        cout << "нулевое число";
    }
    if(a>0)
    {
        cout << "положительное ";
        if(a%2==0)
        {
            cout << "чётное число";
        }
        else
        {
            cout << "нечётное число";
        }
    }
}
