#include<iostream>
using namespace std;

int main()
{
	int num1;

	cout << "Please enter the number : " << endl;
	cin >> num1;

	if (num1 >= 0)
	{
		cout << "Zero or positive" << endl;
	}
	else
	{
		cout << "Negative" << endl;
	}

	return 0;
}