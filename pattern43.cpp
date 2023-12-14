/*
 j 1 2 3 4 5
i
1  1 2 3 2 1
2  2 2 3 2 2 
3  3 3 3 3 3
4  2 2 3 2 2
5  1 2 3 2 1
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==3||j==3){
				cout<<"3 ";
			}else if(i==2||j==2||i==4||j==4){
				cout<<"2 ";
			}else{
				cout<<"1 ";
			}
		}cout<<endl;
	}
}
