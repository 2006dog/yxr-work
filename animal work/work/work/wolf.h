#pragma once
#include<iostream>
#include<string>
using namespace std;
class wolf
{
public:
	void eat(string food);
	void sleep(int hours);
	void active(string thing);
	wolf();
	wolf(int a, int h, bool s, string c);
private:
	int age;
	int health;
	bool sex;
	string color;
};

