#include <iostream>
using namespace std;
class date
{
private:
	int month, day, year;
	char tChar;
public:
	void get_Date()
	{
		cout << "enter a date (format mm/dd/yyyy)" << endl;
		cin >> month >> tChar >> day >> tChar >> year;
	}
	void show_Date()
	{
		cout << month << "/" << day << "/" << year << endl;
	}

};
int main()
{
	date d1, d2;
	d1.get_Date();
	d2.get_Date();
	cout << "date 1: ";
	d1.show_Date();
	cout << "date 2: ";
	d2.show_Date();
	
	return 0;
}