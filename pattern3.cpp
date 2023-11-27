/*
 j 1 2 3 4 5
i  
1  1 * * * *
2  1 2 * * *
3  1 2 3 * *
4  1 2 3 4 *
5  1 2 3 4 5
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(j<=i){
				cout<<j<<" ";
			}else{
				cout<<"*"<<" ";
			}
		}
		cout<<endl;
	}
}
