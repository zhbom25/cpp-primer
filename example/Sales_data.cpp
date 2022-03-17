#include "Sales_data.h"

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const 
{
    if (units_sold) {
        return revenue / units_sold;
    } else {
        return 0;
    }
}

Sales_data add(const Sales_data &rhs1, const Sales_data &rhs2)
{
    Sales_data sales_data;
    sales_data.bookNo = rhs1.bookNo + rhs2.bookNo;
    sales_data.units_sold = rhs1.units_sold + rhs2.units_sold;
    sales_data.revenue = rhs1.revenue + rhs2.revenue;
    return sales_data;
}

void print(const Sales_data &rhs)
{
    cout << "bookNo : " << rhs.isbn() << " ; " << "avg_price : " << rhs.avg_price()
       << " ; " << "units_sold : " << rhs.units_sold << " ; " << "revenue : " << rhs.revenue << endl;
    return;
}

void read(Sales_data &item)
{
    double price = 0;
    cin >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return;
}


