#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int windows;
    double total_fee = 0;
    double delivery_fee, final_price;
    string type; 
    string deli, very;
    cin >> windows;
    cin >> type;
    cin >> deli >> very;
    if (deli == "With")
    {
        delivery_fee += 60;
    }
    if (windows <= 10)
    {
        cout << "Invalid order" << endl;
        exit(EXIT_SUCCESS);
    }
    if (type == "90X130")
    {
        if (windows <= 30)
        {
            total_fee += 110;
        }
        else if (windows > 60)
        {
            total_fee += 110 * 0.92;
        }
        else
        {
            total_fee += 110 * 0.95;
        }
    }
    else if (type == "100X150")
    {
        if (windows <= 40)
        {
            total_fee += 140;
        }
        else if (windows > 80)
        {
            total_fee += 140 * 0.9;
        }
        else
        {
            total_fee += 140 * 0.94;
        }
    }
    else if (type == "130X180")
    {
        if (windows <= 20)
        {
            total_fee += 190;
        }
        else if (windows > 50)
        {
            total_fee += 190 * 0.88;
        }
        else 
        {
            total_fee += 190 * 0.93;
        }
    }
    else if (type == "200X300")
    {
        if (windows <= 25)
        {
            total_fee += 250;
        }
        else if (windows > 50)
        {
            total_fee += 250 * 0.86;
        }
        else
        {
            total_fee += 250 * 0.91;
        }
    }
    
    final_price = (total_fee * windows) + delivery_fee;
    if (windows > 99)
    {
        final_price *= 0.96;
    }
    cout << fixed << setprecision(2) << final_price << " BGN" << endl;
    return 0;
}