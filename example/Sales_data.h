#ifndef  _SALES_DATA_H_
#define _SALES_DATA_H_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sales_data
{
    Sales_data() = default;
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data&, const Sales_data&);
void print(const Sales_data&);
void read(Sales_data&);

#endif


