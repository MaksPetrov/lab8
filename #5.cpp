#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a<0)
    {
        cout << "������������� ";
        if(a%2==0)
        {
            cout << "������ �����";
        }
        else
        {
            cout << "�������� �����";
        }
    }
    if(a==0)
    {
        cout << "������� �����";
    }
    if(a>0)
    {
        cout << "������������� ";
        if(a%2==0)
        {
            cout << "������ �����";
        }
        else
        {
            cout << "�������� �����";
        }
    }
}
