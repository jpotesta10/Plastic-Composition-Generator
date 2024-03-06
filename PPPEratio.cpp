#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to suggest PP to PE ratio based on user inputs
void suggestMaterialRatio(int squishy, int hard, int soft, int elastic) {
    // Simplified logic to calculate ratio
    // Higher squishiness and softness favor PE, while higher hardness and elasticity favor PP
    int total = squishy + soft - hard - elastic;

    string ratio;
    if (total > 0) {
        // More towards PE
        ratio = "Low PP to High PE";
    } else if (total < 0) {
        // More towards PP
        ratio = "High PP to Low PE";
    } else {
        // Equal mix
        ratio = "Equal PP and PE";
    }

    cout << "Suggested material ratio: " << ratio << endl;
}

int main() {
    int squishy, hard, soft, elastic;

    cout << "Rate the desired squishiness (0-10): ";
    cin >> squishy;

    cout << "Rate the desired hardness (0-10): ";
    cin >> hard;

    cout << "Rate the desired softness (0-10): ";
    cin >> soft;

    cout << "Rate the desired elasticity (0-10): ";
    cin >> elastic;

    suggestMaterialRatio(squishy, hard, soft, elastic);

    return 0;
}
