#include <iostream>
#include <string>
#include "Shopping.h";
using namespace std;

int main() {
	Shopping_Cart CartItem;
	CartItem.setItemName("Chocolate");
	CartItem.setPricePerItem(19.9);
	CartItem.setQuantity(3);

	cout << CartItem.calculateTotalCost() << endl;
}