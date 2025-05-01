#include "Stronghold.h"

using namespace std;

Leadership::Leadership(string name) : kingName(name), isStable(true) {}

void Leadership::displayLeadership() const {
    cout << "\n     Leadership Status " << endl;
    cout << "Ruler: " << kingName << endl;
    cout << "Stability: " << (isStable ? "Stable" : "Unstable") << endl;
}

bool Leadership::getStability() const {
    return isStable;
}