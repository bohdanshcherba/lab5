
#include "Cineme.h"


class Area{
    private:
    vector<Cinema> cinema;
    string nameArea;
    
    public:
    Area(string tmpNameArea){
        nameArea = tmpNameArea;
    }

    void addCinema(Cinema name){
        cinema.push_back(name);
    }

    void printArea(){
        cout<<"Area:" << nameArea<<endl; 

    }

    void printAllCinema()
    {
        for (int i = 0; i < cinema.size(); i++)
        {
            cout << i+1 <<".";
            cinema.at(i).printCinema();
        }

        cout << "Count of Cinema: " << cinema.size() << endl;
    }
};