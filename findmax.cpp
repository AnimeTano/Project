#include <iostream>
#include <vector>


auto find(const std::vector<int>& vc){
    int mx = 0;

    for (short i = 0; i < vc.size(); i++) {
        if (vc[i] > mx) mx = vc[i];
    }

    return mx;
}


int main() {
    std::vector<int> vect;
    int n = 0;
    std::cout << "Enter size:";
    std::cin >> n;

    for (short i = 0; i < n; i++){
        std::cin >> vect[i];
    }
    std::cout << "Max element:" << find(vect);

    return 0;
}
