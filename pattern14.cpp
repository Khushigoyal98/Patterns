/*

 j 1 2 3 4 5
i
1  1
2  2 1
3  3 2 1
4  4 3 2 1
5  5 4 3 2 1

*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		int temp=i;
		for(j=1;j<=i;j++){
			cout<<temp--<<" ";
		}cout<<endl;
	}
}
