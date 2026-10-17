#include<iostream>
using namespace std;
int main(){
	int num1,num2,i,j;
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number:";
	cin>>num2;
	if(num1<num2){
		for( i = num1; i<=num2; i++){
			cout<<"Table of "<<i<<endl;
			for( j = 1; j<=10; j++)
			{	
				cout<<i<<"x"<<j<<"="<<i*j<<endl;
			}
		}
	}
	else if(num1>num2){
		for( i = num1; i>=num2; i--){
			cout<<"Table of "<<i<<endl;
			for( j = 1; j<=10; j++)
			{	
				cout<<i<<"x"<<j<<"="<<i*j<<endl;
			}
		}
	}
	return 0;
}
