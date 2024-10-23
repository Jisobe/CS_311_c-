#include "Rectangle.h"
#include <iostream>
using namespace std;

// default contructor
Rectangle::Rectangle(){
   height = 0;
}

// initializer list constructor - can only be used for simple data ie no data validation needed
Rectangle::Rectangle() : height(0) {}

Rectangle::Rectangle(int height){
   setHeight(height);
}

Rectangle::Rectangle(const Rectangle& source){
      height = source.height;
}

// int Rectangle::objectCount = 0;

void Rectangle::setHeight(int height){
   if (height < 0){
      throw invalid_argument("height");
   }
   this->height = height;
}