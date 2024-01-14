/*
Draw the following pattern using only 2 loops
* * * * *
* 2 3 4 *
* 2 3 4 *
* 2 3 4 *
* * * * *

*/


#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==1||i==5||j==1||j==5)
			cout<<"*";
			else{
				cout<<j;
			}
		
		}
		cout<<endl;
	}
}
cout<<"Khushi";
