//Vincent Tshegofatso Matlou and Oscar Mahlangu
#include <iostream>
#include "StopWatch.h"

using namespace std;

double add(double a, double b){
	return (a+b);
}

int main(int argc, char **argv)
{
	StopWatch stopwatch;
	//Getting the start time just after creating the class object
	stopwatch.startTime(stopwatch.getProcessTime());

	double input1, input2;

	cout << "Welcome to the sum program. Enter TWO numbers:"<<endl;
	cin >> input1 >> input2;
	cout <<"The sum of the TWO numbers is: " << add(input1,input2)<< endl;
	//Getting the final time
	stopwatch.endTime(stopwatch.getProcessTime());
	cout << "The run time of this code is: " << stopwatch.getRunTime() << endl;
	return 0;
}
