#include "stdafx.h"

using namespace System;
using namespace	System::IO::Ports;

int main(array<System::String ^> ^args)
{
	SerialPort port("COM6", 9600);
	port.Open();
	while (true)
	{
		int input = Convert::ToInt32(Console::ReadLine());
		if (input == 1)
			port.Write("A");
		if (input == 2)
			port.Write("B");
	}

    return 0;
}
