#ifndef OCG_TEST_HPP
#define OCG_TEST_HPP
/*
* ===================================================================================
* SOURCE_FILE: ocg_wrapper.cpp
* TESTING__HEADER_FILE : ocg_wrapper.hpp
* ===================================================================================
* Copyright 2023 Aptiv, Inc., All Rights Reserved.
* Aptiv Confidential
* -----------------------------------------------------------------------------------
* ===================================================================================
*/

#include <gtest/gtest.h>
#include "mock_ocg.hpp"
#include "ocg_wrapper.h"

// Define a test fixture for FbkWrapper
class OcgWrapperTest : public testing::Test{
public:

    // Constructor for the test fixture
    OcgWrapperTest(){
        std::cout << "Constructor called\n";
    }
    
    // Destructor for the test fixture
    virtual ~OcgWrapperTest(){
        std::cout << "Destructor called\n";
    }

    // Setup function called before each test case
    void SetUp() override{
        std::cout << "Setup called\n";
    }
    
    // Teardown function called after each test case
    void TearDown() override{
        std::cout << "Teardown called\n";
    }

    Rspp_Info_T rspp_info;
    int count = 0;
    //ocg::OCG_Inputs_T ocg_in;

};

#endif /*OCG_TEST_HPP*/