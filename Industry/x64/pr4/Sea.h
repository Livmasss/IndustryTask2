#ifndef INDUSTRY_SEA_H
#define INDUSTRY_SEA_H

#include "Ocean.h"
#include <iostream>
#include <string>

using namespace std;
class Sea : public Ocean {
protected:
    string name;
    double latitude;
    double longitude;
    float depth;
    long long square;
    float saltiness;
    string oceanName;
public:
    Sea();
    Sea(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_, string oceanName_ = "");

    string getParentOceanName();
    void setParentOceanName(string oceanParentName_);

    friend ostream &operator<<(ostream &stream, const Sea& sea);
    friend istream &operator>>(istream &stream, Sea &sea);
};


#endif //INDUSTRY_SEA_H
