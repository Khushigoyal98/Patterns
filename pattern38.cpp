/* 
 j 1 2 3 4 5 6 7
i 
1  Z Z Z Z Z Z Z
2            Z 
3          Z  
4        Z   
5      Z    
6    Z
7  Z Z Z Z Z Z Z
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if(i==1||i==7||i+j==8){
				cout<<"Z ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}
