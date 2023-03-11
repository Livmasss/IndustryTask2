#ifndef INDUSTRY_BAY_H
#define INDUSTRY_BAY_H

#include "Ocean.h"
#include "Sea.h"
#include <iostream>
#include <string>

using namespace std;
class Bay : public Sea {
protected:
    string seaName;
public:
    Bay();
    Bay(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_, string parentOcean_ = "", string parentSea_ = "");

    string getParentSeaName();
    void setParentSeaName(string parentSeaName);

    friend ostream &operator<<(ostream &stream, const Bay& bay);
    friend istream &operator>>(istream &stream, Bay &bay);
};


#endif //INDUSTRY_BAY_H