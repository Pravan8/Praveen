#ifndef OAL_TEST_HPP
#define OAL_TEST_HPP

/*===================================================================================*\
* SOURCE_FILE: OAL.cpp
* TESTING_FILE : OAL_test.hpp
*====================================================================================
* Copyright 2023 Aptiv, Inc., All Rights Reserved.
* Aptiv Confidential
*------------------------------------------------------------------------------------
\*===================================================================================*/

#include <gtest/gtest.h>
#include "OAL.h"
#include "BMW_Wrapper_F360Tracker.h"
#include "f360_rot_object_log.h"
#include "OAL_mock.hpp"

// Define a test fixture for OAL
class OALTest : public testing::Test{
public:

    // Constructor for the test fixture
    OALTest() {
        std::cout << "Constructor called\n";
    }
    // Destructor for the test fixture
    virtual ~OALTest() {
        std::cout << "Destructor called\n";
    }

    // Setup function called before each test case
    void SetUp() override {
        std::cout << "Setup called\n";
        OAL_Test_Reset();
        rot_obj_info = GetROTObjectInfo();
    }

    // Teardown function called after each test case
    void TearDown() override {
        std::cout << "Teardown called\n";
    }

    ObjectlistEvtType ObjectlistEvtT;
    VSE_OUT vse_output;
    y23cw43::eth4::bmw::dass::sensors::FrontRadarPreDetectionListStruct front_radar_pre_detection_list;
    int count = 0;
    ROT_Object_List_Info_T *rot_obj_info;


};


#endif /*OAL_TEST_HPP*/