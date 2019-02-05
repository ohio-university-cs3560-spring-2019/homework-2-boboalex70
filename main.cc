//Alex Bochenek
//
//CS 3560
//
//Swap phrases from a string
//
//28 January 2019

#include <iostream> //cin, cout
#include <string> //string
#include "flips.h" //flips

using namespace std;

int main(int argc, char**argv){
	string fir = argv[1];//holds string to be found and removed
	string sec = argv[2];//holds string that is inserted
	string change = "";//holds string that will be searched and replaced
	string out = "";//output string
	getline(cin,change);
	out = flips(change, fir, sec);
	cout<<out;
	return 0;
}
