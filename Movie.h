#include "Genre.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
class Movie{
    private:
        type genre;
        string title;
        float id;
        float ranking;
        int day;
        int month;
        int year;
        int characterNumber;

        string comment;

    public:
        float ticketPrice;
        Movie(){
            
        };
        Movie(float a, float b, string c, int d, int e, int f, int g, float h, string com, type tmpGenre)
        {
            id = a;
            ranking = b;
            title = c;
            day = d;
            month = e;
            year = f;
            characterNumber = g;
            ticketPrice = h;
            comment = com;
            genre = tmpGenre;
        }
        ~Movie()
        {
        }

        type getGenre()
        {
            return genre;
        }
        
        float getRanking(){
            return ranking;
        }

        void print()
        {

            cout << "id: " << id << endl;
            cout << "Rankink:  " << ranking << endl;
            cout << "Title: " << title << endl;
            cout << "Release Date: " << day << "." << month << "." << year << endl;
            cout << "Character Number: " << characterNumber << endl;
            cout << "Ticket price: $" << ticketPrice << endl;
            cout << "Comment: " << comment << endl;
            cout << "Genre: " << genre << endl << endl;
        }
};