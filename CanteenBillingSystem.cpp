#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Variable Declaration and Pricing
    int friesPrice = 80, sandwichPrice = 120, macroniPrice = 300, biryaniPrice = 250, teaPrice = 70,
	choice = 1, itemNumber = 0, quantity = 0, totalAmount = 0;

	//Header
    cout << "Welcome to Canteen Billing System!\n";
    cout << "=================================\n";

	//Menu
    cout << "\nMenu:\n";
    cout << "\n1.Fries - $" << friesPrice << " \n";
    cout << "2.Sandwich - $" << sandwichPrice << " \n";
    cout << "3.Macroni - $" << macroniPrice << " \n";
    cout << "4.Biryani - $" << biryaniPrice << " \n";
    cout << "5.Tea - $" << teaPrice << " \n";
    cout << endl;

	//Invoice Format
    string invoice = "\n---------- RECEIPT -----------\n";
    invoice += "Quantity | Item       | Price\n";
    invoice += "-----------------------------\n";

    while (choice != 0) {
        cout << "Enter Item No (or press 0 to Finish): ";
        cin >> itemNumber;
		
		//Multiple Conditional Statement for Exception Handling and avoiding Logical Error
        if (itemNumber == 0) {
            break;
        } else if (itemNumber >= 1 && itemNumber <= 5) {
            cout << "Enter Quantity: ";
            cin >> quantity;
            if(quantity==0){
            	cout<<"Invalid Quantity.\n";
			}
			else{
			
            switch (itemNumber) {
                case 1:
                    totalAmount += friesPrice * quantity;
                    invoice += to_string(quantity) + "        | Fries      | $" + to_string(friesPrice * quantity) + "\n";
                    break;
                case 2:
                    totalAmount += sandwichPrice * quantity;
                    invoice += to_string(quantity) + "        | Sandwich   | $" + to_string(sandwichPrice * quantity) + "\n";
                    break;
                case 3:
                    totalAmount += macroniPrice * quantity;
                    invoice += to_string(quantity) + "        | Macroni    | $" + to_string(macroniPrice * quantity) + "\n";
                    break;
                case 4:
                    totalAmount += biryaniPrice * quantity;
                    invoice += to_string(quantity) + "        | Biryani    | $" + to_string(biryaniPrice * quantity) + "\n";
                    break;
                case 5:
                    totalAmount += teaPrice * quantity;
                    invoice += to_string(quantity) + "        | Tea        | $" + to_string(teaPrice * quantity) + "\n";
                    break;
            	}
    		}
        } else {
            cout << "Invalid Item Number! Please Try Again.\n";
        }
    }

    invoice += "-----------------------------\n";
    invoice += "Total Amount: $" + to_string(totalAmount) + "\n";

	//Printing Invoice
    cout << invoice;

    return 0;
}

