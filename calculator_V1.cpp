#include<iostream>
using namespace std;
int main(){
	double first_number;
	int second_number;
	char oper;
	cout<<"WELCOME TO THE CALCULATOR"<<endl;
	cout<<"Enter the first number"<<endl;
	cin>>first_number;
	cout<<"Enter the second number"<<endl;
	cin>>second_number;
	cout<<"Enter the operator"<<endl;
	cin>>oper;
	switch(oper){
		case '+':
			cout<<"The sum of the two numbers is "<<first_number+second_number<<endl;
			break;
			case '-':
				cout<<"The differences between two numbers is "<<first_number-second_number<<endl;
				 break;
				case '*':
					cout<<"The product between two numbers is "<<first_number*second_number<<endl;
					break;
					case '/':
						cout<<"First number divide by second number results "<<first_number/second_number<<endl;
						break;
						default:
							cout<<"INVALID INPUT"<<endl;
	}
	return 0;
}
