#include <chrono>
#include <iostream>
#include <thread>

#include "calculations.h"

int fun() 
{
	while (true) 
	{
		//std::cout << "fun";
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
	return 0;
}