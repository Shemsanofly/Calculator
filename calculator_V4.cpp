 #include<iostream>
 using namespace std;
 int main(){
 	double number;
 	double range;
 	char oper;
 	char choice;
 	string name;
 	cout<<"WELCOME TO THE MAGIC CALCULATOR"<<endl;
 	cout<<"Enter your name"<<endl;
 	cin>>name;
 	do{
 	cout<<"Hello "<<name<<","<<"My name is Shemsa Amin"<<endl;
 	cout<<"Enter your number"<<endl;
 	cin>>number;
 	cout<<"Enter your range"<<endl;
 	cin>>range;
 	cout<<"Enter your operator"<<endl;
 	cin>>oper;
 	for(int i=1;i<=range;i++){
 		switch(oper){
 			case '+':
 				cout<<number<<"+"<<i<<"="<<number+i<<endl;
 				break;
 				case '-':
 					cout<<number<<"-"<<i<<"="<<number-i<<endl;
 					break;
 					case '*':
 						cout<<number<<"*"<<i<<"="<<number*i<<endl;
 						break;
 						case '/':
 							cout<<number<<"/"<<i<<"="<<number/i<<endl;
 							break;
 							default:
 								cout<<"INVALID INPUT!!"<<endl;
		 }
	}
	cout<<"DO YOU WANT TO PROCEED ?"<<endl;
	cin>>choice;
}
	while(choice=='Y'||choice=='y');{
		cout<<"THANKS FOR YOUR TIME!"<<endl;
	}
	return 0;
 }
