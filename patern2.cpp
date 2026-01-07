// SSSDIIT
//  SSSDII
//   SSSDI
//    SSSD
//     SSS
//      SS
//       S


#include <iostream>
using namespace std;

int main()
{
    char arr[] = "SSSDIIT"; 
    int n = sizeof(arr)-sizeof(arr[0]);
    for (int i = 0; i <n; i++)
    {
        for (int j=i;j>0;j--)
        {
            cout << " ";
        }
        
            for (int j = 0; j <n-i ; j++)
            {
                cout << arr[j];
            }
        cout << endl;
    }
    return 0;
}