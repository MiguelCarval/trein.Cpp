#include <iostream>
#include <string>
using namespace std;


int valores[5] ;


int main(){

cout << "Digite 5 valores: \n";

for(int i = 0; i < 5; i++){
    cin >> valores[i];
}


cout << "Os valores digitados foram: \n";
for (int i = 0; i < 5 ; i++){

   cout <<  valores[i] << endl;
}



return 0;
}