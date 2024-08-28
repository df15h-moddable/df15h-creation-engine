# How to Mod BGS CE

Trying to make sense (for myself) of the deep, dark, tangled jungle that is the (mostly undocumented) world of Creation Engine modding -- not only end-user configuration, but also how to create various kinds of mods (CK, Papyrus, C++) from scratch.

- BGS = Bethesda Game Studios
- CE = Creation Engine

## Contents

Core concepts and toolsets are common across all iterations ...

- ce : Creation Engine

However, there are subtle differences between each iteration ...

- esv : Elder Scrolls V Skyrim
- fo4 : Fallout 4
- sf : Starfield

## Orientation

Creation Engine modding has many facets and many specializations.
At the highest level, the materials in this repo are organized around the following layers ...

1. Creation Kit (ck) : Bethesda's drag-n-drop integrated development environment.
2. xEdit : A community tool for directly editing the raw form data saved by the Creation Kit.
3. Papyrus (psc) : Bethesda's proprietary scripting language.
4. Script Extender (cpp) : A community tool that both _extends_ Bethesda's Papyrus API (hence the name) _and_ adds an API for low-level C++ plugins.
