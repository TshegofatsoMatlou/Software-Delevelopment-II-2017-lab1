//Vincent Tshegofatso Matlou and Oscar Mahlangu
#include "StopWatch.h"
#include <ctime>

using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
double StopWatch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time)/CLOCKS_PER_SEC;
}
//We did not add additional functions since the getProcessTime() function does all that is required except that it is not placed in a class
void StopWatch::startTime(double initTime){
	_startTime = initTime;
}
void StopWatch::endTime(double finalTime){
	_endTime = finalTime;
}
double StopWatch::getRunTime(){
	return (_endTime - _startTime);
}
