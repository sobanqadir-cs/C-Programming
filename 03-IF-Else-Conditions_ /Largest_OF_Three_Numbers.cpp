#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3;
	cout<<"Enter First Number:";
	cin>>num1;
	cout<<"Enter Second Number:";
	cin>>num2;
	cout<<"Enter Third Number:";
	cin>>num3;
	if(num1>num2 && num1>num3){
		cout<<"Largest Number is:"<<num1;
	}
	else if(num2>num1 && num2>num3){
		cout<<"Largest Number is:"<<num2;
	}
	else if(num3>num1 && num3>num2){
		cout<<"Largest Number is:"<<num3;
	}
	else {
		cout<<"All Numbers are Equal";
	}
	return 0;
}
