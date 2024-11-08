// Customer Rewards on Previous Task Using Logical Operators
#include <iostream>
using namespace std;
int main() {
    double shipping = 123.6;
    double points = ( shipping > 300)? 50 : 20;
    cout << "The Total cost after discount with shipping is: " << shipping << endl;
    cout << "The Loyalty points earned in this case are: " << points;
    return 0;
}