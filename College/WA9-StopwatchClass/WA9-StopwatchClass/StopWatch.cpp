#include "StopWatch.h"

StopWatch::StopWatch()
{

}

void StopWatch::DisplayTimerInfo()
{
	const int secondsPerMinute = 60;
	const int secondsPerHour = secondsPerMinute * 60;
	const int secondsPerDay = secondsPerHour * 24;

	time_t currentTime = difftime(stopTime, startTime);
	if (currentTime < secondsPerMinute)
	{
		cout << currentTime << " seconds" << endl;
	}
	else if (currentTime < secondsPerHour)
	{
		int minutes = currentTime / secondsPerMinute;
		int seconds = currentTime - (minutes * secondsPerMinute);
		cout << minutes << " minutes " << seconds << " seconds" << endl;
	}
	else
	{
		int hours = currentTime / secondsPerHour;
		int minutes = currentTime - (hours * secondsPerHour);
		int seconds = currentTime - (minutes * secondsPerMinute);
		cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
	}
}

void StopWatch::Start()
{
	this->startTime = time(NULL);
}

void StopWatch::Stop()
{
	this->stopTime = time(NULL);
}