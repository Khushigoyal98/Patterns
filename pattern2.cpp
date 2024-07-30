/*
1 1 1 1 1
1 2 3 4 5
3 3 3 3 3
1 2 3 4 5
5 5 5 5 5
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5; i++)
	{
		for(j=1;j<=5; j++){
			if(i%2==0){
				cout<<j<<" ";
			}else{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}
