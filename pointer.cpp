#include <iostream>
using namespace std;


int main() {
    int a= 10;
    int *aptr;
    aptr = &a;
    cout<<&a<<endl;
    cout<<aptr<<endl;
    
    cout<<*aptr<<endl;
    
    

    return 0;
}

/*0x7fffa6604d64
0x7fffa6604d64
10
*/
