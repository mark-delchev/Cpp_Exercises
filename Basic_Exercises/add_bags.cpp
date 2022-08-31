#include <iostream>
using namespace std;
int main()
{
    double bags_over20, bags_kg, bags_price, total_price;
    int days, bags_num;
    cin >> bags_over20;
    cin >> bags_kg;
    cin >> days;
    cin >> bags_num;
    if (bags_kg < 10)
    {
        bags_price = bags_over20 * 0.2;
    }
    else if (bags_kg > 10 && bags_kg <= 20)
    {
        bags_price = bags_over20 * 0.5;
    }
    else
    {
        bags_price = bags_over20;
    }
    if (days < 7)
    {
        bags_price *= 1.4;
    }
    else if (days <= 30 && days >= 7)
    {
        bags_price *= 1.15;
    }
    else
    {
        bags_price *= 1.10;
    }
    total_price = bags_price * bags_num;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "The total price of bags is: " << total_price << " lv." << endl;
    return 0;
}