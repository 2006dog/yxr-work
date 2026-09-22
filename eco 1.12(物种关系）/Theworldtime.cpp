#include "Theworldtime.h"
Theworldtime::Theworldtime()
{
	this->years = 2026;
	this->months = 9;
	this->days = 20;
	this->hours = 6;
	this->season = "spring";
	cout << "The beginning time is " << years << "years" << months << "months" << days << "dys" << hours <<"hours" <<endl;
}
Theworldtime::Theworldtime(int y, int mo, int d, int h,string s)
{
	this->years = y;
	this->months = mo;
	this->days = d;
	this->hours = h;
	this->season = s;
}
void Theworldtime::change_season(int m)
{
	string s;
	if (m < 1 || m >12)
	{
		cout << "error" << endl;
	}
	else
	{
		if (m >= 1 && m <= 3)
		{
			s = "spring";
		}
		else if(m >= 4 && m<= 6)
		{
			s = "summer";
		}
		else if (m>= 7 && m <= 9)
		{
			 s = "autumn";
		}
		else
		{
			s = "winter";
		}
		this->season = s;
	}
	if (s != this->season) {
		cout << ">>> Season changed to " << s << " <<<" << endl;
		this->season = s;
	}
}
void Theworldtime::add() 
{
	hours++;

	while (hours >= 24) {
		hours -= 24;
		days++;
	}
	while (days >= 30) {
		days -= 30;
		months++;
	}
	while (months >= 12) {
		months -= 12;
		years++;
	}
	change_season(months);
}
void Theworldtime::show()
{
	cout << "The time is " << years << "years" << months << "months" << days << "dys" << hours << "hours" << endl;
}
