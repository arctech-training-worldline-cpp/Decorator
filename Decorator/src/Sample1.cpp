/*
 * Sample1.cpp
 *
 *  Created on: 25-Mar-2022
 *      Author: Sudhanya
 */

/*
#include <iostream>
using namespace std;

class Pizza
{
protected:
	string description = "unknown pizza";
	bool mushroom = false;
	bool corn = false;
	bool barbeque = false;
public:
	string getDescription()
	{
		return description;
	}
	virtual int getCost()=0;
	bool hasMushroom()
	{
		return mushroom;
	}
	bool hascorn()
	{
		return corn;
	}
	bool hasbarbeque()
	{
		return barbeque;
	}
};

class PeppyPaneer : public Pizza
{
public:
	PeppyPaneer(bool mushroomVal, bool cornVal, bool barbequeVal)
	{
		description = "Peppy Paneer";
		mushroom = mushroomVal;
		barbeque = barbequeVal;
		corn = cornVal;
	}
	int getCost()
	{
		int cost = 250;

		if(hasMushroom())
			cost += 50;
		if(hascorn())
			cost += 60;
		if(hasbarbeque())
			cost += 70;

		return cost;
	}
};


class Farmhouse : public Pizza
{
public:
	Farmhouse()
	{
		description = "Farmhouse";
	}
	int getCost()
	{
		return 200;
	}
};
class Margherita  : public Pizza
{
public:
	Margherita()
	{
		description = "Margherita";
	}
	int getCost()
	{
		return 270;
	}
};
class ChickenFiesta : public Pizza
{
public:
	ChickenFiesta()
	{
		description = "Chicken Fiesta";
	}
	int getCost()
	{
		return 300;
	}
};

int main()
{

	Pizza *pizza = new Margherita();
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;

	ChickenFiesta obj;
	cout << obj.getDescription() << " : " << obj.getCost() << endl;


	Pizza *pizza = new PeppyPaneer(true, true, false);
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;
	return 0;
}

*/




