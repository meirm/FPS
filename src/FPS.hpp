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

#ifndef _FPS
#define _FPS
#include <unistd.h>
#include <time.h>


class FPS {
	public:
	FPS();
	void start();
	void stop();
	void update();
	double elapsed();
	double fps();
	private:
	struct timespec _startTime;
	struct timespec _stopTime;
	unsigned long frames;
};


#endif
