#include <iostream>
using namespace std ;
int main() {
int temp ;
cout << "what is the temp ? " ;
cin >> temp ;
if (temp>=30||temp<=0){
    cout << "it is hot outside";
}
    else {
        cout << "it is Cold outside ";
    }
    return 0;
}