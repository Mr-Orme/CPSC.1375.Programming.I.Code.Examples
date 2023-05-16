/*
 * File: readinput.cpp
 * Author: Keith Bush (2013)
 */

#include <iostream>
#include <fstream>
#include <string>


int main() {
	const std::string fileName{ "iodata.txt" };
	std::ofstream fout;
	fout.open(fileName);

	int dataSize{ 0 };//number of lines
	int lineSize{ 0 };//number of items on each line
	float tmp{ 0.0f };
	float sum{ 0.0 };

	std::cout << "Enter the number of datasets: ";
	std::cin >> dataSize;
	fout << dataSize << std::endl;

	for (int i{ 0 }; i < dataSize; i++) {

		std::cout << "Enter the number of values of this set: ";
		std::cin >> lineSize;
		fout << lineSize << " ";
		//std::cout << lineSize << " ";
		for (int j{ 0 }; j < lineSize; j++) {
			std::cout << "Enter the next number: ";
			std::cin >> tmp;
			fout << tmp << " ";
		}
		fout << std::endl;

	}
	fout.close();

	system("PAUSE");
	std::ifstream fin;
	
	fin.open(fileName);
	if (!fin.is_open())std::cout << "File does not exist!";

	dataSize = 0;
	lineSize = 0;
	tmp = 0.0;
	sum = 0.0;

	fin >> dataSize;
	//while (!fin.eof()) {
	for (int i{ 0 }; i < dataSize; i++) {
		//std::string line;
		//getline(fin, line);
		fin >> lineSize;
		for (int j{ 0 }; j < lineSize; j++) {
			fin >> tmp;
			sum += tmp;
		}
	}

	fin.close();

	std::cout << "Sum: " << sum << std::endl;



	system("PAUSE");

	return 0;

}