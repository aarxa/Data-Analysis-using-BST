/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 08                                                               *

* Date: November 15, 2022                                                                  *

* Description: This program performs data analysis using Binary Search Tree                *

*******************************************************************************************/

#pragma once


#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::fstream;

class Node
{
protected:
	string mData;
	Node* mpLeft;
	Node* mpRight;

public:
	
	Node(string newData = " ");
	virtual ~Node();

	//Getters
	string getData();
	Node*& getLeft();
	Node*& getRight();

	//Setters
	void setData(string newData);
	void setLeft(Node* newLeft);
	void setRight(Node* newRight);

	virtual void printData() = 0;
};

