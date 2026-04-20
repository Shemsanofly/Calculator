#include<iostream>
using namespace std;
int main(){
	string name;
	int number;
	char choice;
	const double PI = 3.14;
	cout<<"What is your name"<<endl;
	cin>>name;
	cout<<"WELCOME TO THE MAGIC CALCULATOR"<<endl;
do{
	
	cout<<"Hi "<< name<<","<<"My name is Shemsa Amin"<<endl;
	cout<<"Which calculation do you want to perform"<<endl;
	cout<<"1. Perimeter of a square"<<endl;
	cout<<"2. Perimeter of a triangle"<<endl;
	cout<<"3. Perimeter of a circle"<<endl;
	cout<<"4. Perimeter of a rectangle"<<endl;
	cout<<"5. Area of a square"<<endl;
	cout<<"6. Area of a triangle"<<endl;
	cout<<"7. Area of a circle"<<endl;
	cout<<"8. Area of a rectangle"<<endl;
	cout<<"************************"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>number;
	cout<<"Congratulations! You've chosen the right option by choosing Magic Calculator"<<endl;
	
 	if(number==1){
 		double length;
 		cout<<"Enter the length"<<endl;
 		cin>>length;
 		cout<<"The perimeter of the square is "<<2*length<<endl;
	 }
	 if(number==2){
	 	double a;
	 	double b;
	 	double c;
	 	cout<<"Enter the base"<<endl;
	 	cin>>a;
	 	cout<<"Enter the height"<<endl;
	 	cin>>b;
	 	cout<<"Enter the width"<<endl;
	 	cin>>c;
	 	cout<<"The perimeter of the triangle is "<<a+b+c<<endl;
	 }
	 if(number==3){
	 	double radius;
	 	cout<<"Enter the radius"<<endl;
	 	cin>>radius;
	 	cout<<"The perimeter of the circle is  "<<2*PI*radius<<endl;
	 }
	 if(number==4){
	 	double length;
	 	double width;
	 	cout<<"Enter the length"<<endl;
	 	cin>>length;
	 	cout<<"Enter the width"<<endl;
	 	cin>>width;
	 	cout<<"The perimeter of the rectangle is "<<length+width<<endl;
	 }
	 if(number==5){
	 	double length;
	 	cout<<"Enter the length"<<endl;
	 	cin>>length;
	 	cout<<"The area of square is  "<<length*length<<endl;
	 }
	 if(number==6){
	 	double base;
	 	double height;
	 	cout<<"Enter the base"<<endl;
	 	cin>>base;
	 	cout<<"Enter the height"<<endl;
	 	cin>>height;
	 	cout<<"The area of triangle is "<<0.5*base*height<<endl;
	 }
	 if(number==7){
	 	double radius;
	 	cout<<"Enter the radius"<<endl;
	 	cin>>radius;
	 	cout<<"The area of a circle is "<<PI*radius*radius<<endl;
	 }
	 if(number==8){
	 	double length;
	 	double width;
	 	cout<<"Enter the length"<<endl;
	 	cin>>length;
	 	cout<<"Enter the width"<<endl;
	 	cin>>width;
	 	cout<<"The area of a rectangle is "<<length*width<<endl;
	 }
	 cout<<"Do you want to continue(Y/N)"<<endl;
	 cin>>choice;
}
	 while(choice=='Y'||choice=='y');{
	 	cout<<"Thank you for your time!!"<<endl;
	 }
}
