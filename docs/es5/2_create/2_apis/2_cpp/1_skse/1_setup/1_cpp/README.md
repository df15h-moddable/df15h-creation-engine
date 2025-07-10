# Setup C++

## Summary

1. SKSE and most plugin projects are built (at a high level) using the Microsoft Visual Studio IDE.
2. SKSE and most plugin projects are built (at a low level) using the Microsoft vcpkg package manager.
3. vcpkg can be used with the CMake or MSBuild build systems.
4. C++ code can be compiled with Microsoft Visual C++, GNU Compiler Collection (aka GCC), or Clang.
5. Popular IDE choices are Microsoft Visual Studio, Microsoft Visual Studio Code, or JetBrains CLion.

In other words ...

1. Understand how SKSE developers use Microsoft Visual Studio, including artifacts such as `.sln` files.
2. Use vcpkg to manage project dependencies (e.g. CommonLibSSE-NG).
3. Use CMake or MSBuild (or Gradle or Xmake, etc) to build projects.
4. Use Microsoft Visual C++, GNU Compiler Collection (aka GCC), or Clang to compile projects.
5. Use Microsoft Visual Studio, Microsoft Visual Studio Code, or JetBrains CLion to author and manage projects.

## Reference

- [awesome-cpp](https://github.com/fffaraz/awesome-cpp) by fffaraz @ github.