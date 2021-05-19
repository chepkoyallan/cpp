//
// Created by Allan Chepkoy on 2021/05/19.
//

#include "person/person.h"
#include "iostream"
using std::cout;

int main(){
    Person p1("Allan", "chepkoy", 123);
    Person p2;
    std::string name = p1.getName();
    cout << name;

    return 0;
}