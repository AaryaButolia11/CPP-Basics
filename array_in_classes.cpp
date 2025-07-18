#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void);  // just declaration
    void setPrice(void);     // just declaration
    void displayPrice(void); // just declaration
};

void shop::initCounter(void)
{
    counter = 0;
}

void shop::setPrice(void)
{
    cout << "Enter ID of your item: ";
    cin >> itemId[counter];
    cout << "Enter price of your item: ";
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with ID " << itemId[i] << " is: " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.initCounter(); // ✅ initialize counter to 0
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();
    return 0;
}
