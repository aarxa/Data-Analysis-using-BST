#include "Node.h"

Node::Node(string newData)
{
	mData = newData;
	mpLeft = nullptr;
	mpRight = nullptr;
}

Node::~Node()
{
	//destructor
}

string Node::getData()
{
	return this->mData;
}

Node*& Node::getLeft()
{
	return this->mpLeft;
}

Node*& Node::getRight()
{
	return this->mpRight;
}

void Node::setData(string newData)
{
	this->mData = newData;
}

void Node::setLeft(Node* newLeft)
{
	this->mpLeft = newLeft;
}

void Node::setRight(Node* newRight)
{
	this->mpRight = newRight;
}


