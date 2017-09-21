//
// Created by rummykhan on 9/21/17.
//

#ifndef HELLO_PRODUCT_H
#define HELLO_PRODUCT_H

#include <iostream>
using namespace std;

class Product {
    string name;
    double price;
public:
    Product(string name, double price);

    string getName();

    double getPrice();
};


#endif //HELLO_PRODUCT_H
