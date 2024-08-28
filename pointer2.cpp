#include <iostream>
using namespace std;

int main() {
    int a = 10;            
    float b = 2.4;         
    char c = 'a';          
    bool d = true;        
    int *aptr ;    
    float *bptr ;      
    char *cptr ;      
    bool *dptr;    
    aptr= &a;
    bptr= &b;
    cptr= &c;
    dptr= &d;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Address of c: " << (void*)cptr << endl;
    cout << "Address of d: " << &d<< endl;  

    aptr++ ;                
    bptr++ ;                
    cptr++ ;               
    dptr++ ;                
    
    cout << "Address of a after increment: " << aptr << endl;
    cout << "Address of b after increment: " << bptr << endl;
    cout << "Address of c after increment: " << (void*)cptr << endl;
    cout << "Address of d after increment: " << dptr << endl; 

    return 0;
}

/*Address of a: 0x7ffece7f387c
Address of b: 0x7ffece7f3878
Address of c: 0x7ffece7f3877
Address of d: 0x7ffece7f3876
Address of a after increment: 0x7ffece7f3880
Address of b after increment: 0x7ffece7f387c
Address of c after increment: 0x7ffece7f3878
Address of d after increment: 0x7ffece7f3877 */

