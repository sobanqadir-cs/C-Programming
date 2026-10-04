#include<iostream>
using namespace std;
int main(){
  float sessional,midterm,final,total,percentage;
cout<<"Enter your Sessional Marks:";
cin>>sessional;
cout<<"Enter your Midterm Marks:";
cin>>midterm;
cout<<"Enter your Final Marks:";
cin>>final;
total = sessional +midterm + final;
cout<<"Your Final Marks ="<<total<<endl;
percentage = (total/100) *100;
cout<<"Final Percentage ="<<percentage<<"%";
return 0;
}
