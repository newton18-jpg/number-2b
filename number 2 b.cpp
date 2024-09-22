#include <iostream>

int findThirdAngle(int angle1, int angle2) {
    // Check if the input angles are valid
    if (angle1 <= 0 || angle2 <= 0 || angle1 + angle2 >= 180) {
        std::cerr << "Invalid angles. The sum of the first two angles must be less than 180 and both angles must be positive." << std::endl;
        return -1; // Return -1 to indicate an error
    }
    
    // Calculate the third angle
    int thirdAngle = 180 - (angle1 + angle2);
    return thirdAngle;
}

int main() {
    int angle1, angle2;

    // Input the two angles
    std::cout << "Enter the first angle: ";
    std::cin >> angle1;

    std::cout << "Enter the second angle: ";
    std::cin >> angle2;

    // Find the third angle
    int thirdAngle = findThirdAngle(angle1, angle2);

    // Output the result if valid
    if (thirdAngle != -1) {
        std::cout << "The third angle is: " << thirdAngle << " degrees." << std::endl;
    }

    return 0;
}
