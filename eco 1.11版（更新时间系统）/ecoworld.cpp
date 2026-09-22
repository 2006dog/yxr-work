#include"wolf.h"
#include"sheep.h"
#include "Theworldtime.h"
#include <windows.h>
#include <cstdlib>
int main()
{   
	wolf w1(1, 20, 1, "black", 50);
	sheep s1(1, 20, 1, "dabai");
	w1.eat(s1);
	Theworldtime t1(2,9,20,21,"spring");
	t1.show();
	string message;
		while (message != "finish")
		{
			t1.add();
			Sleep(1000);
			cin >> message;
			s1.active(t1.gethours());
			t1.show();
		};
	
}