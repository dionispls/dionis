#include <iostream>
#include <vector>


int main(){
    std::vector<int> v;
    int n = 50;
    for (int i = 0; i < n; i++)
        v.push_back(rand());
    int i = 1;
    while (i < n){
        int j = i;
    while ((j > 0) && (v[j-1] > v[j])){
        std::swap(v[j], v[j-1]);
        j = j - 1;
    }
    i++;
    }
return 0;
}
