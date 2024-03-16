


/*
Draw following pattern using only two loops

      * * * *
    * * * * *
  * *     * *
* *       * *
          * *
          * *
          * *
          * *
  * * * * * * * * * *

*/





#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 6 || j == 7 || (i <= 4 && i + j == 5) || (i <= 4 && i + j == 6) || (i == 2 && j == 5))
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
	cout<<"  * * * * * * * * * *";
	return 0;
}