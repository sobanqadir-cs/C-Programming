#include<iostream>
using namespace std;
int main(){
int num;
  cout<<"Enter Your Numbers:";
  cin>>num;
if(num>100 || num<0){
  cout<<"Invaild";
}
else if(num>=80){
  cout<<"4GPA";
}
else if(num>=70){
  cout<<"3GPA";
}
else if(num>=60){
  cout<<"2GPA";
}
else if(num>=50){
  cout<<"1GPA";
}
else {
  cout<<"Fail";
}
return 0;
}
