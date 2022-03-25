#include <iostream>
using namespace std;

class Pizza
{
protected:
	string description = "unknown pizza";

public:
	virtual string getDescription()
	{
		return description;
	}
	virtual int getCost()=0;

};

class ToppingDecorator : public Pizza
{
};

class PeppyPaneer : public Pizza
{
public:
	PeppyPaneer()
	{
		description = "Peppy Paneer";
	}
	int getCost()
	{
		return 250;
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

class FreshTomato : public ToppingDecorator
{
	Pizza *pizza;
public:
	FreshTomato(Pizza *pizzaPtr)
	{
		this->pizza = pizzaPtr;
	}
	string getDescription()
	{
		return pizza->getDescription() + " " + "FreshTomato";
	}
	int getCost()
	{
		return pizza->getCost() + 40;
	}
};

class Barbeque : public ToppingDecorator
{
	Pizza *pizza;
public:
	Barbeque(Pizza *pizzaPtr)
	{
		this->pizza = pizzaPtr;
	}
	string getDescription()
	{
		return pizza->getDescription() + " " + "Barbeque";
	}
	int getCost()
	{
		return pizza->getCost() + 60;
	}
};

int main()
{
	Pizza *pizza = new PeppyPaneer();
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;

	pizza = new FreshTomato(pizza);
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;

	pizza = new FreshTomato(pizza);
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;

	pizza = new Barbeque(pizza);
	cout << pizza->getDescription() << " : " << pizza->getCost() << endl;


	return 0;
}
