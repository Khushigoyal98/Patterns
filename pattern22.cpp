/*

 j 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
i
1  * * * * * * * * * * * *
2    * * * * * * * * * * * *
3      * * * * * * * * * * * *
4        * * * * * * * * * * * *
5          * * * * * * * * * * * *
6            * * * * * * * * * * * *
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=1;j<=i+10;j++){
			if(j<i){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}cout<<endl;
	}
}
