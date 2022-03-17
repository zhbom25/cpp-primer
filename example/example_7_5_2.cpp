#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sales_data
{
public:
    Sales_data(string s, unsigned cnt, double price) :
        bookNo(s), units_sold(cnt), revenue(cnt*price) {
        cout << "Sales_data0" << endl;
    }
    Sales_data() : Sales_data("", 0, 0) {
        cout << "Sales_data1" << endl;
    }
    Sales_data(string s) : Sales_data(s, 0, 0) {
        cout << "Sales_data2" << endl;
    }
    Sales_data(istream &is) : Sales_data() {
        is >> str;
    }
    void print() {
        cout << "output : " << str << endl;
    }

private:
    string str;
    string bookNo;
    unsigned units_sold;
    double revenue;
};

int main(int argc, char** argv)
{
    Sales_data sales_data(std::cin);
    sales_data.print();
    Sales_data sales_data1("hello world");
    Sales_data sales_data2;
    return 0;
}


