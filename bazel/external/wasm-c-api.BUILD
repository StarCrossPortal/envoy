load("@rules_cc//cc:defs.bzl", "cc_library")

licenses(["notice"])  # Apache 2

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "wasmtime_lib",
    hdrs = [
        "include/wasm.h",
    ],
    include_prefix = "wasmtime",
    deps = [
        "@com_github_wasmtime//:rust_c_api",
    ],
)

cc_library(
    name = "wasmer_lib",
    hdrs = [
        "include/wasm.h",
    ],
    include_prefix = "wasmer",
    deps = [
        "@com_github_wasmer//:rust_c_api",
    ],
)
