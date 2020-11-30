#include "Area.h"
class City{
    private:
    vector<Area> areas;
    string nameCity;
    public:
    void printCity(){
        cout << "City:" << nameCity << endl;
    }

    City(string tmpName){
        nameCity = tmpName;
    }

    void addArea(Area  area){
        areas.push_back(area);
    }

    void printAllArea()
    {
        for (int i = 0; i < areas.size(); i++)
        {
            cout << i+1 <<".";
            areas.at(i).printArea();
        }

        cout << "Count of area: " << areas.size() << endl;
    }

};



class Contry{
    private:
    vector<City> cities;
    string name;
    public:
    Contry(string tmpName){
        name = tmpName;
    }
    void addCity(City name){
        cities.push_back(name);
    }

    void printAllCity()
    {
        for (int i = 0; i < cities.size(); i++)
        {
            cout << i+1 <<".";
            cities.at(i).printCity();
        }

        cout << "Count of City: " << cities.size() << endl;
    }

};