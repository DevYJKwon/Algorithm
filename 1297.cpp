#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main(){
    int diagonal, height, width;
    double alpha;
    cin >> diagonal >> height >> width;
    alpha=sqrt((double)(diagonal*diagonal)/((height*height)+(width*width)));
    cout <<alpha<<endl;
    height=floor(height*alpha);
    width=floor(width*alpha);
    cout << height <<" "<< width <<endl;
}