#include<iostream>
using namespace std;
void isEligible(int age);
main(){
while(1);
int age;
cout<<"Enter age: ";
cin>>age;
isEligible(age);}

void isEligible(int age){
if(age==18){
cout<<"Eligible";}
if (age<18){
cout<< "Not eligible";}
}

