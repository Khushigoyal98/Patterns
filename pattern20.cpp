/*

Draw the following pattern using 2 loops
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			cout<<"* ";
		}cout<<endl;
	}
}
