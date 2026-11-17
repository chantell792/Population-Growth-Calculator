// Chantell Jenkins
// 11/16/2026
// Population Growth Calculator

#include <iostream>

int main()
{
    std::cout << "Population Growth Calculator\n";
    int population;
    double growthPercentage;
    int day;
    int numberOfDays;
    double dailyIncrease;
    
    std::cout << "Enter the starting number of organisms: ";
    std::cin >> population;
	std::cout << "Enter the average daily population increase: ";
	std::cin >> growthPercentage;
	std::cout << "Enter the number of days the population will multiply: ";
	std::cin >> numberOfDays;
    return 0;
}