#include <iostream>
using namespace std;

#include "Act.h"


Act::Act(string id, string displayMessage, int mercyImpact)
{
	this->id = id;
	this->displayMessage = displayMessage;
	this->mercyImpact = mercyImpact;
}

void Act::setId(string id)
{
	this->id = id;
}
void Act::setDisplayMessage(string displayMessage)
{
	this->displayMessage = displayMessage;
}
void Act::setMercyImpact(int mercyImpact)
{
	this->mercyImpact = mercyImpact;
}

string Act::getId() const
{
	return id;
}
string Act::getDisplayMessage() const
{
	return displayMessage;
}
int Act::getMercyImpact() const
{
	return mercyImpact;
}