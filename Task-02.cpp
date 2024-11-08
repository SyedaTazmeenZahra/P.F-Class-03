// Applying Discounts to Previous Task Using Ternry Operators
#include <iostream>
using namespace std;
int main() {
    double Totalcost = 1086;
    double discount = 0.1;
    
    double discountedprice = (Totalcost > 200)? Totalcost * discount : Totalcost; 
    cout << "The price after discount is: $" << discountedprice;
    return 0;
}