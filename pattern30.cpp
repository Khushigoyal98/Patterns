/*
 j 1 2 3 4 5
i
1  # # 1 # #
2  # # 1 # #
3  0 0 1 0 0
4  # # 1 # #
5  # # 1 # #

*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j==3){
				cout<<"1 ";
			}else if(i==3){
				cout<<"0 ";
			}else{
				cout<<"# ";
			}
		}cout<<endl;
	}
}
