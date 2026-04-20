#include<iostream>
using namespace std;
int main(){
	double first_number;
	double second_number;
	char oper;
	char choice;
		do{
	cout<<"WELCOME TO THE SCIENTIFIC CALCULATOR"<<endl;
	cout<<"Enter your first number"<<endl;
	cin>>first_number;
	cout<<"Enter your second number"<<endl;
	cin>>second_number;
	cout<<"Enter your operator"<<endl;
	cin>>oper;
	switch(oper){
		case'+':
			cout<<"The sum of this two numbers is "<<first_number+second_number<<endl;
			break;
		case'-':
		cout<<"The differences between this two numbers is "<<first_number-second_number<<endl;
		break;
		case'*':
		cout<<"The product of this two numbers is "<<first_number*second_number<<endl;
		break;
		case'/':
		cout<<"The first number divide by second number, the answer is "<<first_number/second_number<<endl;
		break;
		default:
		cout<<"INVALID INPUT!!"<<endl;
	}
	cout<<"DO YOU WANT TO CONTINUE (Y/N)";
	cin>>choice;
}
while(choice=='Y'||choice=='y');{
	cout<<"Thanks you for your time"<<endl;
}
return 0;
}

