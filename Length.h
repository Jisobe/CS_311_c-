#pragma once
#include <ostream>
#include <istream>
#include <compare>

class Length{

	private:
		int value; // data memeber

	public:
		Length(); // default conatrucror
		explicit Length(int value); // constructor
		Length(const Length& other); // copy constructor

		int getValue() const;
		void setValue(int value);

		// equality and inequality operator
		bool operator==(const Length& other) const;
		bool operator==(int other) const;

		bool operator!=(int other) const;
		//bool operator!=(const Length& other) const;

		// comparison Operators
		bool operator<(const Length& other) const;
		bool operator>(const Length& other) const;
		bool operator<=(const Length& other) const;
		bool operator>=(const Length& other) const;

		// three-way (spaceship) comparison operator
		//Only avail after C++20; if using this, do not need to overload the other comparison operators. The complier does it for you.
		std::strong_ordering operator<=>(const Length& other) const;

		friend std::ostream& operator<<(std::ostream& stream, const Length& length);
		friend std::istream& operator>>(std::istream& stream, Length& length);

		// arithmetic operators
		Length operator+(const Length& other) const;
		Length operator+(int other) const;
		Length operator-(const Length& other) const;
		Length operator-(int other) const;
		Length operator*(const Length& other) const;
		Length operator*(int other) const;
		Length operator/(const Length& other) const;
		
		// Compound Assignment Operators
		Length& operator+=(const Length& other); 
		Length& operator+=(int other);
		Length& operator-=(int other);
		Length& operator-=(const Length& other);
		Length& operator*=(const Length& other);
		Length& operator/=(const Length& other);

		//assignment operator
		Length& operator=(const Length& other);

		// increment operator
		Length& operator++(); // prefix
		Length operator++(int); // postfix...int keyword as parameter only to tell compiler this is postfix
};

//Insertion and extraction declared globally
//std::ostream& operator<<(std::ostream& stream, const Length& length);
//
//std::istream& operator>>(std::istream& stream, Length& length);






