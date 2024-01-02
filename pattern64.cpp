/*

0 1 1 1 1 1 0
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
0 1 1 1 1 1 0
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			if(i==j || i+j==8){
				cout<<"0 ";
			}else if(i==1 || i==7|| j==1 ||j==7){
				cout<<"1 ";
			}else{
				cout<<"0 ";
			}
		}cout<<endl;
	}
}
