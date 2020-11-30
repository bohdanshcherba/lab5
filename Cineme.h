
#include "Movie.h"


class Cinema
{
private:
    vector<Movie> movies;
    string name;
    
    int seats;

public:
    void printCinema()
    {
        cout << "Cinema: " << name << ";" << endl
             << endl;
    }
    Cinema(string tmpName, int tmpSeats)
    {
        name = tmpName;

        seats = tmpSeats;
    }

    void addNewMovieToCinema(Movie movie)
    {
        movies.push_back(movie);
    }

    void filterMovieByGenre(type genreFilter)
    {
        for (int i = 0; i < movies.size(); i++)
        {
            if (movies.at(i).getGenre() == genreFilter)
            {
                movies.at(i).print();
            }
        }
    }
    
    void printAllMovies()
    {
        for (int i = 0; i < movies.size(); i++)
        {
            movies.at(i).print();
        }

        cout << "Count of movies : " << movies.size() << endl;
    }

    void sortMoviesByRank()
    {
        Movie entry;
        for (int i = 0; i < movies.size(); i++)
        {
            for (int j = 0; j < movies.size() - i - 1; j++)
            {
                if (movies.at(j).getRanking() > movies.at(j + 1).getRanking())
                {
                    entry = movies.at(j);
                    movies.at(j) = movies.at(j + 1);
                    movies.at(j + 1) = entry;
                }
            }
        }
    }
};



tm MakeDate(int day, int month, int year)
{
    tm date;
    date.tm_mday = day;
    date.tm_mon = month;
    date.tm_year = year;
    return date;
}

class Entry
{
public:
    tm date;
    string name;

public:
    Entry() {}
    Entry(string name, tm date) : name(name), date(date) {}
};


bool CompareDates(tm d1, tm d2)
{
    if (d1.tm_year < d2.tm_year)
        return true;
    if (d1.tm_year == d2.tm_year && d1.tm_mon < d2.tm_mon)
        return true;
    if (d1.tm_year == d2.tm_year && d1.tm_mon == d2.tm_mon && d1.tm_mday < d2.tm_mday)

        return true;
    return false;
}
void Sort(Entry* arr, int len){
    Entry entry;
    for (int i = 0;i<len-1;i++){
        for(int j=0; j<len-i-1;j++ ){
            if(!CompareDates(arr[j].date, arr[j+1].date)){
                entry = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = entry;
            }
        }
    }

}