// osumer.cpp : main project file.

#include "stdafx.h"
#include "OsumerUI.h"

using namespace System;
using namespace osumer;

int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew OsumerUI());
    return 0;
}
