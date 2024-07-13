#include <iostream>
using namespace std;
int main(){
    
    int T, B, MRB;
    
    cin >> T >> B;
    MRB = B-1;
    
    int Lid = T/2;
    if (T%2==1) {
        Lid++;
        T--;
    }
    
    if ((T/2)%MRB!=0) {
        Lid = Lid + (T/2)%MRB;
    } 
    
    cout << Lid;

    return 0;
}
