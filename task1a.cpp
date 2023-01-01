#include<iostream>
using namespace std;
void add(int num1 , int num2);
void subtract(int num1 , int num2);
void multiply(int num1 , int num2);
void divide(int num1 , int num2);

main()
{
int num1;
int num2;
char op;
cout<<"enter";
cin>>num1;
cout<<"enter";
cin>>num2;
cout<<"enter op";
cin>>op;
if(op == '+')

{add(num1,num2);
}
if (op == '-')
{subtract(num1,num2);
}
if (op == '*')
{multiply(num1,num2);
}
if (op == '/')
{divide(num1,num2);
}
}
void add(int num1 ,int num2)
{
int sum;
sum=num1+num2;
cout<<"sum " <<sum;
}

void subtract(int num1 , int num2)
{
int sub;
sub=num1-num2;
cout<<"sub " <<sub;
}

void multiply(int num1 , int num2)
{
int mul;
mul=num1-num2;
cout<<"mul" <<mul;
}
void divide(int num1 , int num2)
{
int div;
div=num1/num2;
cout<<"div" <<div;
}