/*

 j 1 2 3 4 5
i 
5  1 2 3 4 5
4  1 2 3 4
3  1 2 3
2  1 2
1  1

*/

#include<iostream>
using namespace std;
 int main(){
 	int i,j;
 	for(i=5;i>=1;i--){
 		for(j=1;j<=i;j++){
 			cout<<j<<" ";
		 }cout<<endl;
	 }
 }
