#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cin >> a;
    if(a%2==0)
    {
        cout << "������ ";
        if(a/10==0)
        {
            cout << "����������� �����";
        }
        else if(a/100==0)
        {
            cout << "���������� �����";
        }
        else
        {
            cout << "���������� �����";
        }
    }
    else
    {
        cout << "�������� ";
        if(a/10==0)
        {
            cout << "����������� �����";
        }
        else if(a/100==0)
        {
            cout << "���������� �����";
        }
        else
        {
            cout << "���������� �����";
        }
    }
}
