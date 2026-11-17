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

    if (population > 2)
    {
		std::cout << "Invalid population. Please enter a number greater than or equal to 2.\n";
    }
    else if (growthPercentage < 0 || growthPercentage == 0)
    {
        std::cout << "Invalid growth percentage. Please enter a number greater than or equal to 1.\n";
    }
    else if (numberOfDays < 1)
    {
        std::cout << "Invalid number of days. Please enter a number greater than or equal to 1.\n";
    }
    else
		std::cout << "Day 1 population: " << population << "\n";
    for (int day = 2; day <= numberOfDays; day++)
    {
        dailyIncrease = population * (growthPercentage / 100);
        population = population + dailyIncrease;
        std::cout << "Day " << day << " population: " << population << "\n";
    }
    return 0;
}