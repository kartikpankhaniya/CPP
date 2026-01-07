#include <iostream>
using namespace std;

int main()
{
    for (int i=71;i>=65;i=i-2)
    {
        for (int j=65 ;j<=i;j++)
        {
            cout << char(j);
        }
        cout << endl;
    }
    return 0;
}