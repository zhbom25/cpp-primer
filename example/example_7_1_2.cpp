#include "Sales_data.h"

int main(int argc, char** argv)
{
    Sales_data sales_data1, sales_data2;
    sales_data1.bookNo = "xxxxadsjfla";
    sales_data1.units_sold = 12;
    sales_data1.revenue = 3.4;
    sales_data2.bookNo = "wyeriwiwi";
    sales_data2.units_sold = 36;
    sales_data2.revenue = 7.8;
    Sales_data sales_data = add(sales_data1, sales_data2);
    print(sales_data1);
    Sales_data sales_data3;
    read(sales_data3);
    print(sales_data3);
    return 0;
}


