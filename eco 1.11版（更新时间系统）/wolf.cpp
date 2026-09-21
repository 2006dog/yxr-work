#include "wolf.h"
#include<iostream>
#include<string>
void wolf::eat(string food)
{
	cin >> food;
	cout << "sheep eat" << food << endl;
	hungey = hungey + 10;
	cout << "hungey plus 10" << endl;
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
	int hungey = 0;
	cout << "The wolf:"<<age << " " << health << " " << sex << " " << color << " " << hungey << endl;
};
wolf::wolf(int a, int h, bool s, string c,int g)
{
	this->age = a;
	this->health = h;
	this->sex = s;
	this->color = c;
	this->hungey = g;
	cout << age << " " << health << " " << sex << " " << color<<" "<<hungey << endl;
};
void wolf::print()
{
	cout << "The wolf:" << age << " " << health << " " << sex << " " << color << " " << hungey << endl;
}
void wolf::move(int m)
{
	if (m < 0)
	{
		cout << "error" << endl;
	}
	else
	{
		hungey = hungey - m * 2;
		if (hungey < 0)
		{
			health = 0;
			cout<< "The wolf is dead" << endl;
		}
		else 
		{
			cout << "The wolf move" << m << "meters" << endl;
		}	    
	}
}
