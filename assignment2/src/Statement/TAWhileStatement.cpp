#include "Statement/TAWhileStatement.h"
#include <iostream>

using namespace std;

void TAWhileStatement :: evaluate(){

	while (true){

		condition.evaluate();

		if (!condition.getValue().getBool()){
			break;
		}		
		
		body.evaluate();
	}
}

void TAWhileStatement :: list(){
	
	cout << "while ( ";
	condition.list();
	cout << " ){" << endl;
	body.list();
	cout << endl << "}" <<endl;
}
