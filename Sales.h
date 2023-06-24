#pragma once
#include"Magnit.h"
#include"Main.h"
void saleofproduct() {
	cout << "enter number of product 1 - 18(other numbers - return all products to the original price) ==> " << endl;
	int number_ofproduct;
	int k = 0;
	int z = 0;
	int b = 0;
	int c = 0;
	int price_ofsale = 0;
	Product Sale = { "0", 0, Number_sale };
	cin >> number_ofproduct;
	if (number_ofproduct >=1 and number_ofproduct <= 18) {
		for (int i = 0; i < 18; i++) {
			if (all_numbers[i] == number_ofproduct) {
				k = all_numbers[i];
			}
		}
		for (int i = 0; i < 18; i++) {
			Sale = all_products[i];
			z = Sale.number;
			b = Sale.price;
			if (z == k) {
				price_ofsale = b;
				c = i;
			}
		}
		Sale = all_products[c];
		cout << "enter the sale in % ==> " << endl;
		int sale;
		cin >> sale;
		price_ofsale = price_ofsale * (100 - sale) / 100;
		Sale.price = price_ofsale;
		all_products[c] = Sale;
		tomatoes = all_products[0];
		potatoes = all_products[1];
		carrots = all_products[2];
		apples = all_products[3];
		bananas = all_products[4];
		pears = all_products[5];
		strawberries = all_products[6];
		cherries = all_products[7];
		watermelons = all_products[8];
		Cooker = all_products[9];
		Fridge = all_products[10];
		Dishwasher = all_products[11];
		Office_computer = all_products[12];
		Printer = all_products[13];
		Camera = all_products[14];
		Game_computer = all_products[15];
		Game_console = all_products[16];
		Gaming_mat = all_products[17];
	}
	else {
		original();
	}
}
void saleofsubdirectory() {
	int number_ofsd;
	cout << "enter number of subdirectory 1 - 6(other numbers - return all products to the original price) ==> " << endl;
	cin >> number_ofsd;
	int k = 0;
	Product Sale = { "0", 0, Number_sale };
	int price_ofsale = 0;
	if (number_ofsd >= 1 and number_ofsd <= 6) {
		for (int i = 0; i < 6; i++) {
			if ((i + 1) == number_ofsd) {
				k = i;
			}
		}
		cout << "enter the sale in % ==> " << endl;
		int sale;
		cin >> sale;
		for (int i = (k * 3); i < (k * 3 + 3); i++) {
			Sale = all_products[i];
			price_ofsale = Sale.price;
			price_ofsale = price_ofsale * (100 - sale) / 100;
			Sale.price = price_ofsale;
			all_products[i] = Sale;

		}
		tomatoes = all_products[0];
		potatoes = all_products[1];
		carrots = all_products[2];
		apples = all_products[3];
		bananas = all_products[4];
		pears = all_products[5];
		strawberries = all_products[6];
		cherries = all_products[7];
		watermelons = all_products[8];
		Cooker = all_products[9];
		Fridge = all_products[10];
		Dishwasher = all_products[11];
		Office_computer = all_products[12];
		Printer = all_products[13];
		Camera = all_products[14];
		Game_computer = all_products[15];
		Game_console = all_products[16];
		Gaming_mat = all_products[17];
	}
	else {
		original();
	}

}
void saleofcatalog() {
	int number_ofct;
	cout << "enter number of catalog 1 - 2(other numbers - return all products to the original price) ==> " << endl;
	cin >> number_ofct;
	int k = 0;
	Product Sale = { "0", 0, Number_sale };
	int price_ofsale = 0;
	if (number_ofct >= 1 and number_ofct <= 2) {
		for (int i = 0; i < 2; i++) {
			if ((i + 1) == number_ofct) {
				k = i;
			}
		}
		cout << "enter the sale in % ==> " << endl;
		int sale;
		cin >> sale;
		for (int i = (k * 9); i < (k * 9 + 9); i++) {
			Sale = all_products[i];
			price_ofsale = Sale.price;
			price_ofsale = price_ofsale * (100 - sale) / 100;
			Sale.price = price_ofsale;
			all_products[i] = Sale;

		}
		tomatoes = all_products[0];
		potatoes = all_products[1];
		carrots = all_products[2];
		apples = all_products[3];
		bananas = all_products[4];
		pears = all_products[5];
		strawberries = all_products[6];
		cherries = all_products[7];
		watermelons = all_products[8];
		Cooker = all_products[9];
		Fridge = all_products[10];
		Dishwasher = all_products[11];
		Office_computer = all_products[12];
		Printer = all_products[13];
		Camera = all_products[14];
		Game_computer = all_products[15];
		Game_console = all_products[16];
		Gaming_mat = all_products[17];
	}
	else {
		original();
	}

}