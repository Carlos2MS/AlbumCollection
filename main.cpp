#include "Album.h"
#include <iostream>
using namespace std;

int main() {
    Album album1 ("The Beatles", "Sgt Pepper's Lonely Hearts Club Band", 1967);
    Album album2 ("Jay-Z", "The Blueprint", 2001);
    
    cout << "album1 == album2 ? " << (album1 == album2) << endl;
    cout << "album1 < album2 ? " << (album1 < album2) << endl; cout
    << "album1 > album2 ? " << (album2 < album1) << endl;
    return 0;
}