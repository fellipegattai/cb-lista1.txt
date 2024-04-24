#include<iostream>
using namespace std;

double fahrenheit(int n){  
        return (9.0/5.0) * n + 32.0;
    }

int main(){

    cout << " tabela que possui todas as conversoes de celsius para fahrenheit (de 0C ate 100C)" << endl;

    for (int cel = 0; cel <=100; cel++){
        cout << cel << "C = " << fahrenheit(cel) << "F." << endl;
    }
    return 0;
}
