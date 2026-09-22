#include "wolf.h"
#include"sheep.h"
#include<iostream>
#include<string>
void wolf::eat(sheep s)
{       if (s.getage() >= 5)
	{
		if (s.gethealth() <= 0)
		{
           hungey = hungey + 5;
		}
		else if{ hungey = hungey + 10; }
	}
	else if (s.getage() >= 6 && s.getage() <= 10)
	{
		if (s.gethealth() <= 0)
		{
			hungey = hungey + 10;
		}
		else if{ hungey = hungey + 15; }
	}
	cout << "The wolf eat " << s.getname() << endl;
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
	string name = "badwolf";
	int hungey = 0;
};
wolf::wolf(int a, int h, bool s, string c,int g)
{
	this->age = a;
	this->health = h;
	this->sex = s;
	this->name = c;
	this->hungey = g;
	cout << age << " " << health << " " << sex << " " << name<<" "<<hungey << endl;
};
void wolf::print()
{
	cout << "The wolf:" << age << " " << health << " " << sex << " " << name << " " << hungey << endl;
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
