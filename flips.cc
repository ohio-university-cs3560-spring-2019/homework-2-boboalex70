//Alex Bochenek
//
//CS 3560
//
//Flips Implementation file
//
//28 January 2019

#include "flips.h"

std::string flips(std::string change, std::string fir, std::string sec){
	size_t sp = 0;//holds the position of the string that needs replaced
	while ((sp = change.find(fir, sp)) != std::string::npos){//find occurence of fir, if none exit loop
		change.replace(sp, fir.length(), sec);//replaces fir with sec
		sp+= sec.length();//move sp to after the length of sec
	}
	return change;
};
