//Vincent Tshegofatso Matlou and Oscar Mahlangu
#ifndef STOPWATCH_H
#define STOPWATCH_H

class StopWatch{
	public:
	
	// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
	double getProcessTime();
	void startTime(double initTime);
	void endTime(double finalTime);
	double getRunTime();
	private:
	double _startTime;
	double _endTime;
};
#endif

