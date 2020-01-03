#include <iostream>
#include <cmath>

using namespace std;

float formuIn(float x){
    float y = 3*(pow(x,3))+(2*2.71828)+pow(2,(2*x+1))+pow((pow(x,2)+1),0.5);
    return y;
}

int main(){
    int a;
    cout << "Enter x: "; 
    cin >> a;
    cout << "Result y = " << formuIn(a) << endl;
    return 0;
}