/*******************************************************************************************

* Programmer: Aarya Rajgor                                                                 *

* Class: CptS 122, Fall 2022; Lab Section 05                                               *

* Programming Assignment: 08                                                               *

* Date: November 15, 2022                                                                  *

* Description: This program performs data analysis using Binary Search Tree                *

*******************************************************************************************/

#include "TransactionNode.h"
#include <fstream>
#pragma once


class BST
{
private:

	Node* mpRoot;

    //Private Methods
	void insert(Node*& pTree, int newUnits, string newData);
	void destroyTree(Node*& pTree);
	void inOrderTraversal(Node*& pTree);

public:

	BST();
	~BST();

	//Getter
	Node* getRoot();

	//Setter
	void setRoot(Node* newRoot);

	//Public methods
	void insert(int newUnits, string newData);
	void inOrderTraversal();
	void destroyTree();

	TransactionNode* findSmallest();
	TransactionNode* findLargest();
};

