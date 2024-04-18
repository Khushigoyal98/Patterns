/*
 j 1 2 3 4 5 6 7
i
1  *     *     *
2  *     *     *
3  * * * * * * *
4        *
5        *
6        *

*/

#include<iostream>
using namespace std;

int main(){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=1;j<=7;j++){
			if(i==3 || j==4 ||(j==1 && i<=3) || (j==7 && i<=3)){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}
