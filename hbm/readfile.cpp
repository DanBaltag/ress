#include<iostream>
#include<fstream>
#include<list>
#include<iterator>

using namespace std;

template <class type> class ReadFile{
	private:
		string fn; //file name
		ifstream f; //file object
	public:
		ReadFile(){
			fn = "file.txt";
		}
		ReadFile(string name){
			fn = name;
		}
		list<type> readln(){
			f.open(fn);
			type a;
			list<type> l;
			while(f >> a)
				l.push_back(a);
			return l;
		}
		~ReadFile(){
			f.close();
		}
};

template <> class ReadFile<string>{
	private:
		string fn; //file name
		ifstream f; //file object
	public:
		ReadFile(){
			fn = "file.txt";
		}
		ReadFile(string name){
			fn = name;
		}
		string readln(){
			f.open(fn);
			string file;
			string line;
			while(getline(f,line))
				file+=line;
			return file;
		}
		~ReadFile(){
			f.close();
		}
};
