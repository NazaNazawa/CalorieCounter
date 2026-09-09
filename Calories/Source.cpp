
#include "complex.h"
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	complex Count;
	Count.Read();
	Count.Display();
}