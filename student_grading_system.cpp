#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;


class Student
{
private:
    /* data */
    float English;
    float French;
    float Communications;
    float Calculus;
    float Algebra;
    
public:
    
    
    
    Student( string& Name, float& En, float& Fr, float& Commu, float& Calc, float& Alg){
            English = En;
            French  = Fr;
            Communications = Commu;
            Calculus = Calc;
            Algebra = Alg;
    }

   void getAvarage(){
        double ave = (English + French + Communications+ Calculus + Algebra)/5; 
        cout<< "Your Average Mark is "  << ave<< endl;
    

    }
   void getMin(){
         vector<double> marksList = {English,French,Communications,Calculus,Algebra};
         auto minElement = min_element(marksList.begin(), marksList.end());

    if (minElement != marksList.end()) {
        cout << "Lowest Marks: " << *minElement << endl;
    } else {
        cout << "The vector is empty." << endl;
    }

    }
    void getMax(){
        vector<double>markslist = {English,French,Communications,Calculus,Algebra};
        auto maxElement = max_element(markslist.begin(), markslist.end());

    if (maxElement != markslist.end()) {
        cout << "Highest Marks: " << *maxElement << endl;
    } else {
        cout << "The vector is empty." << endl;
    }

    }





};





int main() {
    string name;
    float English;
    float French;
    float Communications;
    float Calculus;
    float Algebra;
    
    
    cout<< "Please enter Student name\n";
    cin>> name;
    
    cout<<" Please enter English Marks\n";
    cin>> English;
    cout<<" Please enter French Marks\n";
    cin>> French;
    cout<<" Please enter Communications Marks\n";
    cin>> Communications;
    cout<<" Please enter Calculus Marks\n";
    cin>> Calculus;
    cout<<" Please enter Algebra Marks\n";
    cin>> Algebra;
   
    
    Student naming(name,English,French,Communications,Calculus,Algebra);
    naming.getAvarage();
    naming.getMax();
    naming.getMin();
    return 0;
}
