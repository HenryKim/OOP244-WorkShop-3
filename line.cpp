#include <iostream>
using namespace std;
#include "line.h"

bool Line::set(int n, const char* str){
	bool valid = n >0;
	if (valid==1){
		if(str!=NULL){
		int i;
		no = n;
		for (i =0 ;i <MAX_cc; i++){
			maxstring[i]=str[i];
			maxstring[i+1]='\0';}
		}//str!=NULL
		else{
		valid=0;}
	}//valid==1
		else {
			valid=0;
			no =0;
			maxstring [0]='\0';}
		return valid;
}//end of bool LINE


void Line::display() const{
	cout<< no << ' '<< maxstring <<endl;
}// end of lin::display
