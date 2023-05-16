/*
* File: RandomWithIncludeMemory.cpp
* Author: Sean Orme (2016)
*/

#include <iostream>
#include <random>
#include <array>

int main() {
	/*
		1. Seed
		2. Engine
		3. Distribution
	*/
	const int maxValue{ 50 };
	std::random_device seed;
	//int tempSeed{ seed() };
	//default_random_engine e(seed());
	std::default_random_engine e(13);
	std::uniform_int_distribution<int> ud(0, maxValue-1);
	int x{ 25 };
	std::normal_distribution<double> nd(x,2); //(mean, standard deviation)
	std::bernoulli_distribution bd(.75);
	std::array<int, maxValue> distribution = { 0 };
	std::cout << ud(e);
	for (int i = 0; i < 10000; i++)
	{
		distribution.at(ud(e))++;
		//distribution.at((int)nd(e))++;
		//distribution.at((int)bd(e))++;

	}

	for (int i = 0; i < maxValue; i++)
	{
		std::cout << i << ": " << distribution[i] << std::endl;;
	}
	std::cout << std::endl;
	system("PAUSE");

	return 0;

}