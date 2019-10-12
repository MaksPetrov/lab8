#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a%2==0)
    {
        cout << "чётное ";
        if(a/10==0)
        {
            cout << "однозначное число";
        }
        else if(a/100==0)
        {
            cout << "двузначное число";
        }
        else
        {
            cout << "трёхзначное число";
        }
    }
    else
    {
        cout << "нечётное ";
        if(a/10==0)
        {
            cout << "однозначное число";
        }
        else if(a/100==0)
        {
            cout << "двузначное число";
        }
        else
        {
            cout << "трёхзначное число";
        }
    }
}
