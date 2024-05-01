/* 
1 2 3 4 5
A A A A A
1 2 3 4 5
A A A A A
1 2 3 4 5
*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i%2==0){
				cout<<"A ";
			}else{
				cout<<j<<" ";
			}
		}cout<<endl;
	}
}
