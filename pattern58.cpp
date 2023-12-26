/*
      *
    * * *
  * * * * *
    * * *
  * * * * *
* * * * * * *
      *
      *
      *
   *******
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=7;j++){
			if(i==6||j==4||(i<=3 && i+j>=5 && j-i<=3)||(i>3 && i<7 && i+j>=7 && j-i<=1)){
				cout<<"* ";
			}else{
				cout<<"  ";
			}
		}cout<<endl;
	}cout<<"   *******   ";
}
