//
// Created by Allan Chepkoy on 2021/05/19.
//

#include "person.h"

Person::Person(std::string first, std::string last, int arbitrary)
    : firstName(first), lastName(last), arbitraryNumber(arbitrary)
{

}

std::string Person::getName()
{
    return firstName + " " + lastName;

}