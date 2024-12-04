#include <iostream>
using namespace std;
int main()
{
	double expenses,income,balance;
	int amount;
	int choice;
	do{
	cout<<"\nPersonal budget tracker\n";
	cout<<"Add income\n";
	cout<<"Add expense\n";
	cout<<"View balance\n";
	cout<<"Exit\n";
	cin>>choice;
	switch(choice)
	{
		if(income<0){
			cout<<"invalid";
		}
	case 1:
	cout<<"Enter a income amount";
	amount=income+balance;
	break;
	case 2:
	cout<<"Enter expese amount";
	amount=expense-balance;
	if(expense>balance){
		cout<<"insufficient balance for this balace";
	}
	break;
	case 3:
	cout<<"Enter balance";
	balance=total income-total enpense;
	break;
	case 4:
	cout<<"Exit the program";
	default:
		cout<<"invalid choice";
	while(menu!=5);
	cout<<"exit";
}
}
return 0;
}

