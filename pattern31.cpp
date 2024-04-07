/*
 j 1 2 3 4 5
i
1  p
2  q p
3  r q p
4  s r q p
5  t s r q p
*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	char p='p';
	for(i=1;i<=5;i++){
		char temp=p+i-1;
		for(j=1;j<=i;j++){
			cout<<temp--<<" ";
		}cout<<endl;
	}
}
