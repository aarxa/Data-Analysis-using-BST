/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 08                                                               *

* Date: November 15, 2022                                                                  *

* Description: This program performs data analysis using Binary Search Tree                *

*******************************************************************************************/

#pragma once

#include "Node.h"

class TransactionNode : public Node
{
private: 
	int mUnits;

public:

	//TransactionNode();
	TransactionNode(int newUnits = 0, string newData = " ");
	~TransactionNode();

	//Getter
	int getUnits();

	//Setter
	void setUnits(int newUnits);

	void printData();

};
