package(default_visibility = ["//visibility:public"])
load("@rules_cc//cc:defs.bzl", "cc_test")

cc_library(
        name = "mocking",
        hdrs = glob(["mock_files/mock_ocg.hpp",]),
        includes  = ["mock_files"],
        strip_include_prefix = "mock_files",
)


cc_test(
    name = "ocgwrapper_ut",
    srcs = glob( ["source/ocg_wrapper_test.cpp",
                  "source/ocg_wrapper_test.hpp",
                  "mock_files/mock_iface_ocg.cpp",
            ]),
    copts = ["--coverage"],
    linkstatic=1,
    linkopts = ["--coverage",],
    deps = ["//Wrappers/BMW_SP25:Sp25_MRR_Tracker_Wrapper",
            "@gtest//:gtest_main",
            ":mocking",
           ],
)
