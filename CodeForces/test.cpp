#include <iostream>

bool areRulesFollowed(int n, int a[]) {
    bool occupied[101] = {false}; // Assuming maximum n is 100, adjust as needed

    // Mark the first seat as occupied
    occupied[a[0]] = true;

    for (int i = 1; i < n; ++i) {
        int seat = a[i];
        
        // Check if this seat has at least one occupied neighbor
        if (!(occupied[seat - 1] || occupied[seat + 1])) {
            return false; // The rules are not followed
        }
        
        // Mark the seat as occupied
        occupied[seat] = true;
    }

    return true; // All passengers followed the rules
}

int main() {
    int tc;
    std::cin>>tc;
    while(tc--){
    int n;
    std::cin >> n;
    int a[100]; // Assuming maximum n is 100, adjust as needed
    
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    
    if (areRulesFollowed(n, a)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    }
    return 0;
}
