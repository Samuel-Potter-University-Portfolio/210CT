#include <iostream>

#include "IO.h"
#include "Task1\Task1.h"
#include "Task2\Task2.h"
#include "Task5\Task5.h"
#include "Task6\Task6.h"
#include "Task7\Task7.h"
#include "Task8\Task8.h"
#include "Task9\Task9.h"
#include "Task10\Task10.h"
#include "Task11\Task11.h"

int main(char** arg_v, int arg_c)
{
	IO::g_Task = "Home";
	IO::out << "210CT Coursework - Samuel Potter\n";

	IO::g_Task = "Task11";
	IO::out << "Launching Task 11\n";
	TASK_11::Execute();

	IO::g_Task = "Home";
	IO::out << "Done!\n";
	while (true) {}
}