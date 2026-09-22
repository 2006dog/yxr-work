#pragma once
#include<iostream>
#include<string>
using namespace std;
class sheep
{       public:
		void eat(string food);
		void sleep(int hours);
		void active(int time);
		int getage() { return age; }
		int gethealth() { return health; }
		bool getsex() { return sex; }
		string getname() { return name; }
		int getx() { return x; }
		int gety() { return y; }
		sheep();
		sheep(int a, int h, bool s, string n);
	private:
		int age;
		int health;
		bool sex;
		string name;
		int x;
		int y;
};
