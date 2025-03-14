#include <iostream>
#include "Quilt.h"

// Constructor with initializer list
Quilt::Quilt(float width, float length, enum quilting quiltingType, enum batting battingType)
    : _width(width), _length(length), _quilting(quiltingType), _batting(battingType)
{
    // Constructor body (if needed)
};

// Calculate the area of the quilt
float Quilt::calcArea()
{
    return _width * _length;
};

// Get the quilting type
float Quilt::getQuilting()
{
    return _quilting;
};

// Get the batting type
float Quilt::getBatting()
{
    return _batting;
};


