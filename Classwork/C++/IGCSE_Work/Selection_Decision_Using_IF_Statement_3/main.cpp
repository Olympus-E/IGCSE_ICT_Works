#include<iostream>
#include<string>
using namespace std;

int main()
{
	string password = "mysecretpassword";
	string guess;

	cout << "Please Enter the Password : ";
	cin >> guess;

	if (guess == password)
	{
		cout << "Welcome!" << endl;
	}
	else
	{
		cout << "The password you entered is wrong!" << endl;
	}
	return 0;
}