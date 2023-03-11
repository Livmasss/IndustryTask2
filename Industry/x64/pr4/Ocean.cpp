#include "Ocean.h"


Ocean::Ocean() {}
Ocean::Ocean(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_) {
    name = std::move(name_);
    latitude = latitude_;
    longitude = longitude_;
    depth = depth_;
    square = square_;
    saltiness = saltiness_;
}

string Ocean::getName() { return this->name; }
double Ocean::getLatitude() { return this->latitude; }
double Ocean::getLongitude() {return this->longitude;}
float Ocean::getDepth() {return this->depth;}
long long Ocean::getSquare() {return this->square;}
float Ocean::getSaltiness() {return saltiness;}

void Ocean::setName(string name_) { name = std::move(name_);}
void Ocean::setLatitude(double latitude_) {latitude = latitude_;}
void Ocean::setLongitude(double longitude_) {longitude = longitude_;}
void Ocean::setDepth(float depth_) {depth = depth_;}
void Ocean::setSquare( long long square_) {square = square_;}
void Ocean::setSaltiness(float saltiness_) {saltiness = saltiness_;}

ostream& operator<<(ostream& stream, const Ocean& ocean) {
    cout << "Ocean:" << endl;
    cout << "Name: " << ocean.name << ";" << endl;

    cout << "Coordinates: " << abs(ocean.latitude) << " ";
    if (ocean.latitude >= 0) cout << "north ";
    else cout << "south ";
    cout << "latitude; " << abs(ocean.longitude) << " ";
    if (ocean.longitude >= 0) cout << "west ";
    else cout << "east ";
    cout << "longitude;" << endl;

    cout << "Depth: " << ocean.depth << ";" << endl;
    cout << "Square: " << ocean.square << ";" << endl;
    cout << "Saltiness: " << ocean.saltiness << ";" << endl;

    return stream;
}
istream& operator>>(istream &stream, Ocean &ocean) {
    cout << "Ocean:" << endl;

    cout << "Enter name: " << endl;
    cin >> ocean.name;

    cout << "Enter latitude: " << endl;
    cin >> ocean.latitude;

    cout << "Enter longitude: " << endl;
    cin >> ocean.longitude;

    cout << "Enter depth: " << endl;
    cin >> ocean.depth;

    cout << "Enter square: " << endl;
    cin >> ocean.square;

    cout << "Enter saltiness: " << endl;
    cin >> ocean.saltiness;

    return stream;
}