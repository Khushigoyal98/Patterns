
/*

Draw following pattern using only 2 loops

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *


*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i + j >= 11 || i - j >= 0)
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