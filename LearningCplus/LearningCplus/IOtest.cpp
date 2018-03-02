//
//  IOtest.cpp
//  LearningCplus
//
//  Created by Dylan Oldfield on 2/3/18.
//  Copyright © 2018 Dylan Oldfield. All rights reserved.
//

#include <stdio.h>
#include<iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 =0 , v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of the numbers " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    
    return 0;
}

