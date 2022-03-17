#include <iostream>
using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    //int bookNo;
    //int units_sold;
    //int revenue;
    Sales_data() {
        
    };

    Sales_data(std::string bookNo, unsigned units_sold, double revenue) {
        this->bookNo = bookNo;
        this->units_sold = units_sold;
        this->revenue = revenue;
    };

    void print_data(void) {
        cout << " bookNo : " << bookNo << endl;
        cout << " units_sold : " << units_sold << endl;
        cout << " revenue : " << revenue << endl;
    };
};

struct Menu_data {
    std::string menuNo;
    int age;
    int data;
};

int main(int argc, char** argv)
{
    Sales_data sales_data1;
    sales_data1.bookNo = "hsakdfha";
    sales_data1.units_sold = 12;
    sales_data1.revenue = 123.22;
    sales_data1.print_data();
    //Sales_data sales_data2 = {.bookNo = "fhdkas", .units_sold = 221, .revenue = 79.77};
    Sales_data sales_data2("adllsjdl", 983, 30.92);
    sales_data2.print_data();
    Menu_data menu_data{"dksdj", 21, 89};
    return 0;
}
