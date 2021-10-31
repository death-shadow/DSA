#include<iostream>
#include<algorithm>
using namespace std;
int main(){
 
int i, j ; 
int m , n ;
cin>>m>>n;
int a[m][n];
for( i = 0 ; i<=m-1 ; i++){
	for(j=0 ; j<= n-1 ;j++){
		cin>>a[i][j];
	}
}
 
 
int d;
for( i = 0 ; i<=m-1 ; i++){
	for(j=0 ; j<= n-1 ;j++){
		if(a[i][j] == 1){
			
			d=abs(2-i)+abs(2-j);
			break;
 
		}
		
	}
}
cout<<d;
 
 
	return 0;	
}

