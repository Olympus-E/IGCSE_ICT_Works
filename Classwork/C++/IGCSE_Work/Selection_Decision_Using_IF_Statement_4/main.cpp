#include<iostream>
using namespace std;

int main()
{
	float num;

	cout << "Enter a number : ";
	cin >> num;

	if (num == 0)
	{
		cout << "You just entered 0" << endl;
	}
	else if (num > 0)
	{
		cout << "You entered a positive number" << endl;
	}
	else
	{
		cout << "You entered a negative number" << endl;
	}
	
	return 0;
}