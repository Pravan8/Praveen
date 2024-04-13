#!/bin/bash

echo "Step 0: Removing old coverage Reports"
cd ../../
sudo rm -rf bazel-out/_coverage/_coverage_report.dat
sudo rm -rf coverage.info
sudo rm -rf coverage_report/index.html

cd -

# Step 1: Run Bazel for code coverage collection
echo "Step 1: Running Bazel for code coverage collection..."
bazel coverage --collect_code_coverage --instrumentation_filter //Wrappers/BMW_SP25:Gtest_Sp25_MRR_Tracker_Wrapper OAL_test
echo "Bazel coverage collection completed."

cd ../../

# Step 2: Generate LCOV report
echo "Step 2: Generating LCOV report..."
lcov --rc lcov_branch_coverage=1 --extract bazel-out/_coverage/_coverage_report.dat 'Wrappers/BMW_SP25/source/OAL.cpp' -o oal.info
echo "LCOV report generated."

# Step 3: Generate HTML report using genhtml
echo "Step 3: Generating HTML report using genhtml..."
genhtml --branch-coverage oal.info -o oal_report
echo "HTML report generated."

# Step 4: Open the generated HTML report in the default web browser
echo "Step 4: Opening the generated HTML report in the default web browser..."
xdg-open oal_report/index.html
echo "Process complete."


