
/*

Draw following pattern using only 2 loops

*         *         *
  *       *       *
    *     *     *
      *   *   *
        * * *
* * * * * * * * * * *
        * * *
      *   *   *
    *     *     *
  *       *       *
*         *         *


*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 11; i++)
    {
        for (j = 1; j <= 11; j++)
        {
            if (j==i || i+j==12||i==6||j==6)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
	return 0;
}