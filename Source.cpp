#include<iostream>
#include<conio.h>
using namespace std;

void StringConcat(char[], char[]);

void main()
{
	const int SIZE = 80;
	char String1[SIZE] = {};
	char String2[SIZE] = {};

	cout << "Please Enter Value Of String 1:- ";
	cin.getline(String1, SIZE, '\n');
	cout << "Please Enter Value Of String 2:- ";
	cin.getline(String2, SIZE, '\n');

	StringConcat(String1, String2);

	_getch();

}

void StringConcat(char String1[], char String2[])
{
	int count = 0;
	for (int i = 0; String1[i] != '\0'; i++)
	{
		++count;
	}
	String1[count] = ' ';
	++count;
	for (int k = 0; String2[k] != '\0'; k++)
	{
		String1[count] = String2[k];
		++count;
	}
	cout << "Concatenated String:- ";
	for (int l = 0; String1[l] != '\0'; l++)
	{
		cout << String1[l];
	}
}