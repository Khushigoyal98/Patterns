/*

 j  1 2 3 4 5 
i
1   * 2 3 4 *     
2   1 * 3 * 5
3   1 2 * 4 5
4   1 * 3 * 5
5   * 2 3 4 *
*/


#include<iostream>
using namespace std;

int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i==j || i+j==6){
				cout<<"*"<<" ";
			}else {
				cout<<j<<" ";
		}
	}cout<<endl;
}
}

