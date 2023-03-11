#include "Bay.h"

#include <utility>

Bay::Bay() : Sea() {}
Bay::Bay(string name_, double latitude_, double longitude_, float depth_, long long square_, float saltiness_,
         string parentOceanName_, string parentSeaName_) : Sea(
                 std::move(name_), latitude_, longitude_, depth_, square_, saltiness_, std::move(parentOceanName_)
                 ) {
    seaName = std::move(parentSeaName_);
}

string Bay::getParentSeaName() { return seaName; }
void Bay::setParentSeaName(string parentSeaName) { seaName = std::move(parentSeaName); }

ostream &operator<<(ostream& stream, const Bay& bay) {
    cout << "Bay:" << endl;
    cout << "Name: " << bay.name << ";" << endl;

    cout << "Coordinates: " << abs(bay.latitude) << " ";
    if (bay.latitude >= 0) cout << "north ";
    else cout << "south ";
    cout << "latitude; " << abs(bay.longitude) << " ";
    if (bay.longitude >= 0) cout << "west ";
    else cout << "east ";
    cout << "longitude;" << endl;

    cout << "Depth: " << bay.depth << ";" << endl;
    cout << "Square: " << bay.square << ";" << endl;
    cout << "Saltiness: " << bay.saltiness << ";" << endl;

    cout << "It belongs to ocean: " << bay.oceanName << endl;
    cout << "It belongs to sea: " << bay.seaName << endl;
    return stream;
}
istream &operator>>(istream &stream, Bay &bay) {
    cout << "Bay:" << endl;

    cout << "Enter name: " << endl;
    cin >> bay.name;

    cout << "Enter latitude: " << endl;
    cin >> bay.latitude;

    cout << "Enter longitude: " << endl;
    cin >> bay.longitude;

    cout << "Enter depth: " << endl;
    cin >> bay.depth;

    cout << "Enter square: " << endl;
    cin >> bay.square;

    cout << "Enter saltiness: " << endl;
    cin >> bay.saltiness;

    cout << "Enter it's ocean name: " << endl;
    cin >> bay.oceanName;

    cout << "Enter it's sea name: " << endl;
    cin >> bay.seaName;

    return stream;
}