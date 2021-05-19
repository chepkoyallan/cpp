#include <iostream>
using std::cout;

double add(double x, double y)
{
    return x + y;
}

double add(double a, double b, double c)
{
    return a + b + c;

}


int main()
{   
    double total = add(2, 4);
    cout << "Hello \n" << total << '\n' << "sample \n";


    double totalofthree = add(5, 7, 8);
    cout << "The total of three is \n" << totalofthree <<"\n";

    return 0;

}

