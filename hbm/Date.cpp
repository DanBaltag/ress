#include "Date.h"

Date::Date(){
	now = time(0);
	gmtm = gmtime(&now);
	dt = asctime(gmtm);
}

string Date::get_time(){
	return dt;
}
