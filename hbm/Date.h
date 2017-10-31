#ifndef _DATE_
#define _DATE_

#include <iostream>
#include <ctime>

class Date{
	private:
		time_t now;
		tm *gmtm;
		string dt;
	public:
		Date();
		string get_time();
};

#endif
