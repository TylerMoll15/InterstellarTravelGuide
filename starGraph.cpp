#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
#include "starGraph.hpp"
#include "starScraper.cpp"

using namespace std;

// string starName;
//     vector<int> starDistances;
//     int x,y,z;
//     int magnitude;

vector<star> starField::returnStarList(){

}
void starField::setStarList(vector<star> starList_){
    

}

void starField::addStar(string starName_, string starDistances_, int x_, int y_, int z_, int magnitude_){
    star *current = new star;
    current->starName = starName_;

    int idx = 0;
    while(lineParse(starDistances_, idx).length() > 0){
        cout << lineParse(starDistances_, idx) << endl;
        idx++;
    }
    cout << endl << idx << endl;
}

star starField::searchStar(){

}

bool starField::removeStar(){

}

void starField::printStarField(){

}

bool starField::starPath(){

}

bool starField::addStarWeight(){

}