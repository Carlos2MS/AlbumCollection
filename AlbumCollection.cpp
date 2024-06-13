#include "AlbumCollection.h"
#include <iostream>
using namespace std;

void AlbumCollection::InsertAlbum(string artist, string title, int year){
setAlbums.insert(Album(artist,title,year));
// inserts an album with given attributes
}

void AlbumCollection::Print(){
    auto i = setAlbums.begin();

    while (i != setAlbums.end()){
        const Album &element = *i;
        cout<< element<<endl;
        
        i++;
    }
// prints list of all albums
}

void AlbumCollection::PrintByTitleSubstring(string titleSubstring){
    auto i = setAlbums.begin();

    while (i != setAlbums.end()){
        const Album &element = *i;
        if(element.GetTitle() == titleSubstring){
            cout<< element<<endl;
        }
        i++;
    }
// prints list of all albums where title contains <titleSubstring>
}

void AlbumCollection::PrintByArtist(string artist){
    auto i = setAlbums.begin();

    while (i != setAlbums.end()) {
        const Album &element = *i;
        if(element.GetArtist() == artist){
            cout<< element<<endl;
        }
        i++;
    }
// prints list of all albums where artist = <artist>
}

void AlbumCollection::PrintByYear(int year){
    auto i = setAlbums.begin();

    while (i != setAlbums.end()){
        const Album &element = *i;
      if(element.GetYear() == year){
          cout<< element<<endl;
      }
        i++;
    }
// prints list of all albums where year = <year>
}

bool AlbumCollection::ContainsTitle(string title){
    auto i = setAlbums.begin();

      while (i != setAlbums.end()){
          const Album &element = *i;
          if (element.GetTitle() == title) {
              return true;
          }
          i++;
      }
      return false;

// returns true if collection contains an album where title = <title>
}

bool AlbumCollection::ContainsArtist(string artist){
    auto i = setAlbums.begin();

    while (i != setAlbums.end()){
        const Album &element = *i;
        if (element.GetArtist() == artist) {
            return true;
        }
        i++;
    }
    return false;
// returns true if collection contains an album where artist = <artist>
}

bool AlbumCollection::ContainsYear(int year){
    auto i = setAlbums.begin();
    while (i != setAlbums.end()){
        const Album &element = *i;
        if (element.GetYear() == year) {
            return true;
        }
        i++;
  }
  return false;
// returns true if collection contains an album where year = <year>
}

void AlbumCollection::DeleteAlbumByTitle(string titleToSearch){
    if(ContainsTitle(titleToSearch)){
        set<Album>::iterator i;

        for(i=setAlbums.begin(); i != setAlbums.end(); i++){
            const Album element = *i; //Add const otherwise the iteratior stop cuz the set change it
            if(element.GetTitle() == titleToSearch){
                setAlbums.erase(i);
                return;
            }
        }
    }
    else{
        cout<<"No album found!"<<endl;
    }
    
// removes the FIRST album where title = <title> from the collection
// if no such album is found, prints "No album found!" (without the quotes) to standard output.
}

void AlbumCollection::DeleteAlbumsByArtist(string artistToSearch){
    if(ContainsArtist(artistToSearch)){
        set<Album>::iterator i;
        i=setAlbums.begin();

        while(i != setAlbums.end()){
            const Album element = *i; //Add const otherwise the iteratior stop cuz the set change it
            if(element.GetArtist() == artistToSearch){
                i = setAlbums.erase(i);
            }
            else{
                i++;
            }
        }
    }
    else{
        cout<<"No album found!"<<endl;
    }
// removes ALL albums from collection where artist = <artist>
// if no such album is found, prints "No album found!" (without the quotes) to standard output.
}

int AlbumCollection::GetNumberAlbums(){
    return setAlbums.size();
// returns the number of albums stored in the collection
}
