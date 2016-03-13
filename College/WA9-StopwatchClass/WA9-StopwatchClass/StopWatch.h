#ifndef __STOPWATCH_H_INCLUDED__
#define __STOPWATCH_H_INCLUDED__

#include <ctime>
#include <iostream>
using namespace std;

class StopWatch
{
public:
	StopWatch();
	void Start();
	void Stop();
	void DisplayTimerInfo();
private:
	time_t startTime;
	time_t stopTime;
};

#endif // !__STOPWATCH_H_INCLUDED__

