
/*

Draw following pattern using only 2 loops

* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *



*/

#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j <= 6 || i - j >= 4)
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