#include <fstream>
#include <iostream>
#include <string>
#include <math.h>
#include "starScraper.hpp"



using namespace std;


//takes each line from StarData, and separates each line into individual data "pieces" given each line of the CSV file and the desired index of the line
string lineParse(string eachLine, int lineIndex){
    string eachData;
    int commaCount = 0;
        for(int i = 0; i < eachLine.length(); i++){
            if(eachLine[i] != ','){
                eachData+= eachLine[i];
            }
            else if (eachLine[i] == ','){
                commaCount++;
                if(commaCount == lineIndex + 1 && eachData.length() != NULL){
                    return eachData;
                }
                eachData = "";
            }
        }
        if(lineIndex == 37){
            return eachData;
        }
        return "";
}

// int main(){
//     ifstream fileInput;
//     ifstream fileInput2;
//     ofstream filteredData("StarNames.txt");
//     fileInput.open("StarData.txt"); // Index 6 -> Star Names, index 13 -> magnitude, index 17,18,19 -> x,y,z coords in cartesian equatorial coordinates relative to Earth's poles
//     fileInput2.open("StarData.txt");
//     string starLine;
//     string starLine2;
//     int printCount = 0;
//     int count = 0;
//     int count2 = 0;
//     double dist;

//     string starNameProper;
//     string magnitude;
//     string x,y,z; //xyz of MAIN star
//     string xx,yy,zz; //xyz of sub star
//     string subname;
//     while(getline(fileInput, starLine)){
//         starNameProper = lineParse(starLine, 6);
//         x = lineParse(starLine, 17);
//         y = lineParse(starLine, 18);
//         z = lineParse(starLine, 19);
//         if(starNameProper.length() > 1 && count > 0){
//             cout << stof(x) << ',' << stof(y) << ',' << stof(z) << "  Distances from " << starNameProper << ": " << endl;
//             filteredData << starNameProper << ',';
//             fileInput2.close();
//             fileInput2.open("StarData.txt");
//             while(getline(fileInput2, starLine2)){
//                 //grabbing xyz for substar
//                 xx = lineParse(starLine2, 17);
//                 yy = lineParse(starLine2, 18);
//                 zz = lineParse(starLine2, 19);
//                 subname = lineParse(starLine2, 6);
//                 if(count2 > 0 && subname.length() > 1){
//                     dist = pow((pow(stod(xx) - stod(x), 2) + pow(stod(yy) - stod(y), 2) + pow(stod(zz) - stod(z), 2)), 0.5); //calculates distance between 2 stars with 3d pythagorean theorem
//                     cout << "     " << subname << " --> " << dist * 3.262 << endl; //prints sub star with distance to other stars in lightyears
//                     filteredData << dist * 3.262 << ',';
//                 }
//                 count2++;
//             }
//             count2 = 0;
//             filteredData << endl;
//             cout << endl;
//             fileInput2.close();
//         }
//         count++; 
//     }
//     count = 0;


// }