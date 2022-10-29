#include <iostream>
#include <array>
using namespace std;

void displayDblArray(const double[], int);
double computeAverage(const int a[], int numberUsed);

int main()
{
	std::array<double, 4> gpas = { 20.5, 30.4, 40.4 , 50.5 };

	displayDblArray(gpas[], 4);
}

void displayDblArray(const double theAry[], int arySize)
{
	
	for (int i=0; i< arySize; i++)
		cout << theAry[i] << ' ' << endl;
	//theAry[0] = 0; wont work cos theAry is a constant
}

void showDifference(const int a[], int numberUsed)
{
	double average = computeAverage(a, numberUsed);
	std::cout << "Average of the " << numberUsed << " numbers = " << average << endl << "The numbers are:\n";

	for (int index = 0; index < numberUsed; index++)
		std::cout << a[index] << " differ from average by " << (a[index] - average) << endl;
}

double computeAverage(const int a[], int numberUsed)
{
	double total;

	for (int i = 0; i < numberUsed; i++) {
		total += a[i];
	}

	return total/numberUsed;
}