/*

 j 1 2 3 4 5
i
1  5
2  4 5
3  3 4 5
4  2 3 4 5
5  1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=5;i>=1;i--){
		int temp =i;
		for(j=5;j>=i;j--){
			cout<<temp++<<" ";
		}cout<<endl;
	}
}
