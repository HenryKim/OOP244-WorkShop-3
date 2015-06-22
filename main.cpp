 // Workshop 3 - Group X
 // w3.cpp

 #include <iostream>
 using namespace std;
 #include "list.h"

 int main() {

     int no;
     List list;

     cout << "List Processor\n==============" << endl;
     cout << "Enter number of items : ";
     cin  >> no;

     list.set(no);
     list.display();
 }