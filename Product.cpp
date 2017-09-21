//
// Created by rummykhan on 9/21/17.
//

#include "Product.h"

Product::Product(string n, double p) {
    name = n;
    price = p;
}

string Product::getName() {
    return name;
}

double Product::getPrice() {
    return price;
}
