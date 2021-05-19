load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "hello-greet",
    srcs = ["hello-greet.cc"],
    hdrs = ["hello-greet.h"],
)

cc_binary(
    name = "human",
    srcs = ["human.cc"],
    deps = [
        "//person:person",
    ],
)


cc_binary(
    name = "hello-world",
    srcs = ["hello-world.cc"],
    deps = [
        ":hello-greet",
        "//lib:hello-time",
    ],
)

cc_binary(
    name = "world",
    srcs = ["world.c"],
)

cc_binary(
    name = "output",
    srcs = ["output.cc"],
)

cc_binary(
    name = "make-person",
    srcs = ["human.cc"],
)
