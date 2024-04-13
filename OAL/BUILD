package(default_visibility = ["//visibility:public"])
load("@rules_cc//cc:defs.bzl", "cc_test")


cc_library(
        name = "mocking",
        hdrs = glob(["mock_files/OAL_mock.hpp",]),
        includes  = ["mock_files"],
        strip_include_prefix = "mock_files",
)

cc_test(
    name = "OAL_test",
    srcs = glob( ["source/OAL_test.cpp",
                  "source/OAL_test.hpp",
                  "mock_files/OAL_mock.cpp",
            ]),
    copts = ["--coverage"],
    linkstatic=1,
    linkopts = ["--coverage",],
    deps = ["//Wrappers/BMW_SP25:Gtest_Sp25_MRR_Tracker_Wrapper",
            "@gtest//:gtest_main",
            ":mocking",
           ],
)
