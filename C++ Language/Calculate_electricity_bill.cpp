// • Up to 100 units: ₹5 per unit
//• 101 to 300 units: ₹7 per unit
//• Above 300 units: ₹10 per unit
//• Display the total bill.

#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;
    cout << "Enter electricity units consumed: ";
    cin >> units;
    if (units <= 100)
         bill = units * 5;
    else if (units <= 300)
         bill = (100 * 5) + ((units - 100) * 7);
    else
         bill = (100 * 5) + (200 * 7) + ((units - 300) * 10);

         cout << "Total bill: ₹" << bill;
                                                                
    return 0;
    }