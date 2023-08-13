#include<iostream>
using namespace std;#include<iostream>
using namespace std;
int main() {
	char operation;
	double num1, num2, result;
	cout<<"This is a calculator"<<endl;
	cout<<"Enter the first number:  ";
	cin>>num1;
	cout<<endl;
	cout<<"Enter the second number:  ";
	cin>>num2;
	cout<<"Enter an operation (+,-,*,/):  " ;
	cin>>operation;
	
	switch(operation){
		case '+':
			result = num1+num2;
			break;
		
		case '-':
			result = num1-num2;
			break;
		
		case '*':
			result =num1*num2;
			break;
		case '/':
			if(num2==0){
				cout<<"We cannot divide a number by 0";
				return 1;
			}
			
			result = num1/num2;
			break;
		default:
			cout<<"Error: invalid operator";
			return 1;
			
	}
	cout<<"The result is :  "<<result<<endl;
}
