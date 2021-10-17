#pragma ONCE
#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

struct star{
    string starName;
    vector<int> starDistances;
    int x,y,z;
    int magnitude;
};

class starField{
    private:
        vector<star> starList;
    public:
        vector<star> returnStarList(); //returns the list of star nodes from the graph
        void setStarList(vector<star> starList_); //sets the graph of star nodes
        void addStar(string starName, string starDistances, int x, int y, int z, int magnitude); //adds a star to the existing vector
        star searchStar(); //returns the data from an existing star
        bool removeStar(); //removes a certain star from the vector
        void printStarField(); //prints the starField graph
        bool starPath(); //finds a path between two stars given a maximum distance in lightyears
        bool addStarWeight(); //adds a weight to the connection between two stars
};


