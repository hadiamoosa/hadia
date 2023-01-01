#include <iostream>
using namespace std;
void payable(int amount,string day);
void tpayable(int amount,string day);
main(){
while(true){
string day;

int amount;

cout<< "Day: ";

cin>>day;

cout<< "Total purchase amount: ";

cin>>amount;

    if(day == "sunday")
{
	payable(amount,day);
}

  if(day == "monday")
{
	tpayable(amount,day);
}
  if(day == "tuesday")
{
	tpayable(amount,day);
}
  if(day == "wednesday")
{
	tpayable(amount,day);
}
  if(day == "thursday")
{
	tpayable(amount,day);
}
  if(day == "friday")
{
	tpayable(amount,day);
}
  
  if(day == "saturday")
{
	tpayable(amount,day);
}

     }
}
void payable(int amount,string day)
{
 
	int percent;
	percent=(amount*10)/100;
	int payable;
	payable=amount-percent;
	cout<< "paied : "<<payable<<endl;

}

void tpayable(int amount,string day)
{
     int Payable;
     Payable=(amount*5)/100;
     int payablee;
     payablee=amount-Payable;
     cout<<"Payable is: "<<payablee<<endl;
}