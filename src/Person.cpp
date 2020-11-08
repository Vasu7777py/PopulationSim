
#include "../headder/load.h"


Sim::Person::Person(){
	traids = Gene();
	age = 0;
	sex = 'F';
	friends = NULL;
}

Sim::Person::Person(Gene traid, char sex){
	traids = traid;
	age = 0;
	this->sex = sex;
	friends = NULL;
}

