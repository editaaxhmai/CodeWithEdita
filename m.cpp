//
// Created by edita on 12/25/2024.
//


#include <iostream>

using namespace std;

void CALCarray (){

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max= a[0];
    int min = a[0];
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
        sum += a[i];
    }

    int difference = max - min;
    for (int i = 0; i < n; ++i) {
        a[i] += difference;
    }

    cout << "MAX -> " << max << endl;
    cout << "MIN -> " << min << endl;
    cout << "SUM -> " << sum << endl;

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main (){

    CALCarray();
    return 0;
}