#include "wolf.h"
#include<iostream>
#include<string>
void wolf::eat(string food)
{
	cin >> food;
	cout << "sheep eat" << food << endl;
	health = health + 10;
	cout << "health plus 10" << endl;
};
void wolf::sleep(int hours)
{
	cin >> hours;
	cout << "sheepp sleep" << hours << "hours" << endl;
	health = health + 5;
	cout << "health plus 5" << endl;
};
wolf::wolf()
{
	int age = 0;
	int health = 100;
	bool sex = 1;
	string color = "black";
	string active = "watch sheep";
	cout << "The wolf:"<<age << " " << health << " " << sex << " " << color << " " << active << endl;
};
wolf::wolf(int a, int h, bool s, string c)
{
	this->age = a;
	this->health = h;
	this->sex = s;
	this->color = c;
	cout << age << " " << health << " " << sex << " " << color << endl;
};
void wolf::active(string thing)
{
	
	

}