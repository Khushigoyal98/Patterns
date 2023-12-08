/* 
 j 1 2 3 4 
i
1  A B C D
2  E F G H
3  H I K L
4  M N O P
*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	char a='A';
	for(i=1;i<=4;i++){
		for(j=1;j<=4;j++){
			cout<<a++<<" ";
		}cout<<endl;
	}
}

