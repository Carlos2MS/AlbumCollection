#include "Album.h"
#include <iostream>
using namespace std;

Album::Album(string newArtist, string newTitle, int newYear){
    artist = newArtist;
    title = newTitle;
    year = newYear;
    displayAs = (artist + ", "+ title +" (" + to_string(year)+")");
    // getters and setters string
}

string Album::GetArtist() const{
    return artist;
}
string Album::GetTitle() const{
    return title;
}
int Album::GetYear() const{
    return year;
}

bool Album::operator==(const Album &itemToCompare) const{
    int count = 0;

    if(artist == itemToCompare.artist){
        count++;
    }
    if(title == itemToCompare.title){
        count++;
    }
    if(year == itemToCompare.year){
        count++;
    }

    if(count == 3){
        return true;
    }
    else{
        return false;
    }
// returns true if album is "equal" to itemToCompare, i.e.,
// artist, title, year are all the same
}

bool Album::operator<(const Album &itemToCompare) const{
    if(artist < itemToCompare.artist){
        return true;
    }
    else if(artist > itemToCompare.artist){
        return false;
    }
    else if(artist == itemToCompare.artist){
        if(title < itemToCompare.title){
            return true;
        }
        else if(title > itemToCompare.title){
            return false;
        }
        else if(title == itemToCompare.title){
            if(year < itemToCompare.year){
                return true;
            }
            else if(year > itemToCompare.year){
                return false;
            }
        }
    }
    return false;
}
// implemens sort order
// returns true if album is "smaller" than itemToCompare,
//i.e., // considers artist, title, and year in that order,
//i.e.,
// artist smaller - true
// artist larger - false

// artist equal - check title

// title smaller - true
// title larger - false

// title equal - check year

// year smaller - true
// otherwise - false


