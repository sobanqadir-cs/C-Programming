#include<iostream>
using namespace std;
int main(){
	int number,digit;
	int sum = 0;
	cout<<"Enter a number:";
	cin>>number;
	while(number>0)
	{
		digit = number % 10;
		sum = sum + digit;
		number = number/10;
	}
	cout<<"Sum of Digits = "<<sum;
	return 0;
}
