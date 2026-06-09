#include<iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter 1st number: " << endl;
    cin >> a;

    cout << "Enter 2nd number: " << endl;
    cin >> b;

    if(a > b)
    {
        cout << "A is greater" << endl;
    }
    else if(b > a)
    {
        cout << "B is greater" << endl;
    }
    else
    {
        cout << "Both are equal" << endl;
    }

    return 0;
}
