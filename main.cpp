//
//  main.cpp
//  3.1.Teilaufgabe4
//
//  Created by Sebastian Groß on 07.06.22.
//

#include <iostream>
using namespace std;

int n = 5;

int main(int argc, const char * argv[]) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2*n-1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                    cout << "X";
                
            } else {
                cout << " ";
                }
            }
        cout << endl;
        }
      
    }
