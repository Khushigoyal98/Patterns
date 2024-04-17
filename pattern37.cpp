/*
i j 1 2 3 4 5 6 7
1  7 7 7 7 7 7 7
2            7
3          7
4        7
5      7
6    7
7  7
       
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if(i==1||i){
				cout<<"7 ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}	      
