//
// Created by Allan Chepkoy on 2021/05/19.
//

#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int arbitraryNumber;
public:
    Person(std::string first, std::string last, int arbitrary);
    Person()=default;
    std::string getName();

};
