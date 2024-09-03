// beecrowd | 1014 (Consumption)

#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
 
    int X;
    float Y;
    
    cin >> X;
    cin >> Y;
    
    cout << fixed << setprecision(3) << X/Y << " km/l" << "\n";
 
    return 0;
}
