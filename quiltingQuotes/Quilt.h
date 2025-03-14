#pragma once
#include <iostream>
#include <cstdlib>

// enums definition
enum quilting { MACHING = 1, CUSTOM = 2 };
enum batting { POLYESTER = 1, COTTON = 2, COTTONPOLY = 3, WOOL = 4, BAMBOO = 5 };

class Quilt : public QuiltQuote
{
protected:
    float _width;
    float _length;
    enum quilting _quilting;
    enum batting _batting;

public:
    // Constructor
    Quilt(float width, float length, enum quilting quiltingType, enum batting battingType);

    // Functions
    float calcArea();
    float getQuilting();
    float getBatting();
};

