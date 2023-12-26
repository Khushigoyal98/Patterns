/*

Draw following pattern using loops

     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
    * *
   * * *

*/

#include<iostream>
using namespace std;
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<"* ";
        }

        cout<<endl;;
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
           cout<<"* ";
        }

        cout<<endl;
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 4; j >= i; j--)
        {
           cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}
