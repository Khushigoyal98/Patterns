/*

 j 1 2 3 4 5 
i  
1  1 * 3 * 5
2  * 2 * 4 *
3  1 * 3 * 5
4  * 2 * 4 *
5  1 * 3 * 5

*/

#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			if(i%2==0 && j%2!=0){
				cout<<"*"<<" ";
			}else if(i%2!=0 && j%2==0){
				cout<<"*"<<" ";
			}else{
				cout<<j<<" ";
			}
		}cout<<endl;
	}
}
