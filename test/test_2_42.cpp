#include "Sales_data.h"

using namespace std;

int main(int argc, char** argv)
{
    Sales_data sales_data{"asdlld", 129, 78.3};

    cout << " bookNo : " << sales_data.bookNo << endl;
    cout << " units_sold : " << sales_data.units_sold << endl;
    cout << " revenue : " << sales_data.revenue << endl;
    return 0;
}
