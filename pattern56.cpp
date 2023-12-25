/*
 j 1 2 3 4 5
i
1  * * * * *
2      * * *
3        * *
4      * * *
5  * * * * * 
*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1||i==5||(i==2 && j>2)||(i==4 && j>2)||(i==3 &&j>3)){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}
