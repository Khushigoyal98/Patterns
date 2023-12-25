/*

  1 2 3 4 5 6 7 8 9 
1 * * * * * * * * *
2 * * * *   * * * *
3 * * *       * * *
4 * *           * *
5 *               *
6 * *           * *
7 * * *       * * *
8 * * * *   * * * *
9 * * * * * * * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (i + j <= 6 || i - j >= 4||j-i>=4||i+j>=14)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }cout<<endl;
    }
}
