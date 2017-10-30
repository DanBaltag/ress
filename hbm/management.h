#ifndef _MANAGEMENT_H_
#define _MANAGEMENT_H_

#include<iostream>
#include<vector>

using namespace std;

class day{
	protected:
		double init_b;//initial budget
		int d[3];//dd-mm-yy
		double cur_b;//current budget
	public:
		//need to get system date
		day();
		day(double);//init_b;
		double diff();
		int* get_day();
};

class week:public day{
	protected:
		vector<int*>w;//container of date
	public:
		week();
		week(int*);
		int** get_week();
};

class month:public week(){
	public:
		month();
		month(int**);
		int** get_month();
};

#endif
