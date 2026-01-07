// 0101010
//  101010
//   01010
//    1010
//     010
//      10
//       0



#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 7; j >= i - 1; j--)
        {
            cout << " ";
        }

        for (int j = i; j > 0; j--)
        {
            if(j%2!=0){
                cout << "0";
            }
            else{
                cout<<"1";
            }
        }

        cout << endl;
    }
    return 0;
}