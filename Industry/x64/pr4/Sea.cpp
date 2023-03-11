#include "Sea.h"

#include <utility>

Sea::Sea() : Ocean() {}
Sea::Sea(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_,
         string oceanName_) : Ocean(std::move(name_), latitude_, longitude_, depth_, square_, saltiness_) {
    oceanName = std::move(oceanName_);
}

string Sea::getParentOceanName() { return oceanName; }
void Sea::setParentOceanName(string oceanParentName_) { oceanName = std::move(oceanParentName_); }

ostream &operator<<(ostream &stream, const Sea& sea) {
    cout << "Sea:" << endl;
    cout << "Name: " << sea.name << ";" << endl;

    cout << "Coordinates: " << abs(sea.latitude) << " ";
    if (sea.latitude >= 0) cout << "north ";
    else cout << "south ";
    cout << "latitude; " << abs(sea.longitude) << " ";
    if (sea.longitude >= 0) cout << "west ";
    else cout << "east ";
    cout << "longitude;" << endl;

    cout << "Depth: " << sea.depth << ";" << endl;
    cout << "Square: " << sea.square << ";" << endl;
    cout << "Saltiness: " << sea.saltiness << ";" << endl;

    cout << "It belongs to ocean:" << sea.oceanName << endl;
    return stream;
}
istream &operator>>(istream &stream, Sea &sea) {
    cout << "Sea:" << endl;

    cout << "Enter name: " << endl;
    cin >> sea.name;

    cout << "Enter latitude: " << endl;
    cin >> sea.latitude;

    cout << "Enter longitude: " << endl;
    cin >> sea.longitude;

    cout << "Enter depth: " << endl;
    cin >> sea.depth;

    cout << "Enter square: " << endl;
    cin >> sea.square;

    cout << "Enter saltiness: " << endl;
    cin >> sea.saltiness;

    cout << "Enter it's ocean name: " << endl;
    cin >> sea.oceanName;
    return stream;
}