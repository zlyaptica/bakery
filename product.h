#ifndef PRODUCT
#define PRODUCT

#include "string"
#include <iostream>

using namespace std;

class Product {
    int id;
    string name;
    int weight;
    int countInStock;
    float cost; // по какой цене закупаем
    float price; // по какой продаем
public:
    Product(int id, string name, int weight, int countInStock, float cost, float price);
    int GetProductID();
    string GetProductName();
    int GetProductWeight();
    int GetProductCountInStock();
    float GetProductCost();
    float GetProductPrice();
    ~Product();
};

#endif // PRODUCT

