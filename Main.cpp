/*
Mason McManus
C++ Fa21
Due September 29 2021
CIS162
Lab 3 User and File IO
*/

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main()
{
	ifstream infile;
	infile; std:: ifstream ::open("InMeanStd.dat");
	ofstream outfile;
	outfile; std:: ifstream ::open ("OutMeanStd.dat");

	char input1, input2, input3, input4, input5;

	infile >> input1 >> input2 >> input3 >> input4 >> input5;

	outfile << input1 << input2 << input3 << input4 << input5;

	cout << input5 << "/t" << input4 << "/t" << input3 << "/t" << input2 << "/t" << input1 << "endl";

	infile.close();
	outfile.close();

	return 0;
}

int main()
{
	float val[4] = { 4.0, 8.0, 1.1, 2.9, };
	float sum = 0.0, mean, variance = 0.0, stdDeviation;
	int i;
	for (i = 0; i < 4; ++i)
		sum += val[i];
	mean = sum / 4;
	for (i = 0; i < 4; ++i)
		variance += pow(val[i] - mean, 2);
	variance = variance / 4;
	stdDeviation = sqrt(variance);
	cout << "The four numbers I picked are: ";
	for (i = 0; i < 4; ++i)
		cout << val[i] << " ";
	cout << endl;
	cout << "The standard deviation of these numbers are: " << stdDeviation;
}