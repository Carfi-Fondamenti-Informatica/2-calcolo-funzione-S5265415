#include <iostream>
using namespace std;

int main() {
   float a,x,b,y,z;
    std::cin >> a >> x>> b>>y;
    if (x<0 && y>0){
        z=(a*x)-(b*y);
        std::cout << z;
    }if (x>=0 && y<=0) {
        z=(a*(x*x))-(b*y);
        std::cout << z;
    }else{
        z=(a*x)+(b*(y*y));
        std::cout << z;
    }
   return 0;
}
