#include <iostream>
using namespace std;
int returnTotalBill()
{
    char c, item, snacks, beverages, selectAgain;
    int billAmount = 0;
    cout << "------------Welcome to Food Counter------------" << endl;
    cout << "---------Please follow below instruction---------" << endl;
    cout << "Step 1: Please press s to start your order" << endl;
    cout << "Step 2: You can select both snacks and beverages " << endl;
    cout << "Step 3: Please press a to select snacks " << endl;
    cout << "Step 4: Please press b to select beverages " << endl;
    cout << "Step 5: You will get your final bill after your order" << endl;
start:
    cin >> c;
    if (c == 's' || c == 'S')
    {
    items:
        cout << "Please select your choice " << endl;
        cout << "(a)Snacks                     (b)Beverages" << endl;
        cin >> item;
        if (item == 'a' || item == 'A')
        {
        snacksList:

            cout << "Please select 1, 2, 3, 4, 5 as per your choice " << endl;
            cout << "Item Name   : Price " << endl;
            cout << "(1)Burger   : 50  Rs" << endl;
            cout << "(2)Pizza    : 250 Rs" << endl;
            cout << "(3)Dose     : 150 Rs" << endl;
            cout << "(4)Veg Roll : 250 Rs" << endl;
            cout << "(5)Momos    : 100 Rs" << endl;
            cin >> snacks;
            if (snacks == '1')
            {
                billAmount = billAmount + 50;
            }

            else if (snacks == '2')
            {
                billAmount = billAmount + 250;
            }
            else if (snacks == '3')
            {
                billAmount = billAmount + 150;
            }
            else if (snacks == '4')
            {
                billAmount = billAmount + 250;
            }
            else if (snacks == '5')
            {
                billAmount = billAmount + 100;
            }
            else
            {
                cout << "You have enter wrong value,please select correct option! " << endl;
                goto snacksList;
            }
            cout << "Do you want to add more items, Press 'y' for yes and 'n' for no" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
        }
        else if (item == 'b' || item == 'B')
        {
        BeveragesList:

            cout << "Please select 1, 2, 3, 4, 5 as per your choice " << endl;
            cout << "Item Name          : Price " << endl;
            cout << "(1)Apple Juice     : 150 Rs" << endl;
            cout << "(2)Orange Juice    : 100 Rs" << endl;
            cout << "(3)Banana Shake    : 80  Rs" << endl;
            cout << "(4)Mango Shake     : 100 Rs" << endl;
            cout << "(5)Chocolate Shake : 200 Rs" << endl;
            cin >> beverages;
            if (beverages == '1')
            {
                billAmount = billAmount + 150;
            }

            else if (beverages == '2')
            {
                billAmount = billAmount + 100;
            }
            else if (beverages == '3')
            {
                billAmount = billAmount + 80;
            }
            else if (beverages == '4')
            {
                billAmount = billAmount + 100;
            }
            else if (beverages == '5')
            {
                billAmount = billAmount + 200;
            }
            else
            {
                cout << "You have enter wrong value,please select correct option! " << endl;
                goto BeveragesList;
            }
            cout << "Do you want to add more items, Press 'y' for yes and 'n' for no" << endl;
            cin >> selectAgain;
            if (selectAgain == 'y' || selectAgain == 'Y')
            {
                goto items;
            }
            else
            {
                return billAmount;
            }
        }
        else
        {
            cout << "You have enter wrong value,please select correct option! " << endl;
            goto items;
        }
    }
    else
    {
        cout << "You have enter wrong value,please press s!" << endl;
        goto start;
    }
    return billAmount;
}
int main()
{
int total=returnTotalBill(); 
cout<<"Your Total Bill amount is "<<total<<" Rs"<<endl;
cout<<endl;
cout<<"Thankyou for your order "<<endl;
cout<<" Have a nice day :)"<<endl;
    return 0;
}