// Combining the full Application i.e all previous tasks
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

    double Totalcost = (product_1 * quantity_1) + (product_2 * quantity_2) + (product_3 * quantity_3);
    cout << "Total cost of First Product: $" << product_1 * quantity_1 << endl;
    cout << "Total cost of Second Product: $" << product_2 * quantity_2 << endl;
    cout << "Total cost of Third Product: $" << product_3 * quantity_3 << endl;
    cout << "Whole Total Cost of All Products: $" << Totalcost << endl;

    double discount = 0.1;    
    double discountedprice = (Totalcost > 200)? Totalcost * discount : Totalcost; 
    cout << "The price after discount is: $" << discountedprice << endl;

    double shippingfee = 15;
    double shipping = ( discountedprice < 150)? discountedprice + shippingfee : discountedprice + 0;
    cout << "The discounted price after the addition of shipping fee: $" << shipping << endl;

    double points = ( shipping > 300)? 50 : 20;
    cout << "The Loyalty points earned in this case are: " << points;
}