#include <iostream>
#include"Magnit.h"
#include"Sales.h"

int main()
{
    Print();
    bool exit = false;
    do {
        cout << "0 - sale of catalog; 1 - sale of subdirectory; 2 - sale of product; other numbers - exit" << endl;
        int sale;
        cin >> sale;
        if (sale == 0) {
            saleofcatalog();
            Print();
        }
        else if (sale == 1) {
            saleofsubdirectory();
            Print();
        }
        else if (sale == 2) {
            saleofproduct();
            Print();
        }
        else {
            exit = true;
        }
    } while (!exit);

}


