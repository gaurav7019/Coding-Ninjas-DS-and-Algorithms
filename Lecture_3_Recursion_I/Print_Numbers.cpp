// Main File
#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int n;
    cin >> n;
  
    print(n);
}

//Solution part
void print(int n){
    int i=1;
	cout << i <<endl;
    cout << ++i <<endl;
    if(i==n){
        exit;
    }
}     

