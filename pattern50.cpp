/*
 j 1 2 3 4 5 6 7 8 9
i
1  *       * * * * *
2  *       *
3  *       *
4  * * * * * * * * *
5          *       *
6          *       *
7  * * * * *       *
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=9;j++){
			if(j==5||i==4||(i<2 && j>=5)||(i>6 && j<=5)||(j<2 &&i<5)||(j>8 && i>=4)){
			cout<<"*";
		}else{
			cout<<" ";
		}
			
		}cout<<endl;
	}
}
