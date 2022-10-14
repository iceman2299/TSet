#pragma once
#include "TBitField.h"
#include <iostream>

class TSet
{
	int MaxPower;
	TBitField BitField;
public:
	TSet(int n);
	TSet(const TSet& s);
	operator TBitField();
	void InsElem(const int elem);
	void DelElem(const int elem);
	void IsMember(const int elem);
	int operator==(const TSet& s);
	TSet(const TBitField& bf);
	TSet& operator=(const TSet& s);
	TSet operator+(int Elem);
	TSet operator-(int Elem);
	TSet operator+(const TSet& s);
	TSet operator*(const TSet& s);
	TSet operator~();
	friend std::ostream& operator<<(std::ostream& os, const TSet& s);
	friend std::istream& operator>>(std::istream& is, const TSet& s);
};