#include<iostream>
#include <math.h>
#include "Selection_Decision_Using_IF_Statement.h"
using namespace std;

int main()
{
	cout << "Please enter the first number : " << endl;
	cin >> num1;

	cout << "Please enter the second number : " << endl;
	cin >> num2;
	if (num1 > num2)
	{
		cout << "The biggest number is " << num1;
	}
	else
	{
		cout << "The biggest number is " << num2;
	}
	return 0;
}