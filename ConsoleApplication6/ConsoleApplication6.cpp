#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <ctime>
#include <string>
#include <algorithm>
#include <fstream>
#include "TextReader.h"

using namespace std;

template<class A>
void Swap(A* a, A* b) {
    A *c = *a;
    *a = *b;
    *b = *c;
}
template<class A>
void SortPointers(vector<A*>& Q) {
    int cnt = 0;
    while (!cnt) {
        cnt = 0;
        for (int i = 0; i < Q.size() - 1; i++) {
            if (*Q[i] > *Q[i + 1]) {
                cnt++;
                swap(Q[i], Q[i + 1]);
            }
        }
    }
}

int main()
{
    TextReader txtrdr("text.txt");
    txtrdr.TimerVowelCounter(VowelCountIfFind);
    txtrdr.TimerVowelCounter(VowelCountIfFor);
    txtrdr.TimerVowelCounter(VowelForFind);
    txtrdr.TimerVowelCounter(VowelForFor);
}

