#pragma once
#include "Main.h"

void original() {
    tomatoes = tomatoes_original;
    potatoes = potatoes_original;
    carrots = carrots_original;
    apples = apples_original;
    bananas = bananas_original;
    pears = pears_original;
    strawberries = strawberries_original;
    cherries = cherries_original;
    watermelons = watermelons_original;
    Cooker = Cooker_original;
    Fridge = Fridge_original;
    Dishwasher = Dishwasher_original;
    Office_computer = Office_computer_original;
    Printer = Printer_original;
    Camera = Camera_original;
    Game_computer = Game_computer_original;
    Game_console = Game_console_original;
    Gaming_mat = Gaming_mat_original;
    all_products = all_products_original;
}

void Print() {
    cout << Magnit.Name_supermarket << ": " << endl;
    int g = 0;
    for (int i = 0; i < Food.subdirectories.size(); i++) {
        PrintSubdirectory = allsubdirectory[i];
        g = PrintSubdirectory.Products.size() + g;
    }
    for (int i = 0; i < allcatalogs.size(); i++) {
        PrintCatalog = allcatalogs[i];
        int c = PrintCatalog.subdirectories.size();
        int k = i;
        cout << "\t" << i + 1 << ")" << PrintCatalog.Name_catalog << ":" << endl;
        for (int i = 0; i < c; i++) {
            int z = k * c + i;
            PrintSubdirectory = allsubdirectory[z];
            int x = PrintSubdirectory.Products.size();
            int v = i;
            cout << "\t\t" << z + 1 << ")" << PrintSubdirectory.Name_subdirectory << ":" << endl;
            for (int i = 0; i < x; i++) {
                int b = (v * x + i) + k * g;
                PrintProduct = all_products[b];
                cout << "\t\t\t" << b + 1 << ")" << PrintProduct.Name_product << " price: " << PrintProduct.price << endl;
            }
        }
    }
    

}
/*void addproduct() {
    cout << " in which category do you want to add the product to? (1-6)" << endl;
    int x;
    cin >> x;
    cout << "Enter the product name -->" << endl;
    string c;
    cin >> c;
    cout << "Enter the product price -->" << endl;
    int a;
    cin >> a;
    int b = all_numbers.size() + 1;
    all_numbers.push_back(b);
    Subdirectory newsubdirectory;
    newsubdirectory = allsubdirectory[x - 1];
    vector <Product> temp;
    temp = newsubdirectory.Products;
    Product newproduct = { c, a, b };
    temp.push_back(newproduct);
    newsubdirectory.Products = temp;
    allsubdirectory[x - 1] = newsubdirectory;

}*/