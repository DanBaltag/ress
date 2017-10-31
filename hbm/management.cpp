#include "management.h"

day::day():init_b(0.0), cur_b(0.0){
	Date dt;
	date = dt.get_time();
}

day::day(double b):init_b(b), cur_b(b){
	Date dt;
	date = dt.get_time();
}

double day::pull(){
	return 
}
