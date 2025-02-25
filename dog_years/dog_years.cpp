// dog_years.cpp : This file contains the 'main' function. Program execution begins and ends there. The program
// converts your dog’s age into human years:
//

#include <iostream>

int main() {

	int dog_age = 22;

	// The first 2 years of a dog is equivalent to 21 years
	int early_years = 21;

	int later_years;
	int human_years;

	// Each following year after counts as 4 human years.
	later_years = (dog_age - 2) * 4;

	// The dogs age in human years
	human_years = early_years + later_years;

	std::cout << "My name is Spot! Ruff ruff, I am " << human_years << " years old in human years.\n";
}