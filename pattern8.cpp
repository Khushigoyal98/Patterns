/*
  j 1 2 3 4 5
i 
1   1 2 3 4 5
2   2 2 3 4 5
3   3 3 3 4 5
4   4 4 4 4 5
5   5 5 5 5 5 

*/

#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(j<=i){
				cout<<i<<" ";
			}else{
				cout<<j<<" ";
			}
		}cout<<endl;
	}
}
