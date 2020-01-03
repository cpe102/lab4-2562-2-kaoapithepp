#include <iostream>
#include <cmath>

using namespace std;

float findDistance(float u ,float a ,float t){
    float s = (u*t)+(0.5*a*pow(t,2));
    return s;
}

int main(){

  float veLocity,acCeleration,usedTime;
  cout << "Enter Initial Velocity: ";
  cin >> veLocity;
  cout << "Enter Acceleration: ";
  cin >> acCeleration;
  cout << "Enter Time that used: ";
  cin >> usedTime;
  cout << "The Distance that you'll get: " << findDistance(veLocity,acCeleration,usedTime) << endl;  

  return 0;
}
