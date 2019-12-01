#include <iostream>
#include "binary.h"
using namespace std;

int main (){
	binary f = 1100;
	binary s = 1101;

	cout<<f.abs()<<"\n";
	cout<<s.abs()<<"\n";

	if(f>s)
		cout<<"true";
	else
		cout<<"false";
}