# Binary Ninja C++ Plugin Template

This repository is meant to serve as a template for bootstrapping Binary Ninja
plugins written in C++.

## Get Started

To get started, simply clone the repository and the vendored API submodule:

```sh
git clone --recursive git@github.com:jonpalmisc/bn_cpp_template.git
```

If you prefer to not use the vendored API submodule, you can pass
`-DBN_VENDOR_API=0` when invoking CMake and configure your API setup manually.

## Building

Simply configure the project using CMake, then build:

```sh
cmake -S . -B build # -GNinja ...
cmake --build build
```
