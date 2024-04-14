#ifndef MOCK_OCG_IFACE
#define MOCK_OCG_IFACE

/*
* =========================================================================
*  FILE: BMW_Mock_iface_ocg.cpp
* =========================================================================
* Copyright © 2023 Aptiv. All rights reserved.
* Confidential – Restricted Aptiv information. Do not disclose.
* -------------------------------------------------------------------------
*  DESCRIPTION:
*    BMW Mock ocg iface
* ========================================================================
*/

#include <iostream>
#include "ocg_wrapper.h"

bool ocg_initilize_function_called = false;
bool ocg_step_function_called = false;

namespace ocg
{
    void Occupancy_Grid::initialize(const OCG_Inputs_T &input){
        std::cout<<"Occupancy_Grid::initialize called"<<std::endl;
        ocg_initilize_function_called = true;
    }
    void Occupancy_Grid::step(double timestamp, const OCG_Inputs_T &input){
        std::cout<<"Occupancy_Grid::step called"<<std::endl;
        ocg_step_function_called = true;
   }
}


// Function to reset test-related data
void Ocg_Test_Reset(){
    // Reset the tracking variable
    ocg_initilize_function_called = false;
    ocg_step_function_called = false;   
}


#endif /*MOCK_OCG_IFACE*/