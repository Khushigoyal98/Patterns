/*

A A A A A
A B B B A
A B C B A
A B B B A
A A A A A
*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
		if(i==1||i==5||j==1||j==5){
			cout<<"A ";
		}else if(i==2||i==4||j==2||j==4){
			cout<<"B ";
		}else{
			cout<<"C ";
		}	
		}cout<<endl;
	}
}
