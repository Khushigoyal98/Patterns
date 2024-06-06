/*

0
1 1
2 3 5
8 13 21 34
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	int x=-1,y=1,sum=0;
	
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			sum=x+y;
			cout<<sum<<" ";
			x=y;
			y=sum;
			
		}cout<<endl;
	}
}
