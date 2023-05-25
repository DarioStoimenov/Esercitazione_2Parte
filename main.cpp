/*! \file main.cpp
	\brief testing the given classes IsoTriangle and IsoTrapezoid


	Details this main its made for test the two leaf classes IsoTriangle and IsoTrapezoid 
	derived from the base class polygon. The program starts by trying to use the default constructors and
	the destructor. After it calls the operands to control how they respond.
	Finally it also sees the fuction of the getters and setters, and other additional functions.
*/


#include <iostream>
#include "IsoTriangle.h"
#include "IsoTrapezoid.h"
#include "polygon.h"


int main() {

	cout << "Welcome to the test of IsoTriangle and IsoTrapezoid" << endl;
	cout << "we'll start from testing IsoTriangle with its constructors and functions" << endl;
	cout << "after that the program does the equivalento for IsoTrapezoid" << endl;

	cout << "Default Constructor" << endl;

	IsoTriangle isotrA;
	
	isotrA.Dump();
	isotrA.Draw();

	cout << "Constructor with assigned values" << endl;

	IsoTriangle isotrB(2.2,2.2);

	isotrB.Dump();
	isotrB.Draw();

	//cout << "Destructor test" << endl;

	//isotrB~IsoTriangle;
	//isotrB.Dump();

	cout << "Constructor with wrong assigned values" << endl;

	IsoTriangle isotrC(-2.2,-2.2);

	isotrC.Dump();
	isotrC.Draw();

	cout << "Copy Constructor" << endl;

	IsoTriangle isotrD(isotrB);

	isotrD.Dump();
	isotrD.Draw();

	cout << "check if the values are the same of the constructor with assigned values" << endl;

	///Testing operators

	cout << "Asignment Operator" << endl;
	
	IsoTriangle AO1(3.12, 14);
	AO1.Draw();
	IsoTriangle AO2(1, 1);
	AO1 = AO2;
	AO1.Draw();
	
	cout << "the two values should correspond" << endl;

		
	return 0;
}