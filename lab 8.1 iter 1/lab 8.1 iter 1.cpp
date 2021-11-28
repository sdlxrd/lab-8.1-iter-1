// є рядок, в якому є 3 крапки, знайти [i] третьої

#define _SRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Third_Point(char* str)
{
	int count=0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.')
			count++;

		if (count == 3)
		{
			return i;
		}
	}
}
char* Change(char* str)
{
	int i = 0;
	str[i + 3] = '.';
	for (int i = 3; i < strlen(str);)
	{
		i += 4;
		str[i] = '.';
	}
	return str;
}
int main()
{
	char str[40];
	cout << "Enter string:   "; 
	cin.getline(str, 40);
	cout <<endl << "i of third . = " << Third_Point(str) << endl;;
	char* changed = new char[40];
	changed = Change(str);
	cout << endl << "Changed string: " << changed << endl;
	
}