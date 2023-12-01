/*

 j 1 2 3 4 5
i
1  1 2 3 4 5
2  5 4 3 2 1
3  1 2 3 4 5
4  5 4 3 2 1
5  1 2 3 4 5

*/

#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i%2!=0){
				cout<<j<<" ";
			}else{
				cout<<6-j<<" ";
			}
		}cout<<endl;
	}
}
