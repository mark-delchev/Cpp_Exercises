#include <iostream>
//#include <iomanip>
#include <cstdio>
using namespace std;
int main()
{
    string airline;
    char airline_c[100];
    int adult_tickets;
    int kid_tickets;
    double adult_price, adult_final_price;
    double kid_price, kid_final_price;
    double service, final_price, profit;
    cout.setf(ios::fixed);
    cout.precision(2);
    cin >>  airline_c;
    cin >> adult_tickets;
    cin >> kid_tickets;
    cin >> adult_price;
    cin >> service;
    kid_price = adult_price * 0.3;
    adult_final_price = adult_price + service; 
    kid_final_price = kid_price + service; 
    final_price = (kid_final_price * kid_tickets) + (adult_final_price * adult_tickets);
    profit = final_price * 0.2;
    cout << "The profit of your agency from " << airline_c << " tickets is " << profit << " lv." << endl;
    printf("The profit of your agency from %s tickets is %.2lf lv.", airline_c, profit);
    return 0;
}