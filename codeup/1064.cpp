#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    printf("%d", (a<b ? a:b) < c ? (a<b ? a:b) : c);
    
    return 0;
}
