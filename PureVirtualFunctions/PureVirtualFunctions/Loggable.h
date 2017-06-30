#pragma once

#include <string>
using namespace std;

class Loggable {

	virtual void log(const string &message)const = 0 ; // This logs a message on the screen. 

};
