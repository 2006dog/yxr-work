#include "grass.h"
void grass::grow(int time)
{
	if (time < 6 || time>22)
	{
		num = num + time * 2;
		cout << "The garss grow" << num << endl;
	}
	if (time >= 6 && time <= 22)
	{
		num = num + time * num / 10;
		cout << "The garss grow" << num << endl;
	}
}
grass::grass()
{
	num = 10000;
	color = "green";
}
grass::grass(int n, string c)
{
	this->num = n;
	this->color = c;
}
