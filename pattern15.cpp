/*
Draw the following pattern using two loops
 j 1 2 3 4 5
i  
1  5 4 3 2 1
2  5 4 3 2 1
3  5 4 3 2 1
4  5 4 3 2 1
5  5 4 3 2 1

*/

#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<6-j<<" ";
		}cout<<endl;
	}
}
