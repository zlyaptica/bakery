#ifndef SHOP
#define SHOP

#include <iostream>
#include "product.h"
#include "list"
#include "globals.h"
#include "fstream"

class Shop {
private:
    list<Product*> productRegister;
    list<Product*>::iterator iterProduct;
public:
    Shop();
    ~Shop();
    void GetListOfProductsInStock(); // выводит список выпечки в наличии
    void ChangeNumberPiesAfterSale(); // после продажи меняем количество товара на складе
};

#endif // SHOP

