#include <iostream>
#include "vector"
#include "map"
#include "algorithm"
using namespace std;
class new_class{
double x,y;
public:
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
    new_class(double x, double y) : x(x), y(y) {}
};
int main() {
    new_class A1(843.76, 0);
    new_class A2(170.82, 843.76);
    new_class A3(1014.52, 0);
    new_class A4(2212.01, 1);
    new_class A5(1720.3, 2734.9);
    vector<new_class> Al;
    Al.push_back(A1);
    Al.push_back(A2);
    Al.push_back(A3);
    Al.push_back(A4);
    Al.push_back(A5);
   /* map<double, double> M;
   for (auto it: Al) {
        M.emplace(it.getX(),it.getY());
    }
    cout << endl;
    for (auto& it: M) {
        cout << it.first <<" : "<< it.second<<endl;
    }*/

    map<pair int,pair<double,double>> m1;
    for (auto it: Al){
        m1.emplace(it, );
    }
    //for (auto& x: m1) {
     //   cout<<x.first<<x.second.first<<x.second.second;
    //}
}
