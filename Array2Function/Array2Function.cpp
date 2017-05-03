// Array2Function.cpp : Defines the entry point for the console application.
// passing array as argument

#include <iostream>
#include <iomanip>

const int DISTRICTS = 4; //global variable
const int MONTHS = 3;
void display(double[DISTRICTS][MONTHS]);


int main()
{
	double sales[DISTRICTS][MONTHS] = { {1432.07, 234.50, 654.01},
										{322.00, 13838.32, 17589.88 },
										{9328.34, 934.00, 4492.30},
										{12838.29, 2332.63, 32.93} };
	display(sales);
	std::cout << std::endl;

	system("pause");
    return 0;
}

void display(double funsales[DISTRICTS][MONTHS])
{
	int d, m; // creating variable

	std::cout << "\n\n";
	std::cout << "			Month\n";
	std::cout << "		1	2	3";

	for (d = 0; d < DISTRICTS; d++)
	{
		std::cout << "\nDistrict " << d + 1;
		for (m = 0; m < MONTHS; ++m)
			std::cout << std::setiosflags(std::ios::fixed) << std::setw(10) << std::setiosflags(std::ios::showpoint)
			<< std::setprecision(2) << funsales[d][m]; // array element
	}

}
