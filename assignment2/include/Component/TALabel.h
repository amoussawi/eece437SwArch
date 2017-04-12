#pragma once

#include "Statement/TAStatement.h"
#include "Expression/TATerm.h"
#include "TAPort.h"
#include "TAComponent.h"

/* TODO  
	Since B-1(p) should exist => B should be a one-to-one map from SxT -> P
	i.e. given that the current state is S and T is the set of transitions possible from S,
	the corresponding transition labels to T shouldn't contain more than one label with the same port.
	
	NEED TO CHECK THIS FURTHER !!!
*/

/**
	Represents an abstraction of a transition label i.e. the condition for a transition to be valid (b/w two states),
	the statement/action to be executed when the transition is to take place and the associated port with this transition.
	
*/

class TALabel {

	private:

		TAComponent * parentComponent;

		TAPort * port;
		TATerm * guard;
		TAStatement * statement;

	public:

		TALabel (TAComponent * pComp, TAPort * p, TATerm * g, TAStatement * s);

		TAComponent * getComponent(){
			return parentComponent;
		}		

		TAPort * getPort(){
			return port;
		}

		TATerm * getGuard(){
			return guard;
		}

		TAStatement * getStatement(){
			return statement;
		}
};
