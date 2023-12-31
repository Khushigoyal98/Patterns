/*

Draw following pattern using two loops -->

#     #   # # # #   # # #   # # #   #           #
#     #   #     #   #   #   #   #     #       #
# # # #   # # # #   # # #   # # #         #
#     #   #     #   #       #             #
#     #   #     #   #       #             #


*/

#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 25; j++)
        {
            if (j == 1 || j == 4 || (i == 3 && j <= 4) || j == 6 || j == 9 || (j >= 6 && j <= 9 && i == 1) || (j >= 7 && j <= 8 && i == 3) || j == 11 || (j == 13 && i <= 3) || (i == 1 && j == 12 || i == 3 && j == 12) || j == 15 || (j == 17 && i <= 3) || (i == 1 && j == 16 || i == 3 && j == 16) || (j - i == 18 && i < 3) || (i + j == 26 && i < 3) || (j == 22 && i >= 3))
            {
                cout<<"# ";
            }
            else
            {
                cout<<"  ";
            }
        }
        printf("\n");
    }

    return 0;
}