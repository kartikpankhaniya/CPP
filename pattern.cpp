// 54321
//  1234
//   321
//    12
//     1
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >=i-1 ; j--)
        {
            cout << " ";
        }
        if (i % 2 == 0)
        {
            for (int j = 1; j <= i ; j++)
            {
                cout << j;
            }
        }
        else {
            for (int j = i; j > 0; j--)
            {
                cout << j;
            }
        }
        cout << endl;
    }
    return 0;
}