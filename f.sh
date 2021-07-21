PATH=$PATH:/root/go/bin bazel build //source/exe:envoy-static -c opt --define wasm=wasmer
#cp bazel-bin/source/exe/envoy-static /usr/local/bin/envoy
