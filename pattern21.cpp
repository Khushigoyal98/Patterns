/*
 j 1 2 3 4 5 6 7 8 9 10 11 12
i
1  * * * * * * * * * * * *
2    * * * * * * * * * * * *
3  * * * * * * * * * * * *
4    * * * * * * * * * * * *
5  * * * * * * * * * * * *
6    * * * * * * * * * * * *
7  * * * * * * * * * * * *
8    * * * * * * * * * * * *

*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=8;i++){
		for(j=1;j<=12;j++){
			if(i%2==0){
				if(j==1){
					cout<<" ";
				}else{
					cout<<"*";
				}
			}else if(j<=11){
				cout<<"*";
			}
				
			}cout<<endl;
		}
	}
