#include<iostream>
#include<string>
using namespace std;

int index(string array[], string value, int length)
{
	for (int i = 0; i <= 12; i++)
	{
		if (value == array[i])
		{
			return i;
		}
	}
}

string lower(string str)
{
	for (unsigned int i = 0; i <= str.length(); i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] += 32;
		}
	}

	return str;
}

int main()
{
	string month_name[12] = { "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec" };
	int day_number[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int index_num;
	string user_input, user_input_lower;

	cout << "Please enter the month name : ";
	cin >> user_input;

	user_input_lower = lower(user_input);

	index_num = index(month_name, user_input_lower, 12);

	cout << "There are " << day_number[index_num] << " days in " << user_input;

	return 0;
}
