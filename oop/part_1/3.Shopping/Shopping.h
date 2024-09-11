#pragma once
#include <string>
using namespace std;

class Shopping_Cart
{
private:
	string itemName;
	int quantity;
	double pricePerItem;

public:
	void setItemName(string name);
	void setQuantity(int qty);
	void setPricePerItem(double price);
	string get_name();
	int get_quantity();
	double get_item_price();
	double calculateTotalCost();
};
