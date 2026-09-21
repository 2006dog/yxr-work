#pragma once
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
class Theworldtime
{
private:
	int years;
	int months;
	int days;
	int hours;
	string season;
public:
	Theworldtime();
	Theworldtime(int years, int months, int days, int hours, string season);
	void change_season(int months);
	void add();
	void show();
};

