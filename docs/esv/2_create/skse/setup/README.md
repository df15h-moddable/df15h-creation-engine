# Setup for Plugin Development

- SKSE is called a "script extender" because it extends Bethesda's Papyrus scripting API.
- But SKSE does more than that, because it also provides a C++ API.
- SKSE's C++ API can bind directly to the native C++ API of Bethesda's Creation Engine.
- Of course to do all this, SKSE itself is authored in C++.

To create an SKSE plugin ...

1. Set up a C++ development environment.
2. Obtain and build SKSE.
3. Obtain and apply Steamless to Skyrim.exe (to allow debug).
4. Create, build, and deploy an SKSE plugin.
