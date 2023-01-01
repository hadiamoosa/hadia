#include<iostream>
using namespace std;
void isEven(int number);
void isOdd(int number);
main(){
int number;
while(1){
cout<< "Enter number: ";
cin>>number;
 isEven(number);
 isOdd(number);}
}
void isEven(int number){
    if(number%2==0){
   cout<<"even";
}
    }
void isOdd(int number){
 if(number%2==1){
    cout<< "odd";}
  
    }