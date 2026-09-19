#pragma once
#include<iostream>
#include<string>
using namespace std;
class sheep
{       public:
		void eat(string food);
		void sleep(int hours);
		void active(int time);
        
		sheep();
		sheep(int a, int h, bool s, string n);
	private:
		int age;
		int health;
		bool sex;
		string name;
};
