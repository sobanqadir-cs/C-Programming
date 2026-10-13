#include<iostream>
using namespace std;
int main(){
	int number,first;
	cout<<"Enter a number:";
	cin>>number;
	while(number>=10)
	{
		number = number/10;
	}
	cout<<"First Digit is:"<<number;
	return 0;
}
