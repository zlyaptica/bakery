#ifndef PRODUCT
#define PRODUCT

#include "string"
#include <iostream>

using namespace std;

class Product {
    int id;
    string name;
    float cost; // по какой цене закупаем
    float price; // по какой продаем
public:
    Product();
    ~Product();
};

#endif // PRODUCT

