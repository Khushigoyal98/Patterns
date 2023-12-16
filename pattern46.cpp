/*
 j 1 2 3 4 5 6 7
i
1  *           *
2  * *       * *
3  *   *   *   *
4  *     *     *
5  *           *
6  *           *
7  *           *
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		cout<<"		";
		for(j=1;j<=7;j++){
			if(j==1||j==7||(i<=4 && i==j)||(i<=4 && i+j==8)){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}
}
