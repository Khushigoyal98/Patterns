/* 
 j 1 2 3 4 5 6
i 
1  @ @ @ @ @ !
2  @ @ @ @ ! @
3  @ @ @ ! @ @
4  @ @ ! @ @ @ 
5  @ ! @ @ @ @
6  ! ! ! ! ! ! 

*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=6;i++){
		for(j=1;j<=6;j++){
			if(i+j==7 || i==6){
				cout<<"!"<<" ";
			}else{
				cout<<"@ ";
			}
		}cout<<endl;
	}
}
