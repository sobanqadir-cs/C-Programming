#include<iostream>
using namespace std;
int main(){
	cout<<"enter 1 for additin"<<endl;
	cout<<"enter 2 for subtraction"<<endl;
	cout<<"enter 3 for multiplication"<<endl;
	cout<<"enter 4 for Division"<<endl;
	cout<<"enter 5 for power of 2"<<endl;
	cout<<"enter 6 for modulus"<<endl;
	int a;
	cout<<"Enter a number:";
	cin>>a;
	if(a==1){
		
		int num1,num2;
		cout<<"Enter number 1:"<<endl;
		cin>>num1;
		cout<<"Enter number 2:"<<endl;
		cin>>num2;
		int sum;
		sum=num1+num2;
		
		cout<<"Sum of two number is:"<<sum;
	}
	else if (a==2){
		int num1,num2;
		cout<<"Enter a number 1:";
		cin>>num1;
		cout<<"Enter Number 2:";
		cin>>num2;
		int sub;
		sub = num1-num2;
		cout<<"Subtraction of Two number is:"<<sub;
	}
	else if(a==3){
		int num1,num2;
		cout<<"Enter a number 1:";
		cin>>num1;
		cout<<"Enter Number 2:";
		cin>>num2;
		int mul;
		mul = num1*num2;
		cout<<"Multiplication of Two number is:"<<mul;
		
	}
	else if(a==4){
		int num1,num2;
		cout<<"Enter a number 1:";
		cin>>num1;
		cout<<"Enter Number 2:";
		cin>>num2;
		int divide;
		divide = num1/num2;
		cout<<"Division of Two number is:"<<divide;
		
	}
	else if(a==5){
		int num1;
		cout<<"Enter a number :";
		cin>>num1;
		int Square;
		Square=num1*num1;
		cout<<"Square of number is:"<<Square;
		
	}
	else if(a==6){
		int num1,num2;
		cout<<"Enter a number 1:";
		cin>>num1;
		cout<<"Enter Number 2:";
		cin>>num2;
		int modulus;
		modulus = num1%num2;
		cout<<"Modulus of Two number is:"<<modulus;
		
	}
	else 
	cout<<"Invlaid";
	
		
	}
	  
	  
	
	
