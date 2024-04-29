/*

2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
6 7 8 9 10
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	int count;
	for(i=1;i<=5;i++){
		count=i+1;
		for(j=1;j<=5;j++){
			cout<<count++<<" ";
		}
		cout<<endl;
	}
}
