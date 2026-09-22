#pragma once
#include<iostream>
#include<string>
#include"sheep.h"
using namespace std;
class wolf
{
public:
	void eat(sheep p);
	void sleep(int hours);
	void move(int m);
	int getage() { return age; }
	int gethealth() { return health; }
	bool getsex() { return sex; }
	string getname() { return name; }
	wolf();
	wolf(int a, int h, bool s, string c,int g);
	void print();
private:
	int age;
	int health;
	bool sex;
	string name;
	int hungey;
};

