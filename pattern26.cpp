/*
 j12345
i
1      1
2     1 2
3    1 2 3
4   1 2 3 4
5  1 2 3 4 5
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,k;
	for(i=1;i<=5;i++){
		for(j=5;j>=i;j--){
			cout<<" ";
		}
		for(k=1;k<=i;k++){
			cout<<k<<" ";
		}cout<<endl;
	}
}
