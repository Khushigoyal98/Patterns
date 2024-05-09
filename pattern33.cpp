/* 
 j 1 2 3 4
i
1  1 2 3 4
2  2 3 4 1
3  3 4 1 2
4  4 1 2 3
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		int temp=i;
		for(j=1;j<=4;j++){
			cout<<temp++<<" ";
			if(temp==5){
				temp=1;
			}
		}cout<<endl;
	}
}
