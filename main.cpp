#include <iostream>
#include <string>
#include <iomanip> // steprecision, left , right , setw, fixed , show point
using namespace std;
/* 
Author: Karim Boutine
Purpose: This program will ask you to enter information about 3 cities
date : 10/05/2022
*/



int main() {
  
   string first_city;
   string population;
   string answer1 ;
   float growth ;
   string second_city ;
   string answer2 ;
   string population2 ;
   float growth2 ;
   string third_city ;
   string answer3 ;
   string population3 ;
   string growth3 ;
   

  cout << "This program will ask you to enter information about 3 cities" << endl;
  cout << "Be sure to enter the exactly type of data requested." << endl;
  
  cout << "What is the first city ? " ;
  getline(cin, first_city);
 
  cout << "Have you visited" << " " << first_city << "(Y or N) ?" << endl;
  cin >> answer1 ;
  
  cout << "What is the population of" << " " << first_city << " ? " << endl;
  cin >> population ;
  
  cout << "What is the percent growth of" << " " << first_city << " ? " << endl;
  cin >> growth;
  cin.ignore(80, '\n');
 
  cout << "What is the second city ? " << endl;
  getline(cin, second_city);
  
  cout << "Have you visited " << second_city << "(Y or N) ? " << endl;
  cin >> answer2 ;
  
  cout << "What is the population of" << " " << second_city << "?" << endl ;
  cin >> population2;
  
  cout << "What is the percent growth of" << second_city << " ? " << endl ;
  cin >> growth2;
  cin.ignore(80, '\n');
   
  cout << "What is the third city ? " << endl ;
  cin >> third_city;
  
  cout << "Have you visited" << " " << third_city << "(Y or N) ?" << endl;
  cin >> answer3 ;
  
  cout << "What is the population of" << " " << third_city << " ? " << endl;
  cin >> population3 ;
  
  cout << "What is the percent growth of "  << third_city << " ? " << endl;
  cin >> growth3;
    cout << endl;
  cout << "\tCITY     VISITED   POPULATION    GROWTH \n\n";
  cout << setprecision(2) << fixed << showpoint ;
  cout << left << setw(9) << first_city << setw(10) << answer1 << right << setw(5) << population << setw(10) << growth << endl;
  cout << left << setw(9) << second_city << setw(10) << answer2 << right << setw(5) << population2 << setw(10) << growth2 << endl ;
  cout << left << setw(9) << third_city << setw(10) << answer3 << right << setw(5) << population3 << setw(10) << growth3 << endl;


  
 return 0 ;
  
  }