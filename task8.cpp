#include <iostream>
using namespace std;
void discount(int amount,string day);
main(){

string day;

int amount;

cout<< "Day: ";

cin>>day;

cout<< "Total purchase amount: ";

cin>>amount;

    if(day == "sunday")
{
	discount(amount,day);
}
     }
void discount(int amount,string day)
{
 
	int percent;
	percent=(amount*10)/100;
	cout<< "disount is"<<percent;
}