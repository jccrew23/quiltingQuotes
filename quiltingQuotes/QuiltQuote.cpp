#include <iostream>
#include "QuiltQuote.h"
#include "Quilt.h"

// Constructor
QuiltQuote::QuiltQuote(enum shipping shippingChoice, Quilt& quilt, string customerName, enum binding bindingOption)
	: _shipping(shippingChoice), _quilt(quilt), _customerName(customerName), _binding(bindingOption)
{
}

// Calculate quilting cost
float QuiltQuote::quiltingCost()
{
	return _quilt->getQuilting();
}

//calculate batting cost
float QuiltQuote::battingCost()
{
	int batting = _quilt->getBatting();
	float battingPrice;

	switch (_quilt.getBatting())
	{
	case 1: battingPrice = 10.00; break;
	case 2: battingPrice = 10.00; break;
	case 3: battingPrice = 20.00; break;
	case 4: battingPrice = 20.00; break;
	case 5: battingPrice = 20.00; break;
	}
	return battingPrice;
}

// Calculate shipping cost
float QuiltQuote::shippingCost()
{
	if (_shipping == SHIPPING)
	{
		return 60.00;
	}
	else
	{
		return 0.00;
	}
}

// Calculate binding cost
float QuiltQuote::bindingCost()
{
	return 20.00;
}

//Calculate subtotal
float QuiltQuote::subCost()
{
	_subtotal = 200.00;
	area = _quilt->calcArea();
	if (area > 6300
	{
		_subtotal += (area-6300)/5
	}
	
	return _subtotal;
}

//Calculate total price

float QuiltQuote::calcTotal()
{
	_totalPrice = _subCost() + quiltingCost() + battingCost() + shippingCost() + bindingCost();
	return _totalPrice;
}

void QuiltQuote::displayQuote()
{
	std::cout << "Quilting Quote for " << _customerName << std::endl;
	std::cout << "Quilt Size: " << _quilt->calcArea() << " square inches" << std::endl;
	std::cout << "Quilting Cost: $" << calcTotal() << std::endl;
}
