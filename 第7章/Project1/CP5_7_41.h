
#ifndef CP5_7_41
#define CP5_7_41

#include <string>
#include <iostream>

class Sales_data;
std::istream& read(std::istream&, Sales_data&);
Sales_data add(const Sales_data &, const Sales_data &);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, Sales_data &item);

class Sales_data {
    friend Sales_data add(const Sales_data &, const Sales_data &);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, Sales_data &item);
public:
    Sales_data() :Sales_data(" ", 0, 0) { std::cout << "默认"; };
    Sales_data(const std::string &s) :Sales_data(s,0,0) { std::cout << "string参数"; }
    Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) { std::cout << "三参数" << std::endl; }
    Sales_data(std::istream& is):Sales_data(){ //read(is, *this);
        std::cout << "流参数"; }
    std::string isbn() const { return bookNo; };
    Sales_data&combine(const Sales_data& rhs);
private:

    std::string bookNo;
    unsigned units_sold = 0;

    double revenue = 0.0;

};
Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}


Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue << std::endl;
    return os;
}

#endif