#include "City.h"
using namespace std;
const int N = 4; // use in array for sorting , changing if changed number of films.

int main(){
    system("cls");

    Contry ukraine("Ukraine");
    City lviv("Lviv.");
    City kyiv("Kyiv");
    City odessa("Odessa");

    ukraine.addCity(lviv);
    ukraine.addCity(kyiv);
    ukraine.addCity(odessa);

    Area suhiv("Suhiv");
    Area zaliznuchnuyu("Zaliznuchnuyu");
    Area shevchankivskiy("Shevchankivskiy");
    Area kyivskiy("Kyivskiy");


    lviv.addArea(suhiv);
    lviv.addArea(zaliznuchnuyu);
    kyiv.addArea(shevchankivskiy);
    odessa.addArea(kyivskiy); 

    suhiv.addCinema(Cinema("MultiPlex",230));
    kyivskiy.addCinema(Cinema("MultiPlex",230));

    zaliznuchnuyu.addCinema(Cinema("PlanetCinema",300));
    shevchankivskiy.addCinema(Cinema("PlanetCinema",300));

    Cinema multiplex("MultiPlex",230);
    Cinema planetcinema("PlanetCinema",300);
  
    multiplex.addNewMovieToCinema(Movie(121, 6.7, "\"Shaft\"", 14, 6, 2019, 01, 13.69, "Middle generation Shaft looks good roaring around in his souped-up Monte Carlo SS.s It's too bad the characters as a whole didn't have a better vehicle.", ACTION));
    multiplex.addNewMovieToCinema(Movie(122, 5.2, "\"Hubie Halloween\"", 7, 9, 2020, 02, 11.29, "After swapping bodies with a deranged serial killer, a young girl in high school discovers she has less than 24 hours before the change becomes permanent.", COMEDY));

    planetcinema.addNewMovieToCinema(Movie(123, 6.2, "\"Chemical Hearts\"", 21, 8, 2020, 03, 13.50, "Diagnosed with a mental illness halfway through his senior year of high school, a witty, introspective teen struggles to keep it a secret while falling in love with a brilliant classmate who inspires him to not be defined by his condition.",DRAMA));
    planetcinema.addNewMovieToCinema(Movie(124, 5.6, "\"Dolittle\"", 9, 1, 2020, 4, 14.20, "After his wife's death, Dr. John Dolittle (Robert Downey, Jr.) decided to hide from the world with his beloved animals. But he has to take a journey to a mysterious island to find a healing tree, which is the only medicine that can help the dying Queen Victoria (Jessie Buckley) in Buckingham Palace.",FANTASY));

    int check;
    bool exit = false;
    while (!exit){

        cout << "Chose your location for check cinema = 11"<<endl;
        cout << "Sort all film for date = 12"<<endl;
        cout << "Sort all film for ganre = 13" << endl<< ":";
        cin >> check;

    switch (check)
    {
    case LOCATION:
        {
                ukraine.printAllCity();
                    cout<<endl;
            
            int name;
             cout<<"Chose Sity:  ";
            cin>>name;
            if(name == 1){
        lviv.printAllArea();
            int name1;
            cout<<"Chose Area:  ";
            cin>>name1;

            if(name1 == 1){
                suhiv.printAllCinema();
                multiplex.printAllMovies();
            }
            else if (name == 2){
                zaliznuchnuyu.printAllCinema();
                planetcinema.printAllMovies();
            }  
    }  
    else if(name == 2){
        kyiv.printAllArea();
            int name2;
            cout<<"Chose Area:  ";
            cin>>name2;
            if(name2 = 2){
                shevchankivskiy.printAllCinema();
                planetcinema.printAllMovies();
            }
    }       
    else if (name == 3){
        odessa.printAllArea();
            int name3;
            cout<<"Chose Area:  ";
            cin>>name3;
            if(name3 = 2){
                kyivskiy.printAllCinema();
                multiplex.printAllMovies();
            } 
    }
        }
        break;
    case SORTALLMOVIE:{          
       Entry* array = new Entry[N];
                array[0]=Entry("\"Shaft\"          ",MakeDate(14,6,2019));
                array[1]=Entry("\"Hubie Halloween\"",MakeDate(7,9,2020));
                array[2]=Entry("\"Chemical Hearts\"",MakeDate(21,8,2020));
                array[3]=Entry("\"Dolittle\"       ",MakeDate(9,1,2020));
                    Sort(array,N);
                for(int i=0;i<N;i++)
                 cout << array[i].name << "     |  " << array[i].date.tm_mday << "." << array[i].date.tm_mon<< "."<<array[i].date.tm_year<<endl;

                delete [] array;
               
                }   
    break;
    case SORTGENRE: {
        cout << "enter genre" << endl << "1.Action | 2.Comedy | 3.Drama | 4.Fantasy "<<endl;
        int err;
        cin>> err;
        cout << endl;

        if(err == 1){
        multiplex.filterMovieByGenre(ACTION);
        planetcinema.filterMovieByGenre(ACTION);
        }
        else if(err == 2){
        multiplex.filterMovieByGenre(COMEDY);
        planetcinema.filterMovieByGenre(COMEDY);
        }
        else if(err==3){
        multiplex.filterMovieByGenre(DRAMA);
        planetcinema.filterMovieByGenre(DRAMA);
        }
        else if(err==4){
        multiplex.filterMovieByGenre(FANTASY);
        planetcinema.filterMovieByGenre(FANTASY);
        }
    }
    break;
    
    }
    cout << "Again 0 ; Exit 1" << endl;
         cin >> exit;
    }
    return 0;
}