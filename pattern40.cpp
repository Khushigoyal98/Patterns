/*
 j 1 2 3 4 5
i
1  *
2  * *
3  * * *
4  * * * *
5  * * * * *
6  * * * *
7  * * *
8  * *
9  *
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<"* ";
		}cout<<endl;
	}
	for(i=1;i<=4;i++){
		for(j=4;j>=i;j--){
			cout<<"* ";
		}cout<<endl;
	}
}
