/*
 j 1 2 3 4 5 6 7 8 9
i          
1          1
2        2 2 2
3      3 3 3 3 3
4    4 4 4 4 4 4 4 
5  5 5 5 5 5 5 5 5 5
*/

#include<iostream>
using namespace std;

int main(){
	int i,j,k;
	int arr[]={1,3,5,7,9};
	for(i=1;i<=5;i++){
		for(k=5;k>=i;k--){
		cout<<" ";
			}
			for(j=1;j<=arr[i-1];j++){
				cout<<i;
			}cout<<endl;
	}
}
