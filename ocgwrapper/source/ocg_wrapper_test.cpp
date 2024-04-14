#ifndef OCG_TEST_CPP
#define OCG_TEST_CPP
/*
* ===================================================================================
* SOURCE_FILE: ocg_wrapper.cpp
* TESTING_FILE : ocg_wrapper.cpp
* ===================================================================================
* Copyright 2023 Aptiv, Inc., All Rights Reserved.
* Aptiv Confidential
* -----------------------------------------------------------------------------------
* ===================================================================================
*/

#include <gtest/gtest.h>
#include "ocg_wrapper_test.hpp"
#include "ocg_wrapper.h"
#include "mock_ocg.hpp"
#include "rspp_detection_motion_status.h"

extern ocg::OCG_Inputs_T ocg_in;

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> Ocg_Wrapper:- Function:- InitialiseOcg;
    -> This testcase verifies that whether the "ocg_in.detection_list.detections" is set zero successfully or not
Pre-condition:input parameters :- &ocg_in.detection_list.detections
Expected output:-Copied successfully into &oocg_in.detection_list.detections
=========================================================================
*/
TEST_F(OcgWrapperTest,InitialiseOcg_memset){

    int8_t Expected_value=0;

    //Execute the 'InitialiseOcg' function with no parameters
    InitialiseOcg();

    // Validate the expected outputs by comparing with ocg_in.detection_list signals.
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.cos_vcs_az, Expected_value)
        << "Error: cos_vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.f_azimuth_error_stat_mov, Expected_value)
        << "Error: f_azimuth_error_stat_mov mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.f_ok_to_use, Expected_value)
        << "Error: f_ok_to_use mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.global_id, Expected_value)
        << "Error: global_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.motion_status, Expected_value)
        << "Error: motion_status mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.next_sorted_idx, Expected_value)
        << "Error: next_sorted_idx mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.prev_sorted_idx, Expected_value)
        << "Error: prev_sorted_idx mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.range_rate_compensated, Expected_value)
        << "Error: range_rate_compensated mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.sin_vcs_az, Expected_value)
        << "Error: sin_vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.std_range_rate_compensated_scm, Expected_value)
        << "Error: std_range_rate_compensated_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.std_vcs_az_scm, Expected_value)
        << "Error: std_vcs_az_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_az, Expected_value)
        << "Error: vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_cross_covariances_scm[5], Expected_value)
        << "Error: vcs_cross_covariances_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_cov_scm[2][2], Expected_value)
        << "Error: vcs_position_cov_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_x, Expected_value)
        << "Error: vcs_position_x mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_y, Expected_value)
        << "Error: vcs_position_y mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.azimuth, Expected_value)
        << "Error: raw.azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.confid_azimuth, Expected_value)
        << "Error: raw.confid_azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.confid_elevation, Expected_value)
        << "Error: raw.confid_elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.det_id,Expected_value)
        << "Error: raw.det_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.elevation, Expected_value)
        << "Error: raw.elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_bistatic, Expected_value)
        << "Error: raw.f_bistatic mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_host_veh_clutter, Expected_value)
        << "Error: raw.f_host_veh_clutter mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_nd_target, Expected_value)
        << "Error: raw.f_nd_target mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_super_res,Expected_value)
        << "Error: raw.f_super_res mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.padding[2], Expected_value)
        << "Error: raw.padding mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.range, Expected_value)
        << "Error: raw.range mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.range_rate, Expected_value)
        << "Error: raw.range_rate mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.rcs, Expected_value)
        << "Error: raw.rcs mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.sensor_id, Expected_value)
        << "Error: raw.sensor_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.snr,Expected_value)
        << "Error: raw.snr mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_azimuth, Expected_value)
        << "Error: raw.std_azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_elevation, Expected_value)
        << "Error: raw.std_elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_range, Expected_value)
        << "Error: raw.std_range mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_range_rate, Expected_value)
        << "Error: raw.std_range_rate mismatch";
    EXPECT_EQ(ocg_in.detection_list.number_of_valid_detections,Expected_value)
        << "Error: number_of_valid_detections mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_det_idx_max,Expected_value)
        << "Error: vcslong_det_idx_max mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_det_idx_min,Expected_value)
        << "Error: vcslong_det_idx_min mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_sorted_ref_det_idx[33],Expected_value)
        << "Error: vcslong_sorted_ref_det_idx mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.ant_sens_SCS_azim[18],Expected_value)
    << "Error: ant_sens_SCS_azim[18] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.ant_sens_SCS_sq_rng_50[18],Expected_value)
        << "Error: ant_sens_SCS_sq_rng_50[18] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.f_read_cdc_data, Expected_value)
        << "Error: f_read_cdc_data mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_max_az_rad[4], Expected_value)
        << "Error: fov_max_az_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_max_el_rad[4], Expected_value)
        << "Error: fov_max_el_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_min_az_rad[4], Expected_value)
        << "Error: fov_min_az_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_min_el_rad[4], Expected_value)
        << "Error: fov_min_el_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.id, Expected_value)
        << "Error: id mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.interior_fov[4], Expected_value)
        << "Error: interior_fov[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.age_threshold, Expected_value)
        << "Error: internal_reflections.age_threshold mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.azimuth_tolerance,Expected_value)
        << "Error: internal_reflections.azimuth_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.f_enable, Expected_value)
        << "Error: internal_reflections.f_enable mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.max_abs_range_rate, Expected_value)
        << "Error: internal_reflections.max_abs_range_rate mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.min_host_vel, Expected_value)
        << "Error: internal_reflections.min_host_vel mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.occurrence_lowerlimit, Expected_value)
        << "Error: internal_reflections.occurrence_lowerlimit mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.occurrence_threshold, Expected_value)
        << "Error: internal_reflections.occurrence_threshold mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.padding[1], Expected_value)
        << "Error: internal_reflections.padding[1] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.range_max, Expected_value)
        << "Error: internal_reflections.range_max mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.range_tolerance, Expected_value)
        << "Error: internal_reflections.range_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.rcs_max, Expected_value)
        << "Error: internal_reflections.rcs_max mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.rcs_tolerance, Expected_value)
        << "Error: internal_reflections.rcs_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.left_fov_normal[4], Expected_value)
        << "Error: left_fov_normal[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.min_aliaised_range_rate[4], Expected_value)
        << "Error: min_aliaised_range_rate[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_location, Expected_value)
        << "Error: mounting_location mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_boresight_azimuth_angle, Expected_value)
        << "Error: mounting_position.vcs_boresight_azimuth_angle mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_boresight_elevation_angle, Expected_value)
        << "Error: mounting_position.vcs_boresight_elevation_angle mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.height, Expected_value)
        << "Error: mounting_position.vcs_position.height mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.lateral, Expected_value)
        << "Error: mounting_position.vcs_position.lateral mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.longitudinal, Expected_value)
        << "Error: mounting_position.vcs_position.longitudinal mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.padding[5], Expected_value)
        << "Error: padding[5] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.polarity, Expected_value)
        << "Error: polarity mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.range_limits[4], Expected_value)
        << "Error: range_limits[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.right_fov_normal[4], Expected_value)
        << "Error: right_fov_normal[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.sensor_sw_version, Expected_value)
        << "Error: sensor_sw_version mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.sensor_type, Expected_value)
        << "Error: sensor_type mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.f_ant_sens_available, Expected_value)
        << "Error: f_ant_sens_available mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.f_ant_sens_degraded,Expected_value)
        << "Error: f_ant_sens_degraded mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.first_detection_list_idx, Expected_value)
        << "Error: first_detection_list_idx mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.is_valid, Expected_value)
        << "Error: is_valid mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.look_id, Expected_value)
        << "Error: look_id mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.look_index, Expected_value)
        << "Error: look_index mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.number_of_valid_detections, Expected_value)
        << "Error: number_of_valid_detections mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.padding[2], Expected_value)
        << "Error: padding[2] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.time_since_measurement_s, Expected_value)
        << "Error: time_since_measurement_s mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.timestamp_us,Expected_value)
        << "Error: timestamp_us mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vcs_velocity.lateral,Expected_value)
        << "Error: vcs_velocity.lateral mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vcs_velocity.longitudinal, Expected_value)
        << "Error: vcs_velocity.longitudinal mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vehicle_speed_calc_mps, Expected_value)
        << "Error: vehicle_speed_calc_mps mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.yaw_rate_calc_dps,Expected_value)
        << "Error: yaw_rate_calc_dps mismatch";
    EXPECT_EQ(ocg_in.host.vehicle_index,Expected_value)
        << "Error: vehicle_index mismatch";
    EXPECT_EQ(ocg_in.host.speed, Expected_value)
        << "Error: speed mismatch";
    EXPECT_EQ(ocg_in.host.vcs_speed, Expected_value)
        << "Error: vcs_speed mismatch";
    EXPECT_EQ(ocg_in.host.acceleration, Expected_value)
        << "Error: acceleration mismatch";
    EXPECT_EQ(ocg_in.host.vcs_lat_acceleration, Expected_value)
        << "Error: vcs_lat_acceleration mismatch";
    EXPECT_EQ(ocg_in.host.vcs_long_acceleration, Expected_value)
        << "Error: vcs_long_acceleration mismatch";
    EXPECT_EQ(ocg_in.host.yaw_rate_rad, Expected_value)
        << "Error: yaw_rate_rad mismatch";
    EXPECT_EQ(ocg_in.host.vcs_sideslip, Expected_value)
        << "Error: vcs_sideslip mismatch";
    EXPECT_EQ(ocg_in.host.curvature_rear, Expected_value)
        << "Error: curvature_rear mismatch";
    EXPECT_EQ(ocg_in.host.dist_rear_axle_to_vcs_m, Expected_value)
        << "Error: dist_rear_axle_to_vcs_m mismatch";
    EXPECT_EQ(ocg_in.host.rear_cornering_compliance, Expected_value)
        << "Error: rear_cornering_compliance mismatch";
    EXPECT_EQ(ocg_in.host.speed_correction_factor, Expected_value)
        << "Error: speed_correction_factor mismatch";
    EXPECT_EQ(ocg_in.host.speed_qf, Expected_value)
        << "Error: speed_qf mismatch";
    EXPECT_EQ(ocg_in.host.yaw_rate_qf, Expected_value)
        << "Error: yaw_rate_qf mismatch";
    EXPECT_EQ(ocg_in.host.lat_accel_qf, Expected_value)
        << "Error: lat_accel_qf mismatch";
    EXPECT_EQ(ocg_in.host.long_accel_qf, Expected_value)
        << "Error: long_accel_qf mismatch";

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> Ocg_Wrapper:- Function:- AdaptOcgInputs(rspp_info);
    -> This testcase verifies that whether the "rspp_info.RSPP_Detection_List.detections" is copied successfully into ocg_in.detection_list.detections or not
Pre-condition:input parameters :- &ocg_in.detection_list.detections
Expected output:-Copied successfully into &oocg_in.detection_list.detections
=========================================================================
*/
TEST_F(OcgWrapperTest,AdaptOcgInputs_detection_list){

    rspp_info.RSPP_Detection_List.detections[0].processed.cos_vcs_az = 22.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.f_azimuth_error_stat_mov = true;
    rspp_info.RSPP_Detection_List.detections[0].processed.f_ok_to_use = true;
    rspp_info.RSPP_Detection_List.detections[0].processed.global_id = 27;
    rspp_info.RSPP_Detection_List.detections[0].processed.motion_status = rspp_variant_D::RSPP_Detection_Motion_Status_T::RSPP_DETECTION_MOTION_STATUS_MOVING;
    rspp_info.RSPP_Detection_List.detections[0].processed.next_sorted_idx = 17;
    rspp_info.RSPP_Detection_List.detections[0].processed.prev_sorted_idx = 56;
    rspp_info.RSPP_Detection_List.detections[0].processed.range_rate_compensated = 22.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.sin_vcs_az = 45.33f;
    rspp_info.RSPP_Detection_List.detections[0].processed.std_range_rate_compensated_scm = 14.5f;
    rspp_info.RSPP_Detection_List.detections[0].processed.std_vcs_az_scm = 2.34f;
    rspp_info.RSPP_Detection_List.detections[0].processed.vcs_az = 22.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.vcs_cross_covariances_scm[5] = 24.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_cov_scm[2][2] = 22.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_x = 15.0f;
    rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_y = 20.0f;
    rspp_info.RSPP_Detection_List.detections[0].raw.azimuth = 78.0f;
    rspp_info.RSPP_Detection_List.detections[0].raw.confid_azimuth = 5;
    rspp_info.RSPP_Detection_List.detections[0].raw.confid_elevation = 2;
    rspp_info.RSPP_Detection_List.detections[0].raw.det_id = 55;
    rspp_info.RSPP_Detection_List.detections[0].raw.elevation = 41.0f;
    rspp_info.RSPP_Detection_List.detections[0].raw.f_bistatic = true;
    rspp_info.RSPP_Detection_List.detections[0].raw.f_host_veh_clutter = true;
    rspp_info.RSPP_Detection_List.detections[0].raw.f_nd_target = false;
    rspp_info.RSPP_Detection_List.detections[0].raw.f_super_res = true;
    rspp_info.RSPP_Detection_List.detections[0].raw.padding[2] = 31;
    rspp_info.RSPP_Detection_List.detections[0].raw.range = 2.13f;
    rspp_info.RSPP_Detection_List.detections[0].raw.range_rate = 3.12f;
    rspp_info.RSPP_Detection_List.detections[0].raw.rcs = 1.12f;
    rspp_info.RSPP_Detection_List.detections[0].raw.sensor_id = 23;
    rspp_info.RSPP_Detection_List.detections[0].raw.snr = 26.0f;
    rspp_info.RSPP_Detection_List.detections[0].raw.std_azimuth = 0.3f;
    rspp_info.RSPP_Detection_List.detections[0].raw.std_elevation = 0.0f;
    rspp_info.RSPP_Detection_List.detections[0].raw.std_range = 1.7f;
    rspp_info.RSPP_Detection_List.detections[0].raw.std_range_rate = 24.5f;
    rspp_info.RSPP_Detection_List.number_of_valid_detections = 10;
    rspp_info.RSPP_Detection_List.vcslong_det_idx_max = 5;
    rspp_info.RSPP_Detection_List.vcslong_det_idx_min = 1;
    rspp_info.RSPP_Detection_List.vcslong_sorted_ref_det_idx[33] = 28;

    //Execute the 'AdaptOcgInputs' function with specified parameters
    AdaptOcgInputs(rspp_info);

    // Validate the expected outputs by comparing Ocg rspp_info.RSPP_Detection_List signals with the ocg_in.detection_list.
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.cos_vcs_az, rspp_info.RSPP_Detection_List.detections[0].processed.cos_vcs_az)
        << "Error: cos_vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.f_azimuth_error_stat_mov, rspp_info.RSPP_Detection_List.detections[0].processed.f_azimuth_error_stat_mov)
        << "Error: f_azimuth_error_stat_mov mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.f_ok_to_use, rspp_info.RSPP_Detection_List.detections[0].processed.f_ok_to_use)
        << "Error: f_ok_to_use mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.global_id, rspp_info.RSPP_Detection_List.detections[0].processed.global_id)
        << "Error: global_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.motion_status, rspp_info.RSPP_Detection_List.detections[0].processed.motion_status)
        << "Error: motion_status mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.next_sorted_idx, rspp_info.RSPP_Detection_List.detections[0].processed.next_sorted_idx)
        << "Error: next_sorted_idx mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.prev_sorted_idx, rspp_info.RSPP_Detection_List.detections[0].processed.prev_sorted_idx)
        << "Error: prev_sorted_idx mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.range_rate_compensated, rspp_info.RSPP_Detection_List.detections[0].processed.range_rate_compensated)
        << "Error: range_rate_compensated mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.sin_vcs_az, rspp_info.RSPP_Detection_List.detections[0].processed.sin_vcs_az)
        << "Error: sin_vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.std_range_rate_compensated_scm, rspp_info.RSPP_Detection_List.detections[0].processed.std_range_rate_compensated_scm)
        << "Error: std_range_rate_compensated_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.std_vcs_az_scm, rspp_info.RSPP_Detection_List.detections[0].processed.std_vcs_az_scm)
        << "Error: std_vcs_az_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_az, rspp_info.RSPP_Detection_List.detections[0].processed.vcs_az)
        << "Error: vcs_az mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_cross_covariances_scm[5], rspp_info.RSPP_Detection_List.detections[0].processed.vcs_cross_covariances_scm[5])
        << "Error: vcs_cross_covariances_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_cov_scm[2][2], rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_cov_scm[2][2])
        << "Error: vcs_position_cov_scm mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_x, rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_x)
        << "Error: vcs_position_x mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].processed.vcs_position_y, rspp_info.RSPP_Detection_List.detections[0].processed.vcs_position_y)
        << "Error: vcs_position_y mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.azimuth, rspp_info.RSPP_Detection_List.detections[0].raw.azimuth)
        << "Error: raw.azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.confid_azimuth, rspp_info.RSPP_Detection_List.detections[0].raw.confid_azimuth)
        << "Error: raw.confid_azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.confid_elevation, rspp_info.RSPP_Detection_List.detections[0].raw.confid_elevation)
        << "Error: raw.confid_elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.det_id, rspp_info.RSPP_Detection_List.detections[0].raw.det_id)
        << "Error: raw.det_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.elevation, rspp_info.RSPP_Detection_List.detections[0].raw.elevation)
        << "Error: raw.elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_bistatic, rspp_info.RSPP_Detection_List.detections[0].raw.f_bistatic)
        << "Error: raw.f_bistatic mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_host_veh_clutter, rspp_info.RSPP_Detection_List.detections[0].raw.f_host_veh_clutter)
        << "Error: raw.f_host_veh_clutter mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_nd_target, rspp_info.RSPP_Detection_List.detections[0].raw.f_nd_target)
        << "Error: raw.f_nd_target mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.f_super_res, rspp_info.RSPP_Detection_List.detections[0].raw.f_super_res)
        << "Error: raw.f_super_res mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.padding[2], rspp_info.RSPP_Detection_List.detections[0].raw.padding[2])
        << "Error: raw.padding mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.range, rspp_info.RSPP_Detection_List.detections[0].raw.range)
        << "Error: raw.range mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.range_rate, rspp_info.RSPP_Detection_List.detections[0].raw.range_rate)
        << "Error: raw.range_rate mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.rcs, rspp_info.RSPP_Detection_List.detections[0].raw.rcs)
        << "Error: raw.rcs mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.sensor_id, rspp_info.RSPP_Detection_List.detections[0].raw.sensor_id)
        << "Error: raw.sensor_id mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.snr, rspp_info.RSPP_Detection_List.detections[0].raw.snr)
        << "Error: raw.snr mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_azimuth, rspp_info.RSPP_Detection_List.detections[0].raw.std_azimuth)
        << "Error: raw.std_azimuth mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_elevation, rspp_info.RSPP_Detection_List.detections[0].raw.std_elevation)
        << "Error: raw.std_elevation mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_range, rspp_info.RSPP_Detection_List.detections[0].raw.std_range)
        << "Error: raw.std_range mismatch";
    EXPECT_EQ(ocg_in.detection_list.detections[0].raw.std_range_rate, rspp_info.RSPP_Detection_List.detections[0].raw.std_range_rate)
        << "Error: raw.std_range_rate mismatch";
    EXPECT_EQ(ocg_in.detection_list.number_of_valid_detections, rspp_info.RSPP_Detection_List.number_of_valid_detections)
        << "Error: number_of_valid_detections mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_det_idx_max, rspp_info.RSPP_Detection_List.vcslong_det_idx_max)
        << "Error: vcslong_det_idx_max mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_det_idx_min, rspp_info.RSPP_Detection_List.vcslong_det_idx_min)
        << "Error: vcslong_det_idx_min mismatch";
    EXPECT_EQ(ocg_in.detection_list.vcslong_sorted_ref_det_idx[33], rspp_info.RSPP_Detection_List.vcslong_sorted_ref_det_idx[33])
        << "Error: vcslong_sorted_ref_det_idx mismatch";

}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> Ocg_Wrapper:- Function:- AdaptOcgInputs(rspp_info);
    -> This testcase verifies that whether the "rspp_info.Rspp_Sensor_Info" is copied successfully into ocg_in.sensors[0] or not
Pre-condition:input parameters :- &ocg_in.sensors
Expected output:-Copied successfully into &ocg_in.sensors[0]
=========================================================================
*/
TEST_F(OcgWrapperTest,AdaptOcgInputs_Sensor_Info){

    rspp_info.Rspp_Sensor_Info->constant.ant_sens_SCS_azim[18] = 10.0f;
    rspp_info.Rspp_Sensor_Info->constant.ant_sens_SCS_sq_rng_50[18] = 20.0f;
    //rspp_info.Rspp_Sensor_Info->constant.dbin_res[4] = 30.0f;
    rspp_info.Rspp_Sensor_Info->constant.f_read_cdc_data = true;
    rspp_info.Rspp_Sensor_Info->constant.fov_max_az_rad[4] = 5.0f;
    rspp_info.Rspp_Sensor_Info->constant.fov_max_el_rad[4] = 5.0f;
    rspp_info.Rspp_Sensor_Info->constant.fov_min_az_rad[4] = 2.0f;
    rspp_info.Rspp_Sensor_Info->constant.fov_min_el_rad[4] = 2.0f;
    rspp_info.Rspp_Sensor_Info->constant.id = 10;
    rspp_info.Rspp_Sensor_Info->constant.interior_fov[4] = 6.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.age_threshold = 20;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.azimuth_tolerance = 11.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.f_enable = true;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.max_abs_range_rate = 30.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.min_host_vel = 3.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.occurrence_lowerlimit = 6.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.occurrence_threshold = 20.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.padding[1] = 3;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.range_max = 23.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.range_tolerance = 0.5f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.rcs_max = 15.0f;
    rspp_info.Rspp_Sensor_Info->constant.internal_reflections.rcs_tolerance = 12.0f;
    rspp_info.Rspp_Sensor_Info->constant.left_fov_normal[4] = 21.0f;
    rspp_info.Rspp_Sensor_Info->constant.min_aliaised_range_rate[4] = 2.0f;
    rspp_info.Rspp_Sensor_Info->constant.mounting_location = RSPP_MOUNTING_LOCATION_CENTER_FORWARD;
    rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_boresight_azimuth_angle = 12.0f;
    rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_boresight_elevation_angle = 15.0f;
    rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.height = 10.0f;
    rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.lateral = 2.0f;
    rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.longitudinal = 4.0f;
    rspp_info.Rspp_Sensor_Info->constant.padding[5] = 5;
    rspp_info.Rspp_Sensor_Info->constant.polarity = 1;
    rspp_info.Rspp_Sensor_Info->constant.range_limits[4] = 4.0f;
    rspp_info.Rspp_Sensor_Info->constant.sensor_sw_version = 2;
    rspp_info.Rspp_Sensor_Info->constant.sensor_type = RSPP_SENSOR_TYPE_SRR7_PLUS_RADAR;
    rspp_info.Rspp_Sensor_Info->variable.f_ant_sens_available = true;
    rspp_info.Rspp_Sensor_Info->variable.f_ant_sens_degraded = true;
    rspp_info.Rspp_Sensor_Info->variable.first_detection_list_idx = 10;
    rspp_info.Rspp_Sensor_Info->variable.is_valid = true;
    rspp_info.Rspp_Sensor_Info->variable.look_id = RSPP_DET_LOOK_ID_1;
    rspp_info.Rspp_Sensor_Info->variable.look_index = 10;
    rspp_info.Rspp_Sensor_Info->variable.number_of_valid_detections = 5;
    rspp_info.Rspp_Sensor_Info->variable.padding[2] = 0;
    rspp_info.Rspp_Sensor_Info->variable.time_since_measurement_s = 7.0f;
    rspp_info.Rspp_Sensor_Info->variable.timestamp_us = 10;
    rspp_info.Rspp_Sensor_Info->variable.vcs_velocity.lateral = 2.0f;
    rspp_info.Rspp_Sensor_Info->variable.vcs_velocity.longitudinal = 4.0f;
    rspp_info.Rspp_Sensor_Info->variable.vehicle_speed_calc_mps = 8.0f;
    rspp_info.Rspp_Sensor_Info->variable.yaw_rate_calc_dps = 12.0f;

    //Execute the 'AdaptOcgInputs' function with specified parameters
    AdaptOcgInputs(rspp_info);

    // Validate the expected outputs by comparing Ocg rspp_info.Rspp_Sensor_Info signals with the ocg_in.sensors.
    EXPECT_EQ(ocg_in.sensors[0].constant.ant_sens_SCS_azim[18], rspp_info.Rspp_Sensor_Info->constant.ant_sens_SCS_azim[18])
    << "Error: ant_sens_SCS_azim[18] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.ant_sens_SCS_sq_rng_50[18], rspp_info.Rspp_Sensor_Info->constant.ant_sens_SCS_sq_rng_50[18])
        << "Error: ant_sens_SCS_sq_rng_50[18] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.f_read_cdc_data, rspp_info.Rspp_Sensor_Info->constant.f_read_cdc_data)
        << "Error: f_read_cdc_data mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_max_az_rad[4], rspp_info.Rspp_Sensor_Info->constant.fov_max_az_rad[4])
        << "Error: fov_max_az_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_max_el_rad[4], rspp_info.Rspp_Sensor_Info->constant.fov_max_el_rad[4])
        << "Error: fov_max_el_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_min_az_rad[4], rspp_info.Rspp_Sensor_Info->constant.fov_min_az_rad[4])
        << "Error: fov_min_az_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.fov_min_el_rad[4], rspp_info.Rspp_Sensor_Info->constant.fov_min_el_rad[4])
        << "Error: fov_min_el_rad[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.id, rspp_info.Rspp_Sensor_Info->constant.id)
        << "Error: id mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.interior_fov[4], rspp_info.Rspp_Sensor_Info->constant.interior_fov[4])
        << "Error: interior_fov[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.age_threshold, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.age_threshold)
        << "Error: internal_reflections.age_threshold mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.azimuth_tolerance, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.azimuth_tolerance)
        << "Error: internal_reflections.azimuth_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.f_enable, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.f_enable)
        << "Error: internal_reflections.f_enable mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.max_abs_range_rate, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.max_abs_range_rate)
        << "Error: internal_reflections.max_abs_range_rate mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.min_host_vel, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.min_host_vel)
        << "Error: internal_reflections.min_host_vel mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.occurrence_lowerlimit, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.occurrence_lowerlimit)
        << "Error: internal_reflections.occurrence_lowerlimit mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.occurrence_threshold, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.occurrence_threshold)
        << "Error: internal_reflections.occurrence_threshold mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.padding[1], rspp_info.Rspp_Sensor_Info->constant.internal_reflections.padding[1])
        << "Error: internal_reflections.padding[1] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.range_max, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.range_max)
        << "Error: internal_reflections.range_max mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.range_tolerance, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.range_tolerance)
        << "Error: internal_reflections.range_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.rcs_max, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.rcs_max)
        << "Error: internal_reflections.rcs_max mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.internal_reflections.rcs_tolerance, rspp_info.Rspp_Sensor_Info->constant.internal_reflections.rcs_tolerance)
        << "Error: internal_reflections.rcs_tolerance mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.left_fov_normal[4], rspp_info.Rspp_Sensor_Info->constant.left_fov_normal[4])
        << "Error: left_fov_normal[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.min_aliaised_range_rate[4], rspp_info.Rspp_Sensor_Info->constant.min_aliaised_range_rate[4])
        << "Error: min_aliaised_range_rate[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_location, rspp_info.Rspp_Sensor_Info->constant.mounting_location)
        << "Error: mounting_location mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_boresight_azimuth_angle, rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_boresight_azimuth_angle)
        << "Error: mounting_position.vcs_boresight_azimuth_angle mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_boresight_elevation_angle, rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_boresight_elevation_angle)
        << "Error: mounting_position.vcs_boresight_elevation_angle mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.height, rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.height)
        << "Error: mounting_position.vcs_position.height mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.lateral, rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.lateral)
        << "Error: mounting_position.vcs_position.lateral mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.mounting_position.vcs_position.longitudinal, rspp_info.Rspp_Sensor_Info->constant.mounting_position.vcs_position.longitudinal)
        << "Error: mounting_position.vcs_position.longitudinal mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.padding[5], rspp_info.Rspp_Sensor_Info->constant.padding[5])
        << "Error: padding[5] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.polarity, rspp_info.Rspp_Sensor_Info->constant.polarity)
        << "Error: polarity mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.range_limits[4], rspp_info.Rspp_Sensor_Info->constant.range_limits[4])
        << "Error: range_limits[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.right_fov_normal[4], rspp_info.Rspp_Sensor_Info->constant.right_fov_normal[4])
        << "Error: right_fov_normal[4] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.sensor_sw_version, rspp_info.Rspp_Sensor_Info->constant.sensor_sw_version)
        << "Error: sensor_sw_version mismatch";
    EXPECT_EQ(ocg_in.sensors[0].constant.sensor_type, rspp_info.Rspp_Sensor_Info->constant.sensor_type)
        << "Error: sensor_type mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.f_ant_sens_available, rspp_info.Rspp_Sensor_Info->variable.f_ant_sens_available)
        << "Error: f_ant_sens_available mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.f_ant_sens_degraded, rspp_info.Rspp_Sensor_Info->variable.f_ant_sens_degraded)
        << "Error: f_ant_sens_degraded mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.first_detection_list_idx, rspp_info.Rspp_Sensor_Info->variable.first_detection_list_idx)
        << "Error: first_detection_list_idx mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.is_valid, rspp_info.Rspp_Sensor_Info->variable.is_valid)
        << "Error: is_valid mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.look_id, rspp_info.Rspp_Sensor_Info->variable.look_id)
        << "Error: look_id mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.look_index, rspp_info.Rspp_Sensor_Info->variable.look_index)
        << "Error: look_index mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.number_of_valid_detections, rspp_info.Rspp_Sensor_Info->variable.number_of_valid_detections)
        << "Error: number_of_valid_detections mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.padding[2], rspp_info.Rspp_Sensor_Info->variable.padding[2])
        << "Error: padding[2] mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.time_since_measurement_s, rspp_info.Rspp_Sensor_Info->variable.time_since_measurement_s)
        << "Error: time_since_measurement_s mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.timestamp_us, rspp_info.Rspp_Sensor_Info->variable.timestamp_us)
        << "Error: timestamp_us mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vcs_velocity.lateral, rspp_info.Rspp_Sensor_Info->variable.vcs_velocity.lateral)
        << "Error: vcs_velocity.lateral mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vcs_velocity.longitudinal, rspp_info.Rspp_Sensor_Info->variable.vcs_velocity.longitudinal)
        << "Error: vcs_velocity.longitudinal mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.vehicle_speed_calc_mps, rspp_info.Rspp_Sensor_Info->variable.vehicle_speed_calc_mps)
        << "Error: vehicle_speed_calc_mps mismatch";
    EXPECT_EQ(ocg_in.sensors[0].variable.yaw_rate_calc_dps, rspp_info.Rspp_Sensor_Info->variable.yaw_rate_calc_dps)
        << "Error: yaw_rate_calc_dps mismatch";


}

/*
=========================================================================
Test Requirement:{}
Test Description:
    -> Ocg_Wrapper:- Function:- AdaptOcgInputs(rspp_info);
    -> This testcase verifies that whether the "rspp_info.RSPP_Host_Data" is copied successfully into ocg_in.host or not
Pre-condition:input parameters :-&ocg_in.host
Expected output:-Copied successfully into &ocg_in.host
=========================================================================
*/
TEST_F(OcgWrapperTest,AdaptOcgInputs_host_data){

    rspp_info.RSPP_Host_Data.vehicle_index=2;
    rspp_info.RSPP_Host_Data.speed=2.0f;
    rspp_info.RSPP_Host_Data.vcs_speed=3.0f;
    rspp_info.RSPP_Host_Data.acceleration=4.0f;
    rspp_info.RSPP_Host_Data.vcs_lat_acceleration=5.0f;
    rspp_info.RSPP_Host_Data.vcs_long_acceleration=6.0f;
    rspp_info.RSPP_Host_Data.yaw_rate_rad=7.0f;
    rspp_info.RSPP_Host_Data.vcs_sideslip=8.0f;
    rspp_info.RSPP_Host_Data.curvature_rear=9.0f;
    rspp_info.RSPP_Host_Data.dist_rear_axle_to_vcs_m=10.0f;
    rspp_info.RSPP_Host_Data.rear_cornering_compliance=11.0f;
    rspp_info.RSPP_Host_Data.speed_correction_factor=12.0f;
    rspp_info.RSPP_Host_Data.speed_qf=3;
    rspp_info.RSPP_Host_Data.yaw_rate_qf=4;
    rspp_info.RSPP_Host_Data.lat_accel_qf=5;
    rspp_info.RSPP_Host_Data.long_accel_qf=6;

    //Execute the 'AdaptOcgInputs' function with specified parameters
    AdaptOcgInputs(rspp_info);

    // Validate the expected outputs by comparing Ocg RSPP_Host_Data signals with the ocg_in.host.
    EXPECT_EQ(ocg_in.host.vehicle_index, rspp_info.RSPP_Host_Data.vehicle_index)
        << "Error: vehicle_index mismatch";
    EXPECT_EQ(ocg_in.host.speed, rspp_info.RSPP_Host_Data.speed)
        << "Error: speed mismatch";
    EXPECT_EQ(ocg_in.host.vcs_speed, rspp_info.RSPP_Host_Data.vcs_speed)
        << "Error: vcs_speed mismatch";
    EXPECT_EQ(ocg_in.host.acceleration, rspp_info.RSPP_Host_Data.acceleration)
        << "Error: acceleration mismatch";
    EXPECT_EQ(ocg_in.host.vcs_lat_acceleration, rspp_info.RSPP_Host_Data.vcs_lat_acceleration)
        << "Error: vcs_lat_acceleration mismatch";
    EXPECT_EQ(ocg_in.host.vcs_long_acceleration, rspp_info.RSPP_Host_Data.vcs_long_acceleration)
        << "Error: vcs_long_acceleration mismatch";
    EXPECT_EQ(ocg_in.host.yaw_rate_rad, rspp_info.RSPP_Host_Data.yaw_rate_rad)
        << "Error: yaw_rate_rad mismatch";
    EXPECT_EQ(ocg_in.host.vcs_sideslip, rspp_info.RSPP_Host_Data.vcs_sideslip)
        << "Error: vcs_sideslip mismatch";
    EXPECT_EQ(ocg_in.host.curvature_rear, rspp_info.RSPP_Host_Data.curvature_rear)
        << "Error: curvature_rear mismatch";
    EXPECT_EQ(ocg_in.host.dist_rear_axle_to_vcs_m, rspp_info.RSPP_Host_Data.dist_rear_axle_to_vcs_m)
        << "Error: dist_rear_axle_to_vcs_m mismatch";
    EXPECT_EQ(ocg_in.host.rear_cornering_compliance, rspp_info.RSPP_Host_Data.rear_cornering_compliance)
        << "Error: rear_cornering_compliance mismatch";
    EXPECT_EQ(ocg_in.host.speed_correction_factor, rspp_info.RSPP_Host_Data.speed_correction_factor)
        << "Error: speed_correction_factor mismatch";
    EXPECT_EQ(ocg_in.host.speed_qf, rspp_info.RSPP_Host_Data.speed_qf)
        << "Error: speed_qf mismatch";
    EXPECT_EQ(ocg_in.host.yaw_rate_qf, rspp_info.RSPP_Host_Data.yaw_rate_qf)
        << "Error: yaw_rate_qf mismatch";
    EXPECT_EQ(ocg_in.host.lat_accel_qf, rspp_info.RSPP_Host_Data.lat_accel_qf)
        << "Error: lat_accel_qf mismatch";
    EXPECT_EQ(ocg_in.host.long_accel_qf, rspp_info.RSPP_Host_Data.long_accel_qf)
        << "Error: long_accel_qf mismatch";
}


/*
=========================================================================
Test Requirement: {}
Test Description: 
    -> OcgWrapper---InitialiseOcg();
    -> This test case Verifies that the initilize function in the Ocg is called correctly.
Pre-condition: Ensure that the Ocg run is reset using 'Ocg_Test_Reset'.
Expected output: Expect that the Ocg run function flag is set to true after calling 'InitialiseOcg()'.
=========================================================================
*/
TEST_F(OcgWrapperTest,Ocg_initilize){

    // Pre-condition: Reset the OCG wrapper values to default.
    Ocg_Test_Reset();

    //Execute the 'InitialiseOcg' function with no parameters
    InitialiseOcg();

    // Expected output: Ensure that the 'ocg_initilize_function_called' flag is set to true.
    EXPECT_EQ(ocg_initilize_function_called,true)
        <<"Error:ocg_initilize_function_called is not set to true";
}

/*
=========================================================================
Test Requirement: {}
Test Description: f
    -> OcgWrapper---RunOcg();
    -> This test case Verifies that the step function in the Ocg is called correctly.
Pre-condition: Ensure that the Ocg run is reset using 'Ocg_Test_Reset'.
Expected output: Expect that the Ocg run function flag is set to true after calling 'RunOcg()'.
=========================================================================
*/
TEST_F(OcgWrapperTest,Ocg_Run){

    // Pre-condition: Reset the OCG wrapper values to default.
    Ocg_Test_Reset();

    //Execute the 'RunOcg' function with no parameters
    RunOcg();

    // Expected output: Ensure that the 'ocg_step_function_called' flag is set to true.
    EXPECT_EQ(ocg_step_function_called,true)
        <<"Error: ocg_step_function_called is not set to true";
}

/*
=========================================================================
Test Requirement: {}
Test Description: 
    -> OcgWrapper---GetOcgTimeStampValue();
    -> This test case Verifies that the step function in the Ocg is called correctly.
Pre-condition: Ensure that the Ocg run is reset using 'Ocg_Test_Reset'.
Expected output: Expect that the Ocg run function flag is set to true after calling 'RunOcg()'.
=========================================================================
*/
TEST_F(OcgWrapperTest, TimeStampValue)
{
    int ocg_time_value = GetOcgTimeStampValue(); 
    EXPECT_EQ(ocg_time_value, 0)
        <<"Error:Ocg time value didn't match";
}

//Main function to Run all the test cases
int main(int argc, char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

#endif /*OCG_TEST_CPP*/