/*
***********************************
*
* Class: FPS
*
*
* Version: 0.1
*
* Author: Meir Michanie <meirm@riunx.com>
*
*
*
*/
#include "FPS.hpp"
#include <unistd.h>

FPS::FPS(){
	clock_gettime(CLOCK_MONOTONIC, &_startTime);
	clock_gettime(CLOCK_MONOTONIC, &_stopTime);
	frames=0;
}

void FPS::start(){
	clock_gettime(CLOCK_MONOTONIC, &_startTime);
}

void FPS::stop(){
	clock_gettime(CLOCK_MONOTONIC, &_stopTime);
}

void FPS::update(){
	frames++;
}

double FPS::elapsed(){
	long mtime, seconds, nseconds;
	seconds  = _stopTime.tv_sec  - _startTime.tv_sec;
        nseconds = _stopTime.tv_nsec - _startTime.tv_nsec;
        mtime = ((seconds) * 1000 + nseconds/1000000.0) + 0.5;

	return (float(mtime)/1000.0);
}

double FPS::fps(){
	return frames / this->elapsed();
}

