#include "TransactionNode.h"


TransactionNode::TransactionNode(int newUnits, string newData) : Node(newData)
{
	this->mUnits = newUnits;
}

TransactionNode::~TransactionNode()
{
	//destructor
}

int TransactionNode::getUnits()
{
	return this->mUnits;
}

void TransactionNode::setUnits(int newUnits)
{
	this->mUnits = newUnits;
}

void TransactionNode::printData()
{
	cout << getData() << endl;
}
