#include <iostream>
#include "Product.h"

using namespace std;

int main() {

    // Concept of Pointer with Literals/Primitives
    int n = 10;
    int *p = &n;

    cout << "Value: (n) " << n << endl;
    cout << "Address of Value: (&n) " << &n << endl;
    cout << "Value of pointer: (p) " << p << endl;
    cout << "Address of pointer: (&p) " << &p << endl;
    cout << "V-Value of pointer: (*p) " << *p << endl;
    n = 4500;
    cout << "V-Value of pointer: (*p) " << *p << endl;

    cout << endl << endl;

    // Concept of Pointer with ADDs
    Product product("Laptop", 2500.65);
    cout << "Name of product is  : " << product.getName() << endl;
    cout << "Price of product is : " << product.getPrice() << endl;
    cout << "Memory address of product is : " << &product << std::endl;

    cout << endl << endl;

    Product *product1 = &product;
    cout << "Name of product1 is  : " << product1->getName() << endl;
    cout << "Price of product1 is : " << product1->getPrice() << endl;
    cout << "Memory Address of product1 is : " << product1 << endl;

    return 0;
}