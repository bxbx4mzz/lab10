//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    cout << setprecision(3);
    int count = 0;
    float sum , sum1 = 0 , sum2 = 0;
    string textline ;
    ifstream source("score.txt");
    while(getline(source,textline)){
        sum1 += atof(textline.c_str());
        sum = pow(atof(textline.c_str()),2) ;
        sum2 += sum;
        count++ ;
    }

    float mean,deviation;
    mean = sum1/count; 
    deviation = sqrt(((double(1)/count * (sum2)) - pow(mean,2))) ;

    cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << deviation ;

}