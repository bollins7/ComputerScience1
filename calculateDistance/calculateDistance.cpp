//
//  calculateDistance.cpp
//  calculateDistance
//
//  Created by Christopher Collins on 3/19/24.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    
    const int tankSize = 20;
    const double townMPG = 23.5;
    const double highwayMPG = 28.9;
    
    double townDistance = tankSize * townMPG;
    double highwayDistance = tankSize * highwayMPG;
    
    std::cout << "Distance per tank of gas when driven in town: " << townDistance << " miles" << std::endl;
    std::cout << "Distance per tank of gas when driven on the highway: " << highwayDistance << " miles" << std::endl;
    
    return 0;
}
