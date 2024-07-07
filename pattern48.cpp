/*

Draw following pattern using only 2 loops

*  *  *  *  *  *  *  *  *  *  *  
*  *        *     *        *  *
*     *  *           *  *     *
*     *  *           *  *     *
*  *        *     *        *  *
*              *              *
*  *        *     *        *  *
*     *  *           *  *     *
*     *  *           *  *     *
*  *        *     *        *  *
*  *  *  *  *  *  *  *  *  *  *

*/

#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=11;i++){
		for(j=1;j<=11;j++){
			if(i==1||j==1||i==11||j==11||i==j||i+j==12||i+j==7||j-i==5||i-j==5||i+j==17){
				cout<<"*  ";
			}else{
				cout<<"   ";
			}
		}cout<<endl;
	}
}
