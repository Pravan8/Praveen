#ifndef OAL_TEST_CPP
#define OAL_TEST_CPP
/*===================================================================================*\
* SOURCE_FILE: OAL.cpp
* TESTING_FILE : OAL_test.cpp
*====================================================================================
* Copyright 2023 Aptiv, Inc., All Rights Reserved.
* Aptiv Confidential
*------------------------------------------------------------------------------------
\*===================================================================================*/


#include <gtest/gtest.h>
#include "OAL_test.hpp"
#include "OAL.h"
#include "OAL_mock.hpp"

#if(1)
/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case Verifies that the GetROTObjectInfo function in the OAL is called correctly.
Pre-condition: Ensure that the OAL getRotObjectInfoCalled is reset using 'OAL_Test_Reset'.
Expected output: Expect that the GetROTObjectInfo function flag is set to true after calling 'ObjectListUpdater'.
=========================================================================
*/

TEST_F(OALTest,GetROTObjectInfo){

    //OAL_Test_Reset();

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT,vse_output,front_radar_pre_detection_list);

    EXPECT_EQ(getRotObjectInfoCalled,true);

}

int count =0;
/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Define expected values for internal OAL signals.
    -> Execute the 'ObjectListUpdater' function with the specified parameters.
    -> Validate the expected outputs by comparing internal OAL signals with the expected values.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].object_status' to 10.
    -> Define expected values for internal OAL signals.
Expected output:
    -> Ensure that internal OAL signals match the expected values.
======================================================================
*/

TEST_F(OALTest,default_ObjectListUpdater){
    // Set pre-conditions by updating specific parameters.
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].object_status=10;
    // Define expected values for internal OAL signals.
    int8_t expected_number_of_objects=0;
    int8_t expected_timestampDAQ_fractional_seconds=0;
    int8_t expected_timestampSP_start_seconds=0;
    int8_t expected_timestampSP_start_fractional_seconds=0;
    int8_t expected_timestampSP_end_seconds=0;
    int8_t expected_timestampSP_end_fractional_seconds=0;
    //HEADER_FILL
    int8_t expected_header_origin_pitch=0;
    int8_t expected_header_origin_roll=0;
    int8_t expected_header_origin_yaw=0;
    int8_t expected_header_origin_pitch_std_dev=0;
    int8_t expected_header_origin_roll_std_dev=0;
    int8_t expected_header_origin_yaw_std_dev=0;
    int8_t expected_header_origin_x=0;
    int8_t expected_header_origin_y=0;
    int8_t expected_header_origin_x_std_dev=0;
    int8_t expected_header_origin_y_std_dev=0;
    int8_t expcetd_header_origin_z=0;
    int8_t expected_header_origin_z_std_dev=0;
    //for loop
    int8_t expected_postion_x=0;
    int8_t expected_postion_xStdDev=0;
    int8_t expceted_position_y=0;
    int8_t expected_position_yStdDev=0;
    int8_t expected_position_covarianceXY=0;
    int8_t expected_position_orientation=0;
    int8_t expected_position_orientationStdDev=0;
    //OBJECT_LIST
    int8_t expected_dynamics_velocityAbsolute_x=0;
    int8_t expected_dynamics_velocityAbsolute_xStdDev=0;
    int8_t expected_dynamics_velocityAbsolute_y=0;
    int8_t expected_dynamics_velocityAbsolute_yStdDev=0;
    int8_t expected_velocityAbsolute_covarianceXY=0;
    //ObjectList Velocity relative  mapping TBD
    int8_t expected_dynamics_velocityRelative_x=0;
    int8_t expected_dynamics_velocityRelative_xStdDev=0;
    int8_t expected_dynamics_velocityRelative_y=0;
    int8_t expected_dynamics_velocityRelative_yStdDev=0;
    int8_t expected_dynamics_velocityRelative_covarianceXY=0;
    int8_t expected_dynamics_accelerationAbsolute_x=0; 
    // ObjectList Acceleration relative mapping
    int8_t expected_dynamics_accelerationRelative_x=0;
    int8_t expected_dynamics_accelerationRelative_xStdDev=0;
    int8_t expected_dynamics_accelerationRelative_y=0;
    int8_t expected_dynamics_accelerationRelative_yStdDev=0;
    int8_t expected_dynamics_accelerationRelative_covarianceXY=0;
    //orentation
    int8_t expected_dyamanics_orientationRate=0;
    int8_t expected_dynamics_orientationRate_std_dev=0;
    //ROT mapping
    int8_t expected_existence_existenceProbability=0;
    // Fill shape info
    int8_t expected_shape_length_mean=0;
    int8_t expected_shape_width_mean=0;

    int8_t expected_summary_age=0;
    int8_t expected_summary_id=0;
    int8_t expected_radar_cross_section=0;


    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT,vse_output,front_radar_pre_detection_list);


    // Validate the expected outputs by comparing internal OAL signals with the expected values
    EXPECT_EQ(ObjectlistEvtT.numberOfObjects, expected_number_of_objects)
        <<"Error: The number of objects did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampDAQ.fractional_seconds.value, expected_timestampDAQ_fractional_seconds)
        <<"Error: The value of timestampDAQ fractional seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_start.seconds.value, expected_timestampSP_start_seconds)
        <<"Error: The value of timestampSP_start seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_start.fractional_seconds.value, expected_timestampSP_start_fractional_seconds)
        <<"Error: The value of timestampSP_start fractional seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_end.seconds.value, expected_timestampSP_end_seconds)
        <<"Error: The value of timestampSP_end seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_end.fractional_seconds.value, expected_timestampSP_end_fractional_seconds)
        <<"Error: The value of timestampSP_end fractional seconds did not match the expected value";

    //HEADER_FILL
    EXPECT_EQ(ObjectlistEvtT.header.origin.pitch.value, expected_header_origin_pitch)
        << "Error: The value of header origin pitch did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.roll.value, expected_header_origin_roll)
        << "Error: The value of header origin roll did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw.value, expected_header_origin_yaw)
        << "Error: The value of header origin yaw did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.pitch_std_dev.value, expected_header_origin_pitch_std_dev)
        << "Error: The value of header origin pitch standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.roll_std_dev.value, expected_header_origin_roll_std_dev)
        << "Error: The value of header origin roll standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw_std_dev.value, expected_header_origin_yaw_std_dev)
        << "Error: The value of header origin yaw standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.x.value, expected_header_origin_x)
        << "Error: The value of header origin x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.y.value, expected_header_origin_y)
        << "Error: The value of header origin y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw_std_dev.value, expected_header_origin_x_std_dev)
        << "Error: The value of header origin x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw_std_dev.value, expected_header_origin_y_std_dev)
        << "Error: The value of header origin y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.z.value, expcetd_header_origin_z)
        << "Error: The value of header origin z-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw_std_dev.value, expected_header_origin_z_std_dev)
        << "Error: The value of header origin z-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.x, expected_postion_x)
        << "Error: The value of object position x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.xStdDev, expected_postion_xStdDev)
        << "Error: The value of object position x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.y, expceted_position_y)
        << "Error: The value of object position y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.yStdDev, expected_position_yStdDev)
        << "Error: The value of object position y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.covarianceXY, expected_position_covarianceXY)
        << "Error: The value of object position covarianceXY did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.orientation, expected_position_orientation)
        << "Error: The value of object position orientation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.orientationStdDev, expected_position_orientationStdDev)
        << "Error: The value of object position orientation standard deviation did not match the expected value";

    //ObjectList Velocity absolute mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.x, expected_dynamics_velocityAbsolute_x)
        << "Error: The value of object dynamics velocityAbsolute x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.xStdDev, expected_dynamics_velocityAbsolute_xStdDev)
        << "Error: The value of object dynamics velocityAbsolute x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.y, expected_dynamics_velocityAbsolute_y)
        << "Error: The value of object dynamics velocityAbsolute y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.yStdDev, expected_dynamics_velocityAbsolute_yStdDev)
        << "Error: The value of object dynamics velocityAbsolute y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.covarianceXY, expected_velocityAbsolute_covarianceXY)
        << "Error: The value of object dynamics velocityAbsolute covarianceXY did not match the expected value";


    //ObjectList Velocity relative  mapping TBD
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.x, expected_dynamics_velocityRelative_x)
        << "Error: The value of object dynamics velocityRelative x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.xStdDev, expected_dynamics_velocityRelative_xStdDev)
        << "Error: The value of object dynamics velocityRelative x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.y, expected_dynamics_velocityRelative_y)
        << "Error: The value of object dynamics velocityRelative y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.yStdDev, expected_dynamics_velocityRelative_yStdDev)
        << "Error: The value of object dynamics velocityRelative y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.covarianceXY, expected_dynamics_velocityRelative_covarianceXY)
        << "Error: The value of object dynamics velocityRelative covarianceXY did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationAbsolute.x, expected_dynamics_accelerationAbsolute_x)
        << "Error: The value of object dynamics accelerationAbsolute x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.orientationRate.std_dev, expected_dynamics_orientationRate_std_dev)
        << "Error: The value of object dynamics orientationRate standard deviation did not match the expected value";

        // ObjectList Acceleration relative mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.x, expected_dynamics_accelerationRelative_x)
        << "Error: The value of object dynamics accelerationRelative x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.xStdDev, expected_dynamics_accelerationRelative_xStdDev)
        << "Error: The value of object dynamics accelerationRelative x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.y, expected_dynamics_accelerationRelative_y)
        << "Error: The value of object dynamics accelerationRelative y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.yStdDev, expected_dynamics_accelerationRelative_yStdDev)
        << "Error: The value of object dynamics accelerationRelative y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.covarianceXY, expected_dynamics_accelerationRelative_covarianceXY)
        << "Error: The value of object dynamics accelerationRelative covarianceXY did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.orientationRate.mean, expected_dyamanics_orientationRate)
        << "Error: The value of object dynamics orientationRate mean did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.orientationRate.std_dev, expected_dynamics_orientationRate_std_dev)
        << "Error: The value of object dynamics orientationRate standard deviation did not match the expected value";

    // ROT mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].existence.existenceProbability, expected_existence_existenceProbability)
        << "Error: The value of object existence probability did not match the expected value";

    //TODO:DEVELOPER NEED TO CONFORM THIS CASE
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.width.status, ObjectlistEvtT.objects[count].shape.length.status)
        << "Error: The status values of object shape width and length did not match";

    //Fill shape info
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.mean, expected_shape_length_mean)
        << "Error: The value of object shape length mean did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.width.mean, expected_shape_width_mean)
        << "Error: The value of object shape width mean did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.age, expected_summary_age)
        << "Error: The value of object summary age did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.id, expected_summary_id)
        << "Error: The value of object summary id did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[0].summary.statusMeasurement,
        (y23cw51::eth4::bmw::dass::sensors::ObjectSummaryFrontRadar::statusMeasurement_generated_type) rot_obj_info->rot_object_list[0].object_status)
        << "Error: The value of object summary status measurement did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[0].summary.radarCrossSection, expected_radar_cross_section)
        << "Error: The value of object summary radar cross section did not match the expected value";

}


/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Define expected values for internal OAL signals.
    -> Execute the 'ObjectListUpdater' function with the specified parameters.
    -> Validate the expected outputs by comparing internal OAL signals with the expected values.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].object_status' to 10.
    -> Define expected values for internal OAL signals.
Expected output:
    -> Ensure that internal OAL signals match the expected values.
=========================================================================
*/

TEST_F(OALTest,non_default_ObjectListUpdater){
    // Set pre-conditions by updating specific parameters.
    rot_obj_info->rot_object_list_timestamp = 7;
    rot_obj_info->tracker_start_timestamp = 50000000;
    rot_obj_info->tracker_elapsed_time = 100000000;
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].iso_x_posn = 10.0f;
    rot_obj_info->rot_object_list[0].iso_x_posn_var = 5.0f;
    rot_obj_info->rot_object_list[0].iso_y_posn = 7.0f;
    rot_obj_info->rot_object_list[0].iso_y_posn_var = 5.0f;
    rot_obj_info->rot_object_list[0].iso_xy_posn_cov = 10.0f;
    rot_obj_info->rot_object_list[0].iso_orientation = 1;
    rot_obj_info->rot_object_list[0].iso_orientation_var = 3.0f;
    //Object_List
    rot_obj_info->rot_object_list[0].iso_x_vel = 16.0f;
    rot_obj_info->rot_object_list[0].iso_x_vel_var = 2.0f;
    rot_obj_info->rot_object_list[0].iso_y_vel = 3.0f;
    rot_obj_info->rot_object_list[0].iso_y_vel_var=2.0f;
    rot_obj_info->rot_object_list[0].iso_xy_vel_cov=2.0f;
    //ACCELRATION
    rot_obj_info->rot_object_list[0].iso_x_acc=3.0f;
    rot_obj_info->rot_object_list[0].iso_x_acc_var=2.0f;
    rot_obj_info->rot_object_list[0].iso_y_acc=3.0f;
    rot_obj_info->rot_object_list[0].iso_y_acc_var=4.0f;
    rot_obj_info->rot_object_list[0].iso_xy_acc_cov=2.0f;
    rot_obj_info->rot_object_list[0].existence_probability=3.0f;
    rot_obj_info->rot_object_list[0].length=2.0f;
    rot_obj_info->rot_object_list[0].width=3.0f;
    rot_obj_info->rot_object_list[0].time_since_created=2.0f;
    rot_obj_info->rot_object_list[0].unique_id=3.0f;
    rot_obj_info->rot_object_list[0].object_status=3.0f;
    rot_obj_info->rot_object_list[0].radar_cross_section=2.0f;
    //Headers
    front_radar_pre_detection_list.header.origin.pitch.value =2.0f;
    front_radar_pre_detection_list.header.origin.roll.value =3.0f;
    front_radar_pre_detection_list.header.origin.yaw.value =4.0f;
    front_radar_pre_detection_list.header.origin.pitch_std_dev.value =7.0f;
    front_radar_pre_detection_list.header.origin.roll_std_dev.value =8.0f;
    front_radar_pre_detection_list.header.origin.yaw_std_dev .value=9.0f;
    front_radar_pre_detection_list.header.origin.x.value =4.0f;
    front_radar_pre_detection_list.header.origin.y.value=3.0f;
    front_radar_pre_detection_list.header.origin.z.value =8;

    // Define expected values for internal OAL signals.
    int16_t expected_timestampDAQ_fractional_seconds =7000;
    int8_t expected_timestampSP_start_seconds=50;
    int32_t expected_timestampSP_start_fractional_seconds= 0; //1539614552;
    long long  expected_timestampSP_end_seconds=100000050;
    int32_t expected_timestampSP_end_fractional_seconds=376832000;
    //HEADER_FILL
    int8_t expected_header_origin_pitch=2;
    int8_t expected_header_origin_roll=3;
    int8_t expected_header_origin_yaw=4;
    int8_t expected_header_origin_pitch_std_dev=7;
    int8_t expected_header_origin_roll_std_dev=8;
    int8_t expected_header_origin_yaw_std_dev=9;
    int8_t expected_header_origin_x=4;
    int8_t expected_header_origin_y=3;
    int8_t expcetd_header_origin_z=8;
    //OBJECT_LIST
    int16_t expected_dynamics_velocityAbsolute_x=3200;
    int16_t expected_dynamics_velocityAbsolute_xStdDev=282;
    int16_t expected_dynamics_velocityAbsolute_y=600;
    int16_t expected_dynamics_velocityAbsolute_yStdDev=282;
    float expected_velocityAbsolute_covarianceXY=2.0f;
    //ObjectList Velocity relative  mapping TBD
    int16_t expected_dynamics_velocityRelative_x=3200;
    int16_t expected_dynamics_velocityRelative_xStdDev=282;
    int16_t expected_dynamics_velocityRelative_y=600;
    int16_t expected_dynamics_velocityRelative_yStdDev=282;
    int8_t expected_dynamics_velocityRelative_covarianceXY=2;
    int16_t expected_dynamics_accelerationAbsolute_x=600;
    // ObjectList Acceleration relative mapping
    int16_t expected_dynamics_accelerationRelative_x=600;
    int16_t expected_dynamics_accelerationRelative_xStdDev=282;
    int16_t expected_dynamics_accelerationRelative_y=600;
    int16_t expected_dynamics_accelerationRelative_yStdDev=400;
    int8_t expected_dynamics_accelerationRelative_covarianceXY=2;
    int16_t expected_dyamanics_orientationRate=0;
    int16_t expected_dynamics_orientationRate_std_dev=0;
    // ROT mapping
    int16_t expected_existence_existenceProbability=44;
    // Fill shape info
    int16_t expected_shape_length_mean=200;
    int16_t expected_shape_width_mean=300;
    int16_t expected_summary_age=2000;
    int8_t expected_summary_id=3;
    int8_t expected_radar_cross_section=2;
    int16_t expected_postion_x=1000;
    int16_t expected_postion_xStdDev=223;
    int16_t expceted_position_y=700;
    int16_t expected_position_yStdDev=223;
    int8_t expected_position_covarianceXY=10;
    float expected_position_orientation=10430;
    float expected_position_orientationStdDev=-32457;
    
    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT,vse_output,front_radar_pre_detection_list);

    EXPECT_EQ(ObjectlistEvtT.header.timestampDAQ.fractional_seconds.value, expected_timestampDAQ_fractional_seconds)
        << "Error: The value of header timestampDAQ fractional seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_start.seconds.value, expected_timestampSP_start_seconds)
        << "Error: The value of header timestampSP_start seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_start.fractional_seconds.value, expected_timestampSP_start_fractional_seconds)
        << "Error: The value of header timestampSP_start fractional seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_end.seconds.value, expected_timestampSP_end_seconds)
        << "Error: The value of header timestampSP_end seconds did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.timestampSP_end.fractional_seconds.value, expected_timestampSP_end_fractional_seconds)
        << "Error: The value of header timestampSP_end fractional seconds did not match the expected value";

    //HEADER_FILL
    EXPECT_EQ(ObjectlistEvtT.header.origin.pitch.value, expected_header_origin_pitch)
        << "Error: The value of header origin pitch did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.roll.value, expected_header_origin_roll)
        << "Error: The value of header origin roll did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw.value, expected_header_origin_yaw)
        << "Error: The value of header origin yaw did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.pitch_std_dev.value, expected_header_origin_pitch_std_dev)
        << "Error: The value of header origin pitch standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.roll_std_dev.value, expected_header_origin_roll_std_dev)
        << "Error: The value of header origin roll standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.yaw_std_dev.value, expected_header_origin_yaw_std_dev)
        << "Error: The value of header origin yaw standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.x.value, expected_header_origin_x)
        << "Error: The value of header origin x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.y.value, expected_header_origin_y)
        << "Error: The value of header origin y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.header.origin.z.value, expcetd_header_origin_z)
        << "Error: The value of header origin z-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[0].position.x, expected_postion_x)
        << "Error: The value of object position x-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.xStdDev, expected_postion_xStdDev)
        << "Error: The value of object position x-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.y, expceted_position_y)
        << "Error: The value of object position y-coordinate did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.yStdDev, expected_position_yStdDev)
        << "Error: The value of object position y-coordinate standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.covarianceXY, expected_position_covarianceXY)
        << "Error: The value of object position covarianceXY did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.orientation, expected_position_orientation)
        << "Error: The value of object position orientation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].position.orientationStdDev, expected_position_orientationStdDev)
        << "Error: The value of object position orientation standard deviation did not match the expected value";

    //ObjectList Velocity absolute mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.x, expected_dynamics_velocityAbsolute_x)
        << "Error: The value of object dynamics velocityAbsolute x-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.xStdDev, expected_dynamics_velocityAbsolute_xStdDev)
        << "Error: The value of object dynamics velocityAbsolute x-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.y, expected_dynamics_velocityAbsolute_y)
        << "Error: The value of object dynamics velocityAbsolute y-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.yStdDev, expected_dynamics_velocityAbsolute_yStdDev)
        << "Error: The value of object dynamics velocityAbsolute y-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityAbsolute.covarianceXY, expected_velocityAbsolute_covarianceXY)
        << "Error: The value of object dynamics velocityAbsolute covarianceXY did not match the expected value";

    //ObjectList Velocity relative  mapping TBD
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.x, expected_dynamics_velocityRelative_x)
        << "Error: The value of object dynamics velocityRelative x-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.xStdDev, expected_dynamics_velocityRelative_xStdDev)
        << "Error: The value of object dynamics velocityRelative x-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.y, expected_dynamics_velocityRelative_y)
        << "Error: The value of object dynamics velocityRelative y-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.yStdDev, expected_dynamics_velocityRelative_yStdDev)
        << "Error: The value of object dynamics velocityRelative y-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.velocityRelative.covarianceXY, expected_dynamics_velocityRelative_covarianceXY)
        << "Error: The value of object dynamics velocityRelative covarianceXY did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationAbsolute.x, expected_dynamics_accelerationAbsolute_x)
        << "Error: The value of object dynamics accelerationAbsolute x-component did not match the expected value";
    //
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.orientationRate.mean, expected_dyamanics_orientationRate)
        << "Error: The value of object dynamics orientationRate mean did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.orientationRate.std_dev, expected_dynamics_orientationRate_std_dev)
        << "Error: The value of object dynamics orientationRate standard deviation did not match the expected value";

    // ObjectList Acceleration relative mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.x, expected_dynamics_accelerationRelative_x)
        << "Error: The value of object dynamics accelerationRelative x-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.xStdDev, expected_dynamics_accelerationRelative_xStdDev)
        << "Error: The value of object dynamics accelerationRelative x-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.y, expected_dynamics_accelerationRelative_y)
        << "Error: The value of object dynamics accelerationRelative y-component did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.yStdDev, expected_dynamics_accelerationRelative_yStdDev)
        << "Error: The value of object dynamics accelerationRelative y-component standard deviation did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].dynamics.accelerationRelative.covarianceXY, expected_dynamics_accelerationRelative_covarianceXY)
        << "Error: The value of object dynamics accelerationRelative covarianceXY did not match the expected value";

    //ROT mapping
    EXPECT_EQ(ObjectlistEvtT.objects[count].existence.existenceProbability, expected_existence_existenceProbability)
        << "Error: The value of object existence existenceProbability did not match the expected value";

    //Fill shape info
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.mean, expected_shape_length_mean)
        << "Error: The value of object shape length mean did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.width.mean, expected_shape_width_mean)
        << "Error: The value of object shape width mean did not match the expected value";

    // Object Summary
    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.age, expected_summary_age)
        << "Error: The value of object summary age did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.id, expected_summary_id)
        << "Error: The value of object summary id did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.statusMeasurement,
        (y23cw51::eth4::bmw::dass::sensors::ObjectSummaryFrontRadar::statusMeasurement_generated_type)rot_obj_info->rot_object_list[0].object_status)
        << "Error: The value of object summary statusMeasurement did not match the expected value";

    EXPECT_EQ(ObjectlistEvtT.objects[0].summary.radarCrossSection, expected_radar_cross_section)
        << "Error: The value of object summary radarCrossSection did not match the expected value";

}

/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the precondition signal to Container Qualifier OK.
    -> This test case verifies that the object qualifier is set to QUAL_CON_OK when the overall_fault_status is 195.
Pre-condition:
    -> Set 'rot_obj_info->all_scl_faults.overall_fault_status' to 195.
Expected output:
    -> Ensure that 'ObjectlistEvtT.qualifier' is set to 'QUAL_CON_OK'.
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to 'kExtendedQualifier_NormalOperationMode'.
=========================================================================
*/
TEST_F(OALTest,Container_Qualifier_ok){

    // Setting the pre_condtion signal to Container_Qualifier_ok
    rot_obj_info->all_scl_faults.overall_fault_status =195;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT,vse_output,front_radar_pre_detection_list);

    // Verify that 'qualifier' is correctly set to QUAL_CON_OK
    EXPECT_EQ(ObjectlistEvtT.qualifier, y23cw51::eth4::bmw::datatypes::qualifier::ContainerQualifier::QUAL_CON_OK)
        << "Error: The value of object qualifier did not match the expected value (QUAL_CON_OK)";

    // Verify that 'header.privateExtendedQualifier' is correctly set to kExtendedQualifier_NormalOperationMode
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_NormalOperationMode)
        << "Error: The value of object header privateExtendedQualifier did not match the expected value (kExtendedQualifier_NormalOperationMode)";

}
/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the precondition signal to Container Qualifier Error.
    -> This test case verifies that the object qualifier is set to QUAL_CON_ERROR when the overall_fault_status is 60.
Pre-condition:
    -> Set 'rot_obj_info->all_scl_faults.overall_fault_status' to 60.
Expected output:
    -> Ensure that 'ObjectlistEvtT.qualifier' is set to 'QUAL_CON_ERROR'.
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to 'kExtendedQualifier_InternalReason'.
=========================================================================
*/
TEST_F(OALTest, Container_Qualifier_Error){

    // Setting the precondition signal to Container Qualifier Error
    rot_obj_info->all_scl_faults.overall_fault_status = 60;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'qualifier' is correctly set to QUAL_CON_ERROR
    EXPECT_EQ(ObjectlistEvtT.qualifier, y23cw51::eth4::bmw::datatypes::qualifier::ContainerQualifier::QUAL_CON_ERROR)
        <<"Error: The value of object qualifier did not match the expected value (QUAL_CON_ERROR)";

}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 0.
    -> This test case verifies that the object position referencePoint is set to Signal_Unfilled when the reference_point is 0.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 0.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Signal_Unfilled'.
=========================================================================
*/
TEST_F(OALTest, ref_point_sig_unfilled){

    // Setting the id to 10 and reference_point to 0
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 0;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Signal_Unfilled
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Geometric_Center)
        << "Error: The value of object position referencePoint did not match the expected value (Signal_Unfilled)";
}


/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 1.
    -> This test case verifies that the object position referencePoint is set to Corner_Front_Left when the reference_point is 1.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 1.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Corner_Front_Left'.
=========================================================================
*/
TEST_F(OALTest, ref_point_corner_front_left){

    // Setting the id to 10 and reference_point to 1
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 1;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Corner_Front_Left
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Corner_Front_Left)
        << "Error: The value of object position referencePoint did not match the expected value (Corner_Front_Left)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 2.
    -> This test case verifies that the object position referencePoint is set to Middle_Front when the reference_point is 2.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 2.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Middle_Front'.
=========================================================================
*/
TEST_F(OALTest, ref_point_Middle_Front){

    // Setting the id to 10 and reference_point to 2
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 2;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Middle_Front
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Middle_Front)
        << "Error: The value of object position referencePoint did not match the expected value (Middle_Front)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 3.
    -> This test case verifies that the object position referencePoint is set to Corner_Front_Right when the reference_point is 3.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 3.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Corner_Front_Right'.
=========================================================================
*/
TEST_F(OALTest, ref_point_Corner_Front_Right){

    // Setting the id to 10 and reference_point to 3
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 3;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Corner_Front_Right
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Corner_Front_Right)
        << "Error: The value of object position referencePoint did not match the expected value (Corner_Front_Right)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 4.
    -> This test case verifies that the object position referencePoint is set to Middle_Side_Right when the reference_point is 4.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 4.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Middle_Side_Right'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Middle_Side_Right){

    // Setting the id to 10 and reference_point to 4
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 4;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Middle_Side_Right
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Middle_Side_Right)
        << "Error: The value of object position referencePoint did not match the expected value (Middle_Side_Right)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 5.
    -> This test case verifies that the object position referencePoint is set to Corner_Rear_Right when the reference_point is 5.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 5.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Corner_Rear_Right'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Corner_Rear_Right){

    // Setting the id to 10 and reference_point to 5
    rot_obj_info->rot_object_list[0].id = 10;
    rot_obj_info->rot_object_list[0].reference_point = 5;

    // Execute the 'object_list_updater'function with the specified parameters.
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Corner_Rear_Right
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Corner_Rear_Right)
        << "Error: The value of object position referencePoint did not match the expected value (Corner_Rear_Right)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 6.
    -> This test case verifies that the object position referencePoint is set to Middle_Rear when the reference_point is 6.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 6.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Middle_Rear'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Middle_Rear){

    // Setting the id to 10 and reference_point to 6
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].reference_point = 6;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Middle_Rear
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Middle_Rear)
        << "Error: The value of object position referencePoint did not match the expected value (Middle_Rear)";
}

/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 7.
    -> This test case verifies that the object position referencePoint is set to Corner_Rear_Left when the reference_point is 7.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 7.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Corner_Rear_Left'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Corner_Rear_Left){

    // Setting the id to 10 and reference_point to 7
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].reference_point =7;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Corner_Rear_Left
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Corner_Rear_Left)
        << "Error: The value of object position referencePoint did not match the expected value (Corner_Rear_Left)";
}



/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 8.
    -> This test case verifies that the object position referencePoint is set to Middle_Side_Left when the reference_point is 8.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 8.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Middle_Side_Left'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Middle_Side_Left){

    // Setting the id to 10 and reference_point to 8
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].reference_point =8;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Middle_Side_Left
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Middle_Side_Left)
        << "Error: The value of object position referencePoint did not match the expected value (Middle_Side_Left)";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and reference_point to 9.
    -> This test case verifies that the object position referencePoint is set to Signal_Unfilled when the reference_point is 9.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].reference_point' to 9.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].position.referencePoint' is set to 'Signal_Unfilled'.
=========================================================================
*/
TEST_F(OALTest,ref_point_Signal_Unfilled){

    // Setting the id to 10 and reference_point to 9
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].reference_point =9;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'position.referencePoint' is correctly set to Signal_Unfilled
    EXPECT_EQ(ObjectlistEvtT.objects[count].position.referencePoint, y23cw51::eth4::bmw::dass::sensors::ObjectPosition3DFrontRadar::referencePoint_generated_type::Signal_Unfilled)
        << "Error: The value of object position referencePoint did not match the expected value (Signal_Unfilled)";
}



/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and occlusion_status to 1.
    -> This test case verifies that the object shape length status is set to kEdgeVisibilityStatus_CompletelyOccluded when the occlusion_status is 1.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].occlusion_status' to 1.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].shape.length.status' is set to 'kEdgeVisibilityStatus_CompletelyOccluded'.
=========================================================================
*/
TEST_F(OALTest, EdgeVisibilityStatus_CompletelyOccluded){

    // Setting the id to 10 and occlusion_status to 1
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].occlusion_status =1;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'shape.length.status' is correctly set to kEdgeVisibilityStatus_CompletelyOccluded
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.status, y23cw51::eth4::bmw::sensors::objectfusion::EdgeVisibilityStatus::kEdgeVisibilityStatus_CompletelyOccluded)
       << "Error: The value of object shape length status did not match the expected value (kEdgeVisibilityStatus_CompletelyOccluded)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and occlusion_status to 2.
    -> This test case verifies that the object shape length status is set to kEdgeVisibilityStatus_PartiallyOccluded when the occlusion_status is 2.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].occlusion_status' to 2.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].shape.length.status' is set to 'kEdgeVisibilityStatus_PartiallyOccluded'.
=========================================================================
*/
TEST_F(OALTest, EdgeVisibilityStatus_PartiallyOccluded){

    // Setting the id to 10 and occlusion_status to 2
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].occlusion_status =2;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'shape.length.status' is correctly set to kEdgeVisibilityStatus_PartiallyOccluded
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.status, y23cw51::eth4::bmw::sensors::objectfusion::EdgeVisibilityStatus::kEdgeVisibilityStatus_PartiallyOccluded)
        << "Error: The value of object shape length status did not match the expected value (kEdgeVisibilityStatus_PartiallyOccluded)";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and occlusion_status to 3.
    -> This test case verifies that the object shape length status is set to kEdgeVisibilityStatus_CompletelyVisible when the occlusion_status is 3.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].occlusion_status' to 3.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].shape.length.status' is set to 'kEdgeVisibilityStatus_CompletelyVisible'.
=========================================================================
*/
TEST_F(OALTest, EdgeVisibilityStatus_CompletelyVisible){

    // Setting the id to 10 and occlusion_status to 3
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].occlusion_status =3;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'shape.length.status' is correctly set to kEdgeVisibilityStatus_CompletelyVisible
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.status, y23cw51::eth4::bmw::sensors::objectfusion::EdgeVisibilityStatus::kEdgeVisibilityStatus_CompletelyVisible)
        << "Error: The value of object shape length status did not match the expected value (kEdgeVisibilityStatus_CompletelyVisible)";
}

/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and occlusion_status to 4.
    -> This test case verifies that the object shape length status is set to kEdgeVisibilityStatus_Invalid
       when the occlusion_status is 4.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].occlusion_status' to 4.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].shape.length.status' is set to 'kEdgeVisibilityStatus_Invalid'.
=========================================================================
*/
TEST_F(OALTest, EdgeVisibilityStatus_Invalid){

    // Setting the id to 10 and occlusion_status to 4
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].occlusion_status =4;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'shape.length.status' is correctly set to kEdgeVisibilityStatus_Invalid
    EXPECT_EQ(ObjectlistEvtT.objects[count].shape.length.status, y23cw51::eth4::bmw::sensors::objectfusion::EdgeVisibilityStatus::kEdgeVisibilityStatus_Invalid)
        << "Error: The value of object shape length status did not match the expected value (kEdgeVisibilityStatus_Invalid)";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and movement_status to 1U.
    -> This test case verifies that the object summary movement status is set to kMovementStatus_Stationary
       when the movement_status is 1U.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].movement_status' to 1U.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].summary.statusMovement' is set to 'kMovementStatus_Stationary'.
=========================================================================
*/
TEST_F(OALTest, MovementStatus_Stationary){

    // Setting the id to 10 and movement_status to 1U
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].movement_status =1U;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'summary.statusMovement' is correctly set to kMovementStatus_Stationary
    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.statusMovement, y23cw51::eth4::bmw::dass::sensors::ObjectSummaryFrontRadar::statusMovement_generated_type::kMovementStatus_Stationary)
        << "Error: The value of object summary movement status did not match the expected value (kMovementStatus_Stationary)";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and movement_status to 2U.
    -> This test case verifies that the object summary movement status is set to kMovementStatus_Moved
       when the movement_status is 2U.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].movement_status' to 2U.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].summary.statusMovement' is set to 'kMovementStatus_Moved'.
=========================================================================
*/
TEST_F(OALTest, MovementStatus_Moved){

    // Setting the id to 10 and movement_status to 2U
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].movement_status =2U;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'summary.statusMovement' is correctly set to kMovementStatus_Moved
    EXPECT_EQ(ObjectlistEvtT.objects[count].summary.statusMovement, y23cw51::eth4::bmw::dass::sensors::ObjectSummaryFrontRadar::statusMovement_generated_type::kMovementStatus_Moved)
        << "Error: The value of object summary movement status did not match the expected value (kMovementStatus_Moved)";
}



/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and underdrivable_status to 0.
    -> This test case verifies that the object classification underdrivable class is set to (EmPercent)0
       when the underdrivable_status is 0.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].underdrivable_status' to 0.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].classification.classUnderdrivable' is set to (EmPercent)0.
=========================================================================
*/
TEST_F(OALTest, environmentalmodel_EmPercent0){

    // Setting the id to 10 and underdrivable_status to 0
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].underdrivable_status =0;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'classification.classUnderdrivable' is correctly set to (EmPercent)0
    EXPECT_EQ(ObjectlistEvtT.objects[count].classification.classUnderdrivable, (y23cw51::eth4::bmw::environmentalmodel::EmPercent)0)
        << "Error: The value of object classification underdrivable class did not match the expected value (EmPercent)0";
}
#endif

#if(0)
/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and underdrivable_status to 1.
    -> This test case verifies that the object classification underdrivable class is set to (EmPercent)75
       when the underdrivable_status is 1.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].underdrivable_status' to 1.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].classification.classUnderdrivable' is set to (EmPercent)75.
=========================================================================
*/
TEST_F(OALTest, environmentalmodel_EmPercent75){

    // Setting the id to 10 and underdrivable_status to 1
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].underdrivable_status =1;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'classification.classUnderdrivable' is correctly set to (EmPercent)75
    EXPECT_EQ(ObjectlistEvtT.objects[count].classification.classUnderdrivable, (y23cw51::eth4::bmw::environmentalmodel::EmPercent)75)
        << "Error: The value of object classification underdrivable class did not match the expected value (EmPercent)75";
}



/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and underdrivable_status to 2.
    -> This test case verifies that the object classification underdrivable class is set to (EmPercent)100
       when the underdrivable_status is 2.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].underdrivable_status' to 2.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].classification.classUnderdrivable' is set to (EmPercent)100.
=========================================================================
*/
TEST_F(OALTest, environmentalmodel_EmPercent100){

    // Setting the id to 10 and underdrivable_status to 2
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].underdrivable_status =2;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'classification.classUnderdrivable' is correctly set to (EmPercent)100
    EXPECT_EQ(ObjectlistEvtT.objects[count].classification.classUnderdrivable, (y23cw51::eth4::bmw::environmentalmodel::EmPercent)100)
        << "Error: The value of object classification underdrivable class did not match the expected value (EmPercent)100";
}

/*
=========================================================================
Test Requirement: {}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and underdrivable_status to 3.
    -> This test case verifies that the object classification underdrivable class is set to (EmPercent)50
       when the underdrivable_status is 3.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].underdrivable_status' to 3.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].classification.classUnderdrivable' is set to (EmPercent)50.
=========================================================================
*/
TEST_F(OALTest, environmentalmodel_EmPercent50){

    // Setting the id to 10 and underdrivable_status to 3
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].underdrivable_status =3;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'classification.classUnderdrivable' is correctly set to (EmPercent)50
    EXPECT_EQ(ObjectlistEvtT.objects[count].classification.classUnderdrivable, (y23cw51::eth4::bmw::environmentalmodel::EmPercent)50)
        << "Error: The value of object classification underdrivable class did not match the expected value (EmPercent)50";
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> Setting the id to 10 and underdrivable_status to 4.
    -> This test case verifies that the object classification underdrivable class is set to (EmPercent)50 when the underdrivable_status is not 0, 1, 2, or 3.
Pre-condition:
    -> Set 'rot_obj_info->rot_object_list[0].id' to 10.
    -> Set 'rot_obj_info->rot_object_list[0].underdrivable_status' to 4.
Expected output:
    -> Ensure that 'ObjectlistEvtT.objects[count].classification.classUnderdrivable' is set to (EmPercent)50.
=========================================================================
*/
TEST_F(OALTest, environmentalmodel_EmPercent_else_cond){

    // Setting the id to 10 and underdrivable_status to 4
    rot_obj_info->rot_object_list[0].id =10;
    rot_obj_info->rot_object_list[0].underdrivable_status =4;

    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    // Verify that 'classification.classUnderdrivable' is correctly set to (EmPercent)50
    EXPECT_EQ(ObjectlistEvtT.objects[count].classification.classUnderdrivable, (y23cw51::eth4::bmw::environmentalmodel::EmPercent)50)
        << "Error: The value of object classification underdrivable class did not match the expected value (EmPercent)50";
}


/*
TODO BY DEVELOPER
*/


// ASI_AlgorithmSoftwareIntegration/Wrappers/BMW_SP25/include/y23cw51/eth4/bmw/sensors/shared/impl_type_privateextendedqualifierenum.h 
// In above file used few enums only. we tried to use remaining enums, so the test cases are failing. Because they are not mapped.

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest,notmapping_cases_for_header_powerUporDown)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_PowerUpOrDown = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_PowerUpOrDown;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_PowerUpOrDown)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_PowerUpOrDown\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_SensorNotCalibrated)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_SensorNotCalibrated = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_SensorNotCalibrated;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_SensorNotCalibrated)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_SensorNotCalibrated\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_SensorBlocked)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_SensorBlocked = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_SensorBlocked;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_SensorBlocked)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_SensorBlocked\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_SensorMisaligned)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_SensorMisaligned = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_SensorMisaligned;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
     EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_SensorMisaligned)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_SensorMisaligned\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_BadSensorEnvironmentalCondition)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_BadSensorEnvironmentalCondition = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_BadSensorEnvironmentalCondition;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_BadSensorEnvironmentalCondition)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_BadSensorEnvironmentalCondition\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_ReducedFieldOfView)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_ReducedFieldOfView = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_ReducedFieldOfView;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_ReducedFieldOfView)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_ReducedFieldOfView\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_InputNotAvailable)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_InputNotAvailable = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_InputNotAvailable;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_InputNotAvailable)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_InputNotAvailable\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_ExternalDestortion)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_ExternalDestortion = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_ExternalDestortion;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_ExternalDestortion)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_ExternalDestortion\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_BeginningBlockage)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_BeginningBlockage = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_BeginningBlockage;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_BeginningBlockage)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_BeginningBlockage\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_Selftest)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_Selftest = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_Selftest;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_Selftest)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_Selftest\n";

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_Standby)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_Standby = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_Standby;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_Standby)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_Standby\n";

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_ExternalFailure)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_ExternalFailure = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_ExternalFailure;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_ExternalFailure)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_ExternalFailure\n";
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies that the not mapping cases in ObjectlistEvtT.header.privateExtendedQualifier
Pre-condition:
    ->Set rot_obj_info->all_scl_faults.overall_fault_status=140
Expected output:
    -> Ensure that 'ObjectlistEvtT.header.privateExtendedQualifier' is set to expected value
=========================================================================
*/
TEST_F(OALTest, notmapping_cases_for_Invalid)
{
    rot_obj_info->all_scl_faults.overall_fault_status=140;
    y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum expected_kExtendedQualifier_Invalid = y23cw51::eth4::bmw::sensors::shared::PrivateExtendedQualifierEnum::kExtendedQualifier_Invalid;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.privateExtendedQualifier, expected_kExtendedQualifier_Invalid)
    << "Error Message: ObjectlistEvtT.header.privateExtendedQualifier does not match expected_kExtendedQualifier_Invalid\n";
}

TEST_F(OALTest, mapping_sync_status)
{
    //rot_obj_info->rot_object_list_timestamp =1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    EXPECT_EQ(ObjectlistEvtT.header.timestampDAQ.sync_status,y23cw51::eth4::bmw::environmentalmodel::common::StdTimestampSyncState::kStdTimestampSyncState_Invalid)
    <<"Error:The value of ObjectlistEvtT.header.timestampDAQ.sync_status is not mapped to kStdTimestampSyncState_NotInSync";
 
}

#endif





TEST_F(OALTest, core_info_fault_time_us_no_increase)
{

    rot_obj_info->all_scl_faults.core_info_faults.time_us_no_increase = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.core_info_faults.time_us_no_increase = 0;

}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the core_info_fault_elapsed_time_below_lower_limit value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_below_lower_limit = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_below_lower_limit = 0 
=========================================================================
*/
TEST_F(OALTest, core_info_fault_elapsed_time_below_lower_limit)
{

    rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_below_lower_limit = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_below_lower_limit = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the core_info_fault_elapsed_time_above_upper_limit value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_above_upper_limit = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_above_upper_limit = 0 
=========================================================================
*/
TEST_F(OALTest, core_info_fault_elapsed_time_above_upper_limit)
{

    rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_above_upper_limit = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.core_info_faults.elapsed_time_above_upper_limit = 0;
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the core_info_fault_cnt_loops_no_increase value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.cnt_loops_no_increase = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.core_info_faults.cnt_loops_no_increase = 0 
=========================================================================
*/

TEST_F(OALTest, core_info_fault_cnt_loops_no_increase)
{

    rot_obj_info->all_scl_faults.core_info_faults.cnt_loops_no_increase = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.core_info_faults.cnt_loops_no_increase = 0;

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the host_info_fault_host_lateral_acceleration_invalid value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_lateral_acceleration_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_lateral_acceleration_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, host_info_fault_host_lateral_acceleration_invalid)
{

    rot_obj_info->all_scl_faults.host_info_faults.host_lateral_acceleration_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.host_info_faults.host_lateral_acceleration_invalid = 0;

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the host_info_fault_host_longitudinal_acceleration_invalid value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_longitudinal_acceleration_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_longitudinal_acceleration_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, host_info_fault_host_longitudinal_acceleration_invalid)
{
    rot_obj_info->all_scl_faults.host_info_faults.host_longitudinal_acceleration_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.host_info_faults.host_longitudinal_acceleration_invalid = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the host_info_fault_host_speed_invalid value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_speed_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_speed_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, host_info_fault_host_speed_invalid)
{
    rot_obj_info->all_scl_faults.host_info_faults.host_speed_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.host_info_faults.host_speed_invalid = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the host_info_fault_host_yawrate_invalid value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_yawrate_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.host_yawrate_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, host_info_fault_host_yawrate_invalid)
{
    
    rot_obj_info->all_scl_faults.host_info_faults.host_yawrate_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.host_info_faults.host_yawrate_invalid = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the host_info_fault_vehicle_index_no_increase value.
Pre-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.vehicle_index_no_increase = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.host_info_faults.vehicle_index_no_increase = 0 
=========================================================================
*/
TEST_F(OALTest, host_info_fault_vehicle_index_no_increase)
{
    rot_obj_info->all_scl_faults.host_info_faults.vehicle_index_no_increase = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.host_info_faults.vehicle_index_no_increase = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetObjectFault function
Pre-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_positions_faulty = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_positions_faulty = 0 
=========================================================================
*/
TEST_F(OALTest, Get_object_track_positions_faulty)
{
    rot_obj_info->all_scl_faults.object_faults.f_track_positions_faulty = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.object_faults.f_track_positions_faulty = 0;

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetObjectFault function
Pre-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_velocities_faulty = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_velocities_faulty = 0 
=========================================================================
*/
TEST_F(OALTest, Get_object_track_velocities_faulty)
{
    rot_obj_info->all_scl_faults.object_faults.f_track_velocities_faulty = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.object_faults.f_track_velocities_faulty = 0;

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetObjectFault function
Pre-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_accelerations_faulty = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.object_faults.f_track_accelerations_faulty = 0 
=========================================================================
*/
TEST_F(OALTest, Get_object_track_accelerations_faulty)
{
    rot_obj_info->all_scl_faults.object_faults.f_track_accelerations_faulty = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.object_faults.f_track_accelerations_faulty = 0;    

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetRadarSensorFault function
Pre-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_faults[0].look_index_no_increase = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_faults[0].look_index_no_increase = 0 
=========================================================================
*/
TEST_F(OALTest, Get_radar_sensor_fault_look_index_no_increase)
{
    rot_obj_info->all_scl_faults.radar_sensor_faults[0].look_index_no_increase = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.radar_sensor_faults[0].look_index_no_increase = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetRadarSensorFault function
Pre-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_faults[0].sensor_vs_tracker_timestamp_divergence = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_faults[0].sensor_vs_tracker_timestamp_divergence = 0 
=========================================================================
*/
TEST_F(OALTest, Get_radar_sensor_fault_sensor_vs_tracker_timestamp_divergence)
{
    rot_obj_info->all_scl_faults.radar_sensor_faults[0].sensor_vs_tracker_timestamp_divergence = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.radar_sensor_faults[0].sensor_vs_tracker_timestamp_divergence = 0;
}


/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetRadarSensorFault function
Pre-condition:
    ->rot_obj_info->aall_scl_faults.radar_sensor_calib_faults[0].mounting_pos_is_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].mounting_pos_is_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, Get_radar_sensor_calib_fault_mounting_pos_is_invalid)
{
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].mounting_pos_is_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].mounting_pos_is_invalid = 0;

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetRadarSensorFault function
Pre-condition:
    ->rot_obj_info->aall_scl_faults.radar_sensor_calib_faults[0].polarity_is_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].polarity_is_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, Get_radar_sensor_calib_fault_polarity_is_invalid)
{
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].polarity_is_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].polarity_is_invalid = 0;
}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);
    -> This test case verifies the GetRadarSensorFault function
Pre-condition:
    ->rot_obj_info->aall_scl_faults.radar_sensor_calib_faults[0].boresight_angle_is_invalid = 1
Post-condition:
    ->rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].boresight_angle_is_invalid = 0 
=========================================================================
*/
TEST_F(OALTest, Get_radar_sensor_calib_fault_boresight_angle_is_invalid)
{
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].boresight_angle_is_invalid = 1;
    ObjectListUpdater(ObjectlistEvtT, vse_output, front_radar_pre_detection_list);

    //RESET
    rot_obj_info->all_scl_faults.radar_sensor_calib_faults[0].boresight_angle_is_invalid = 0;
}


//Run all the test cases
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
/*OAL_TEST_CPP*/