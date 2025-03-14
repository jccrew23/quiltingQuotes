#pragma once
#include <iostream>
#include <cstdlib>
#include <string>

class QuiltQuote
{
	//enum definition
	enum shipping { SHIPPING = 1, PICKUP = 2 };
	enum binding { YES = 1, NO = 2 };

	

	//variables
protected: 
	float _subtotal;
	float _totalPrice;
	shippin_shipping;
	Quilt& _quilt;
	std::string _customerName;
	enum binding _binding;
	
public: 
	//constructor
	QuiltQuote(enum shipping shippingType, Quilt& quilt, std::string customerName, enum binding bindingOption);

	//functions
	float calcTotal();
	float quiltingCost();
	float battingCost();
	float shippingCost();
	float bindingCost();
	float subCost();
	void displayQuote();

};