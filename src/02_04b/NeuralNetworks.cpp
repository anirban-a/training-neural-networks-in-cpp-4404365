// NeuralNetworks.cpp : This file contains the 'main' function. Program execution begins and ends there.//

#include "MLP.h"
using namespace std;
int main(){
    srand(time(NULL));
    rand();

    Perceptron p(2, -5);

    p.set_weights({10,10});
    
    cout<<"Gate: "<<endl;
    cout<<p.run({0,0})<<endl;
    cout<<p.run({0,1})<<endl;
    cout<<p.run({1,0})<<endl;
    cout<<p.run({1,1})<<endl;

}
