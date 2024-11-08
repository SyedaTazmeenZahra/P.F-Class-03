// Applying Shipping Cost on Previous Task Using Logical Operators
#include <iostream>
using namespace std;
int main() {
    double discountedprice = 108.6;
    double shippingfee = 15;
    double shipping = ( discountedprice < 150)? discountedprice + shippingfee : discountedprice + 0;
    cout << "The discounted price after the addition of shipping fee: $" << shipping;
    return 0;
}