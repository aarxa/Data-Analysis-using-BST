#include "BST.h"

BST::BST()
{
	this->mpRoot = nullptr;
}

BST::~BST()
{
	destroyTree(this->mpRoot);
}

//Getter
Node* BST::getRoot()
{
	return this->mpRoot;
}

//Setter
void BST::setRoot(Node* newRoot)
{
	this->mpRoot = newRoot;
}

//Private Function to insert node into BST
void BST::insert(Node*& pTree, int newUnits, string newData)
{
	if (pTree == nullptr)
	{
		TransactionNode* pMem = nullptr;
		pMem = new TransactionNode(newUnits, newData);
		pTree = pMem;
	}
	else if (newUnits > (dynamic_cast<TransactionNode*>(pTree))->getUnits())
	{
		insert(pTree->getRight(), newUnits, newData);
	}
	else if (newUnits < (dynamic_cast<TransactionNode*>(pTree))->getUnits())
	{
		insert(pTree->getLeft(), newUnits, newData);
	}
	else
	{
		cout << "Duplication Error" << endl;
	}
}

//Public Function
void BST::insert(int newUnits, string newData)
{
	insert(this->mpRoot, int(newUnits), string(newData));
}

//Private function
void BST::inOrderTraversal(Node*& pTree)
{
	if (pTree != nullptr)
	{
		inOrderTraversal(pTree->getLeft());

		cout << "Data: ";
		pTree->printData();
		cout << "Units: " << (dynamic_cast<TransactionNode*>(pTree))->getUnits() << endl;

		inOrderTraversal(pTree->getRight());
	}
}

//Public Function
void BST::inOrderTraversal()
{
	inOrderTraversal(this->mpRoot);
}

//Source Code: http://stackoverflow.com/questions/21109677/node-with-minimum-value-in-a-binary-search-tree
TransactionNode* BST::findSmallest()
{
	Node* n = this->mpRoot;
	if (n == nullptr)
		return nullptr;

	if (n->getLeft() == nullptr)
		return (dynamic_cast<TransactionNode*>(n));

	while (n->getLeft() != nullptr)
	{
		n = n->getLeft();
	}

	return (dynamic_cast<TransactionNode*>(n));
}


TransactionNode* BST::findLargest()
{
	Node* n = this->mpRoot;
	if (n == nullptr)
		return nullptr;

	if (n->getRight() == nullptr)
		return (dynamic_cast<TransactionNode*>(n));

	while (n->getRight() != nullptr)
	{
		n = n->getRight();
	}

	return (dynamic_cast<TransactionNode*>(n));
}


void BST::destroyTree(Node*& pTree)
{
	if (pTree != nullptr)
	{
		destroyTree(pTree->getLeft());
		destroyTree(pTree->getRight());
		(dynamic_cast<TransactionNode*>(pTree));
		delete pTree;
	}
}

void BST::destroyTree()
{
	destroyTree(this->mpRoot);
}

