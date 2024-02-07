#include "DataAnalysis.h"

void DataAnalysis::openFile()
{
	mDataStream.open("data.csv");
	if (!mDataStream.is_open())
	{
		cout << "Could not open the file!";
	}
}

void DataAnalysis::parseFile()
{
	char item[20];
	int number = 0;
	char type[20];

	while (!(mDataStream.eof()))
	{
		mDataStream.getline(item, 20, ',');
		number = atoi(item);
		mDataStream.getline(item, 20, ',');
		mDataStream.getline(type, 20, '\n');

		if (type[0] == 'P')
		{
			mPurchaseUnits.insert(number, item);
		}
		else if (type[0] == 'S')
		{
			mSoldUnits.insert(number, item);
		}
	}
	mDataStream.close();
}


void DataAnalysis::printData()
{
	cout << "SOLD ITEMS" << endl;
	mSoldUnits.inOrderTraversal();
	cout << endl << endl;
	cout << "PURCHASED ITEMS" << endl;
	mPurchaseUnits.inOrderTraversal();
}


void DataAnalysis::displayTrends()
{
	TransactionNode* item;

	cout << "ANALYSIS FOR SOLD ITEMS" << endl;
	cout << "Maximum sold:" << endl;
	item = mSoldUnits.findLargest();
	cout << "Item: " << item->getData() << ", Units: " << item->getUnits() << endl;
	cout << "Least Sold:" << endl;
	item = mSoldUnits.findSmallest();
	cout << "Item: " << item->getData() << ", Units: " << item->getUnits() << endl << endl;

	cout << "ANALYSIS FOR PURCHASED ITEMS" << endl;
	cout << "Most Purchased item:" << endl;
	item = mPurchaseUnits.findLargest();
	cout << "Item: " << item->getData() << ", Units: " << item->getUnits() << endl;
	cout << "Least Purchased item:" << endl;
	item = mPurchaseUnits.findSmallest();
	cout << "Item: " << item->getData() << ", Units: " << item->getUnits() << endl << endl;
}

void DataAnalysis::runAnalysis()
{
	openFile();
	parseFile();
	printData();
	system("pause");
	system("cls");
	displayTrends();
}