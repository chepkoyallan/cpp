#include <iostream>
using std::cout;

int add(int x, int y)
{
    return x + y;
}


int main()
{   
    int total = add(2, 4);
    cout << "Hello \n" << total << '\n' << "sample \n";
    return 0;
}

