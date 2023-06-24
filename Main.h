#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

using Number_product = int;

struct Product {
    string Name_product;
    int price;
    Number_product number;
};

struct Subdirectory{
    string Name_subdirectory;
    vector <Product> Products;
};

struct Catalog{
    string Name_catalog;
    vector <Subdirectory> subdirectories;
};

struct Supermarket {
    string Name_supermarket;
    vector <Catalog> catalogs;
};

Number_product Number_Print = 0;
Number_product Number_sale = 0;
Number_product Number_tomatoes = 1;
Number_product Number_potatoes = 2;
Number_product Number_carrots = 3;
Number_product Number_apples = 4;
Number_product Number_bananas = 5;
Number_product Number_pears = 6;
Number_product Number_strawberries = 7;
Number_product Number_cherries = 8;
Number_product Number_watermelons = 9;
Number_product Number_Cooker = 10;
Number_product Number_Fridge = 11;
Number_product Number_Dishwasher = 12;
Number_product Number_Office_computer = 13;
Number_product Number_Printer = 14;
Number_product Number_Camera = 15;
Number_product Number_Game_computer = 16;
Number_product Number_Game_console = 17;
Number_product Number_Gaming_mat = 18;

vector <Number_product> all_numbers{ Number_tomatoes, Number_potatoes, Number_carrots, Number_apples, Number_bananas, Number_pears, Number_strawberries, Number_cherries, Number_watermelons, Number_Cooker, Number_Fridge, Number_Dishwasher, Number_Office_computer, Number_Printer, Number_Camera, Number_Game_computer, Number_Game_console, Number_Gaming_mat };

Product PrintProduct = { "0" , 0 , Number_Print};
Product tomatoes = { "tomato", 70 , Number_tomatoes};
Product potatoes = { "potato", 50, Number_potatoes };
Product carrots = { "carrot", 110, Number_carrots };
Product apples = { "apple", 40, Number_apples };
Product bananas = { "banana", 70, Number_bananas };
Product pears = { "pear", 60, Number_pears };
Product strawberries = { "strawberry", 150, Number_strawberries };
Product cherries = { "cherry", 140, Number_cherries };
Product watermelons = { "watermelon", 300, Number_watermelons };
Product Cooker = { "cooker", 10000, Number_Cooker };
Product Fridge = { "fridge", 15000, Number_Fridge };
Product Dishwasher = { "dishwasher", 20000, Number_Dishwasher };
Product Office_computer = { "office computer", 40000, Number_Office_computer };
Product Printer = { "printer", 30000, Number_Printer };
Product Camera = { "camera", 25000, Number_Camera };
Product Game_computer = { "game computer", 70000, Number_Game_computer };
Product Game_console = { "game consol", 50000, Number_Game_console };
Product Gaming_mat = { "gaming mat", 1000, Number_Gaming_mat };

vector <Product> all_products{ tomatoes, potatoes, carrots, apples, bananas, pears, strawberries, cherries, watermelons, Cooker, Fridge, Dishwasher, Office_computer, Printer, Camera, Game_computer, Game_console, Gaming_mat };

Subdirectory PrintSubdirectory = { "0", {} };
Subdirectory Vegetables = { "Vegetables", {tomatoes, potatoes, carrots} };
Subdirectory Fruits = { "Fruits", {apples, bananas, pears} };
Subdirectory Berries = { "Berries", {strawberries, cherries, watermelons} };
Subdirectory Appliances = { "Appliances", {Cooker, Fridge, Dishwasher} };
Subdirectory Office_equipment = { "Office equipment", {Office_computer, Printer, Camera} };
Subdirectory Game_equipment = { "Game equipment", {Game_computer, Game_console, Gaming_mat} };

vector <Subdirectory> allsubdirectory{ Vegetables, Fruits, Berries, Appliances, Office_equipment, Game_equipment };

Catalog PrintCatalog = { "0", {} };
Catalog Food = { "Food", {Vegetables, Fruits, Berries} };
Catalog Technic = { "Technic", {Appliances, Office_equipment, Game_equipment} };

vector <Catalog> allcatalogs = { Food, Technic };

Supermarket Magnit = { "Magnit", {Food, Technic} };

Product tomatoes_original = tomatoes;
Product potatoes_original = potatoes;
Product carrots_original = carrots;
Product strawberries_original = strawberries;
Product cherries_original = cherries;
Product watermelons_original = watermelons;
Product apples_original = apples;
Product bananas_original = bananas;
Product pears_original = pears;
Product Cooker_original = Cooker;
Product Fridge_original = Fridge;
Product Dishwasher_original = Dishwasher;
Product Office_computer_original = Office_computer;
Product Camera_original = Camera;
Product Printer_original = Printer;
Product Gaming_mat_original = Gaming_mat;
Product Game_computer_original = Game_computer;
Product Game_console_original = Game_console;

vector <Product> all_products_original = all_products;