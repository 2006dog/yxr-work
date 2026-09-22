#pragma once
#include<iostream>
#include<string>
#include"Theworldtime.h"
using namespace std;
class grass
{
public:
	void grow(int time);
	grass();
	grass(int num, string color);
private:
	int num;
	string color;
};

