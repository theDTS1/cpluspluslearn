#include <iostream>

using namespace  std;

int main() {

    double sales = 95000;
    cout << "Sales BGN :"<< sales << endl;
    const double  stateTaxRate = .04;
    double  stateTax = sales * stateTaxRate;
    cout << "State Tax BGN :" << stateTax << endl;

    const double  countyTaxRate = .02;
    double  countyTax = sales * countyTaxRate;
    cout << "State Tax BGN :" << countyTax << endl;

    double  totalTax = stateTax + countyTax;
    cout << "Total tax BGN :" << totalTax ;
    return 0;
}
