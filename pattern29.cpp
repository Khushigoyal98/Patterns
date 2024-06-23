/*

i
1       K
2      K H
3     K H U
4    K H U S
5   K H U S H
6  K H U S H I
*/

#include<iostream>
using namespace std;

int main(){
	char arr[]={'K','H','U','S','H','I'};
	int i,j,k;
	for(i=1;i<=6;i++){
		for(j=6;j>=i;j--){
			cout<<" ";
		}for(k=0;k<i;k++){
			cout<<arr[k]<<" ";
		}cout<<endl;
	}
}
