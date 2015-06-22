#include <iostream>
using namespace std;
#include "list.h"
struct Line temp;
void List::set(int no){
	int lineno;
	char maxstring[MAX_cc];
	
	noline=0;
	while (noline < no){
		cout <<"Line number :";
		cin >> lineno;
		cout <<"Enter String :";
		cin>> maxstring;
		bool valid =temp.set(lineno, maxstring);
		if (valid==1){
			storeline[noline]=temp;
		  cout<<"accepted"<<endl;
		  noline++;
		}
		else{
			cout<<"rejected"<<endl;
		}
	}// end of while
}
void List::display() const{
	for(int i=0; i<noline;i++){
		storeline[i].display();
		cout<<endl;
	}
}
