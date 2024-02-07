/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 08                                                               *

* Date: November 15, 2022                                                                  *

* Description: This program performs data analysis using Binary Search Tree                *

*******************************************************************************************/

#pragma once
#include "BST.h"

class DataAnalysis
{
private:
	BST mSoldUnits;
	BST mPurchaseUnits;
	ifstream mDataStream;

	//Private Methods
	void openFile();
	void parseFile();

	//void insertToTree(string const& newTransactionType, int const& newUnits, string const& newData);
	void printData();
	void displayTrends();

public:

	void runAnalysis();
};

