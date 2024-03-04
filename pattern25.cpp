/*

 j 1 2 3 4
i
1  0
2  1 2
3  0 1 2
4  0 1 2 0
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	int x=0;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			cout<<x++<<" ";
			if(x==3 ){
				x=0;
			}
		}cout<<endl;
	}
}
