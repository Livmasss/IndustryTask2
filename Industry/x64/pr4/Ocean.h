#ifndef INDUSTRY_OCEAN_H
#define INDUSTRY_OCEAN_H

#include <iostream>
#include <string>

using namespace std;
class Ocean {
protected:
    string name;
    double latitude;
    double longitude;
    float depth;
    long long square;
    float saltiness;

public:
    Ocean();
    Ocean(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_);

    string getName();
    double getLatitude();
    double getLongitude();
    float getDepth();
    long long getSquare();
    float getSaltiness();

    void setName(string name_);
    void setLatitude(double latitude_);
    void setLongitude(double longitude_);
    void setDepth(float depth_);
    void setSquare( long long square_);
    void setSaltiness(float saltiness_);

    friend ostream& operator<<(ostream& stream, const Ocean& ocean);
    friend istream& operator>>(istream& stream, Ocean &ocean);
};


#endif //INDUSTRY_OCEAN_H