#include <iostream>
#include "Statement/TAAssignStatement.h"

using namespace std;

TAAssignStatement :: TAAssignStatement (TAVar * t, TAExpression * e){
	//TODO Check that t and e evaluate to the same value i.e. both are terms or both are formulas

	target = t;
	exp = e;
}

void TAAssignStatement :: evaluate(){

	exp -> evaluate();

//TODO Remove comment after implementing getState()

//	t -> setState (exp -> getState());	
}

void TAAssignStatement :: list(){
	target -> list();
	cout << " = " ;
	exp -> list();
	cout << " ; ";
}
