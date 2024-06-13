#ifndef ALBUMCOLLECTION_H
#define ALBUMCOLLECTION_H
#include "Album.h"
#include <set>

class AlbumCollection {
    set<Album> setAlbums;
// set of albums in the collection
//
// It is not intended that the same album is stored multiple times.
// If someone tries that anyway, the behaviour of AlbumCollection
// is undefined. (We will not have such cases in our tests.)
public:
    void InsertAlbum(string artist, string title, int year);
    void Print();
    void PrintByTitleSubstring(string titleSubstring);
    void PrintByArtist(string artist);
    void PrintByYear(int year);
    bool ContainsTitle(string title);
    bool ContainsArtist(string artist);
    bool ContainsYear(int year);
    void DeleteAlbumByTitle(string titleToSearch);
    void DeleteAlbumsByArtist(string artistToSearch);
    int GetNumberAlbums();
};
#endif // ALBUMCOLLECTION_H
