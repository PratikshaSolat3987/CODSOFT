#include <iostream>
using namespace std;
int main (){
	int num1, num2;
	char operation;
	
	cout<<"Enter the first number:";
	cin >> num1;
	
	cout<<"Enter the second number:";
	cin >> num2;
	
	cout<<"Enter the operation(+,-,*,/ ):";
	cin >>operation;
	
	switch (operation) {
		case'+':
			cout<< "Result:"<< num1+num2 <<endl;
			break;
			case'-':
				cout<<"Result"<< num1-num2 <<endl;
				break;
				case'*':
					cout<<"Result"<< num1*num2 <<endl;
					break;
					case'/':
						if (num2!= 0)
						cout<<"Result"<< num1/num2 <<endl;
						else
						cout<<"Eror:Division by zero is not allowed."<<endl;
						break;
						default:
						cout<<"Eror:invalid operation."<<endl;
						break;
	}
	return 0;
}




