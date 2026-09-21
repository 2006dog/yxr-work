#include"wolf.h"
#include"sheep.h"
#include "Theworldtime.h"
#include <windows.h>
#include <cstdlib>
int main()
{
	Theworldtime t1(2,9,20,21,"spring");
	t1.show();
	for (int i = 0; i < 50; i++)
	{
		t1.add();
		t1.show();
		Sleep(1000);
	}
	system("pause");

}