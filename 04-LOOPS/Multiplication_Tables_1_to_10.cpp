#include<iostream>
using namespace std;
int main(){
	for(int number=1; number<=10; number++){
		cout<<"Table of"<<number<<endl;
	for(int i = 1; i<=10; i++){
		cout<<number<<"x"<<i<<"="<<number*i<<endl;
	}
	cout<<endl;
	}
	return 0;
}
