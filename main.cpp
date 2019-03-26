/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: alulab14
 *
 * Created on 26 de marzo de 2019, 03:32 PM
 */

#include <cstdlib>
#include <iostream>
#define MAX 100
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a[MAX];
    int b = 1;
    for(int i=0;i<MAX;i++){
        if((b % 3 == 0) and (b % 5 == 0)){
            cout<<"FizzBuzz"<<endl;
        }
        else if(b%3 == 0){
            cout<<"Fizz"<<endl;
        } 
        else if(b%5 == 0){
            cout<<"Buzz"<<endl;
        }
        b++;
    }
    
    
    return 0;
}

