#include "tadouble.h"




TADouble::TADouble(string name): TAData(name) {

}

void TADouble::set(double val) {
	this->val = val;
}