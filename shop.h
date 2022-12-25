#ifndef SHOP
#define SHOP

#include <iostream>
#include "product.h"
#include "list"

class Shop {
private:
    list<Product*> productionRegister;
    list<Product*>::iterator iterProduction;
public:
    Shop();
    ~Shop();
    void GetListOfProductsInStock(); // выводит список выпечки в наличии
    void ChangeNumberPiesAfterSale(); // после продажи меняем количество товара на складе
};

#endif // SHOP

