#include <iostream>
using namespace std;

class Box {
public:
    int l, w;
    Box(int a = 1, int b = 1) {
        l = a;
        w = b;
    }
};

int main() {
    Box b1;        
    Box b2(5);    
    Box b3(5, 8);  
    cout << b1.l << " " << b1.w << endl;
    cout << b2.l << " " << b2.w << endl;
    cout << b3.l << " " << b3.w << endl;
}