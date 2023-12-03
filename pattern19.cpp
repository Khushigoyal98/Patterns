/*
 j 1 2 3 4 5 6
i
1  6
2  1 6
3  1 2 6
4  1 2 3 6
5  1 2 3 4 6
6  1 2 3 4 5 6
*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=1;j<=i;j++){
			if(i==j){
				cout<<6<<" ";
			}else{
				cout<<j<<" ";
			}
		}cout<<endl;
	}
}
