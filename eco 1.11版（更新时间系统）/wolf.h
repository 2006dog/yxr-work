#pragma once
#include<iostream>
#include<string>
using namespace std;
class wolf
{
public:
	void eat(string food);
	void sleep(int hours);
	void move(int m);
	wolf();
	wolf(int a, int h, bool s, string c,int g);
	void print();
private:
	int age;
	int health;
	bool sex;
	string color;
	int hungey;
};

