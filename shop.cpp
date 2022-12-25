#include "shop.h"

Shop::Shop()
{
    ifstream fin;
    fin.open("product.txt");
    int lineCount = LineCount("product.txt");
    int recordCount = lineCount / 6;
    string *mas = new string[lineCount + 1];
    int j = 0;
    int countField = 6;

    while (!fin.eof()) {
        for (int i = 0; i < countField; i++) {
            int idx = countField * j + i;
            getline(fin, mas[idx], '\n');
            if (mas[idx] == "")
                break;
        }
        ++j;
    }
    int i = 0;
    while (true) {
        if (mas[countField * i].empty())
            break;
        int id = stoi(mas[countField * i]);
        string name = (mas[countField * i + 1]);
        int weight = stoi(mas[countField * i + 2]);
        int inStock = stoi(mas[countField * i + 3]);
        float cost = stof(mas[countField * i + 4]);
        float price = stof(mas[countField * i + 5]);
        Product* ptrProduct = new Product(id, name, weight, inStock, cost, price);
        productRegister.push_back(ptrProduct);
        i++;
    }

    cout << "The product database has been successfully loaded!" << endl;
    delete[] mas;
}

void Shop::GetListOfProductsInStock()
{
    cout << "id name\t\t\tweight \tin_stock \tprice" << endl;
    for (iterProduct = productRegister.begin(); iterProduct != productRegister.end(); iterProduct++)
    {
        Product* product = *iterProduct;
        cout << product->GetProductID() << " " << product->GetProductName() << "\t"
              << product->GetProductWeight() << "\t" << product->GetProductCountInStock()
              << "\t" << product->GetProductPrice() << endl;
    }
}

void Shop::ChangeNumberPiesAfterSale()
{

}

Shop::~Shop()
{
    while(!productRegister.empty())
    {
        iterProduct = productRegister.begin();
        delete *iterProduct;
        productRegister.erase(iterProduct);
    }
}
