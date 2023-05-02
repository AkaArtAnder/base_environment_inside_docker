from conan import ConanFile


class GTestConan(ConanFile):
    name = "GTestConan"
    version = "1.0"
    settings = "os", "arch", "compiler", "build_type"
    generators = "CMakeToolchain", "CMakeDeps"
    requires = [("gtest/cci.20210126")]
