#pragma once
// This class can freeze or unfreeze an account 


class Freezable {
public:
	virtual void freeze()=0; // This has to be overridden in the sub classes. 
	virtual void unfreeze() = 0;

};
