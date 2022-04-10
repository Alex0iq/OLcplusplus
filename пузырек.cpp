#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[]{ -100, 2233, 34, -246, 846, 54, 3452, -6445556, 534, 8 };


    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }


}
