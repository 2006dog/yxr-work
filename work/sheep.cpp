#include "sheep.h"
#include<iostream>
#include<string>
void sheep::eat(string food)
{
	cout << "sheep eat" <<" " <<food << endl;
	health  = health + 10;
	cout << "health plus 10" << endl;
};
void sheep::sleep(int hours)
{
	cout << "sheepp sleep " << hours << "hours" << endl;
	health = health + 5;
	cout << "health plus 5";
};
sheep::sheep()
{
	age = 0;
	health = 100;
	sex = 1;
	name = "xiaoyang";
	cout <<"The sheep: " <<age << " " << health << " " << sex << " " << name  << endl;
};
sheep::sheep(int a, int h, bool s, string n)
{
	this->age = a;
	this->health = h;
	this->sex = s;
	this->name = n;
	cout <<"The sheep is: " <<age << " " << health << " " << sex << " " << name << endl;
};
void sheep::active(int time)
{
	if (time < 6 || time>22)
	{
		sleep(time);
	}
	if (time >= 6 && time <= 22)
	{
		eat("grass");
	}
};
