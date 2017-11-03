mktxt::mktxt(){}
mktxt::mktxt(strung n):fname("."+n){
	mfile.open(fname);
}
void mktxt::add(string x, string y){
	mfile<<x<<"\n";
	mfile<<y<<"\n";
}
mktxt::~mktxt(){
	mfile.close()
}
