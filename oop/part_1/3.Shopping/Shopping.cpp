#include "Shopping.h";

void Shopping_Cart::setItemName(string name)
{
	itemName = name;
}

void Shopping_Cart::setQuantity(int qty)
{
	quantity = qty;
}

void Shopping_Cart::setPricePerItem(double price)
{
	pricePerItem = price;
}

string Shopping_Cart::get_name()
{
	return itemName;
}

int Shopping_Cart::get_quantity()
{
	return quantity;
}

double Shopping_Cart::get_item_price()
{
	return pricePerItem;
}

double Shopping_Cart::calculateTotalCost()
{
	return get_quantity() * get_item_price();
}
