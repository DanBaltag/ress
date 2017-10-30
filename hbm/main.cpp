#include "readfile.cpp"

int main(int ac, char **av){
	if (ac > 1){
		cout<<*av<<"\n";
		ReadFile<double> ob;//(*av);
		list<double> l;
		l = ob.readln();
		for (list<double>::iterator i = l.begin(); i != l.end(); i++)
			cout<<*i<<' ';
	}else{
		ReadFile<string> ob;
		string x = ob.readln();
		cout<<x<<"\n";
	}
}
