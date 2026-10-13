#include<iostream>
using namespace std;
int main(){
	int number,last;
	cout<<"Enter a number:";
	cin>>number;
	number = number%10;
	cout<<"Last Digit is:"<<number;
	return 0;
}
