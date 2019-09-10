//Authors: 
#include <iostream>
#include <string>
using namespace std;
//using std::string;
//using std::int;
//using std::cin;
//using std::count;
//using std::endl;

int main()
{
    string Name = "Jimmy";
    string Adj = "Shy";
    int Number = 3;
    string Noun = "dogs";
    cout<< "Enter a Name: " << endl;
    cin>> Name;
    cout<<"Enter an adjective: " << endl;
    cin.ignore();
    cin>> Adj;
    cout<<"Enter a number: " << endl;
    cin>> Number;
    cout<<"Enter a noun: " << endl;
    cin.ignore();
    cin >> Noun;
    cout << "There once was a " << Name << ",they were very " << Adj << ". They had " << Number << " " << Noun << " They had a good life " << endl;
    
    return 0;
}
