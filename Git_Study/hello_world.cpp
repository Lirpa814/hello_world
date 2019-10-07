#include <iostream>
using namespace std;

int main()
{
	int num1= 0;
	int num2= 0;
	char symbol = ' ';

	cin >> num1>> num2>> symbol;

	if (symbol == '/')
		cout << num1/ num2<< endl;

	return 0;
}