/* 

 j 1 2 3 4 5
i  
1  5
2  5 4
3  5 4 3
4  5 4 3 2
5  5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<6-j<<" ";
		}cout<<endl;
	}
}
