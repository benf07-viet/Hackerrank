#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int a, int b, int c){
    return a+b+c;
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
        int result = sum(a,b,c);
    cout << result;
    return 0;
}