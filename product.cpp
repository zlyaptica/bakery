#include "product.h"

Product::Product(int id, string name, int weight, int countInStock, float cost, float price) : id(id), name(name), weight(weight), countInStock(countInStock), cost(cost), price(price)
{

}

int Product::GetProductID()
{
    return id;
}

string Product::GetProductName()
{
    return name;
}

int Product::GetProductWeight()
{
    return weight;
}

int Product::GetProductCountInStock()
{
    return countInStock;
}

float Product::GetProductCost()
{
    return cost;
}

float Product::GetProductPrice()
{
    return price;
}

Product::~Product()
{

}
