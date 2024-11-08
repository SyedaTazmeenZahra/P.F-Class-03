// Baisc Product Details and Price Calculation
#include <iostream>
using namespace std;
int main() {
    int product_1 = 75;
    int product_2 = 108;
    int product_3 = 46;

    int quantity_1;
    cout << "Enter the quantity for product 1: ";
    cin >> quantity_1;

    int quantity_2;
    cout << "Enter the quantity for product 2: ";
    cin >> quantity_2;

    int quantity_3;
    cout << "Enter the quantity for product 3: ";
    cin >> quantity_3;

    cout << "Total cost of First Product: " << product_1 * quantity_1 << endl;
    cout << "Total cost of Second Product: " << product_2 * quantity_2 << endl;
    cout << "Total cost of Third Product: " << product_3 * quantity_3 << endl;
    cout << "Whole Total Cost of All Products: $" << (product_1 * quantity_1) + (product_2 * quantity_2) + (product_3 * quantity_3);
    return 0;
}