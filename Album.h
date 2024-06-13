#ifndef ALBUM_H
#define ALBUM_H
#include <iostream>
using namespace std;
class Album {
    string artist;
    string title; 
    int year; 
    string displayAs;

public:
Album(string newArtist, string newTitle, int newYear);
string GetArtist() const;
string GetTitle() const;
int GetYear() const;
bool operator==(const Album &itemToCompare) const;
bool operator<(const Album &itemToCompare) const; 
operator const char *() const{
    return displayAs.c_str();
}
};
#endif //CONTACT_H