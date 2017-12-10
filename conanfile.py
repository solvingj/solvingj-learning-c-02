#!/usr/bin/env python
# -*- coding: utf-8 -*-

from conans import ConanFile

class LearningC02Conan(ConanFile):
    name = "learning_c_02"
    version = "0.1.0"
    description = "Learning project"
    generators = "cmake"
    url = "https://github.com/solvingj/learning-c-02"
    exports_sources = "include*", "src*"
    requires = "libuv/1.15.0@bincrafters/stable", \
        "libhandler/0.5@bincrafters/stable", \
        "Parson/0.1.0@bincrafters/stable"



