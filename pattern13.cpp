/*
 j 1 2 3 4 5
i
1  1 2 3 4 5
2  2 3 4 5
3  3 4 5
4  4 5
5  5

*/
#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=5;i>=1;i--){
		int temp=6-i;
		for(j=1;j<=i;j++){
			cout<<temp++<<" ";
		}cout<<endl;
	}
}
