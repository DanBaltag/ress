#ifndef _MKTXT_H_
#define _MKTXT_H_

#include<iostream>
#include<fstream>

using namespace std;

class mktxt{
	private:
		string fname;
		ofstrea mfile;
	public:
		mktxt();
		mktxt(string n);
		~mktxt();
}

#endif
