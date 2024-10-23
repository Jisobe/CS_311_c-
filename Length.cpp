#include "Length.h"
#include <iostream>
#include <compare>


Length::Length() : value{ 0 } {
	std::cout << "default constructor" << std::endl;
}

Length::Length(int value) : value{ value } {
	std::cout << "Object constructed" << std::endl;
}

Length::Length(const Length& other) : value{ other.value} {
	std::cout << "copy constructor is called" << std::endl;
	// value = other.value;
}

int Length::getValue() const {
	return value;
}

void Length::setValue(int value) {
	this->value = value;
}

bool Length::operator==(const Length& other) const {
	return (value == other.value);
}

bool Length::operator==(int other) const {
	return (value == other);
}

bool Length::operator!=(int other) const {
	return !(value == other);
}

bool Length::operator<(const Length& other) const {
	return (value < other.value);
}

bool Length::operator>(const Length& other) const {
	return (value > other.value);
}

bool Length::operator<=(const Length& other) const {
	return !(value > other.value);
}

bool Length::operator>=(const Length& other) const {
	return !(value < other.value);
}

std::strong_ordering Length::operator<=>(const Length& other)const {
	return value <=> other.value;
}

std::ostream& operator<<(std::ostream& stream, const Length& length) {
	stream << length.value; //can only use this if using as friend function
	// stream << length.getValue(); // have to use if delared globally(outside class)
	return stream; //return stream so we can chain the operator
}

std::istream& operator>>(std::istream& stream, Length& length) {
	int value;
	stream >> value;
	// length.setValue(value); // have to use if delared globally(outside class)
	length.value = value; //can only use this if using as friend function
	return stream; //return stream so we can chain the operator
}

Length Length::operator+(const Length& other) const {
	 return Length{ value + other.value }; //returns a new instance of Length class
}

Length Length::operator+(int other) const {
	return Length{ value + other };
}

Length Length::operator-(const Length& other) const {
	return Length(value - other.value);
}

Length Length::operator-(int other) const {
	return Length(value - other);
}

Length Length::operator*(const Length& other) const {
	return Length(value * other.value);
}

Length Length::operator*(int other) const {
	return Length(value * other);
}

Length Length::operator/(const Length& other) const {
	return Length(value / other.value);
}

Length& Length::operator+=(const Length& other) {
	value += other.value;
	return *this;
}

Length& Length::operator+=(int other) {
	value += other;
	return *this;
}

Length& Length::operator-=(int other) {
	value -= other;
	return *this;
}

Length& Length::operator-=(const Length& other) {
	value -= other.value;
	return *this;
}

Length& Length::operator*=(const Length& other) {
	value *= other.value;
	return *this;
}

Length& Length::operator/=(const Length& other) {
	value /= other.value;
	return *this;
}

Length& Length::operator=(const Length& other) {
	std::cout << "object assigned." << std::endl;
	value = other.value;
	return *this;
}

// prefix
Length& Length::operator++() {
	++value;
	return *this;
}

// postfix
Length Length::operator++(int) {
	Length copy = *this;
	operator++();
	return copy;
}