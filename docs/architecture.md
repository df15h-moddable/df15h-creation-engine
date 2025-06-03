# Architecture

An overview of the basics, for orientation.

From a modder's perspective, Creation Engine games have two main layers ...

- platform (e.g. `Skyrim.exe`) : C++ executables authored in Microsoft Visual Studio.
- plugins (e.g. `Skyrim.esm`) : bundles of data ("forms") and assets authored in Bethesda's Creation Kit.

## Platform

...

## Plugins

There are many variations, but for the sake of conceptual simplicity, the prototypical pattern is ...

- Elder Scrolls Plugin (ESP, `.esp`) : a data file loaded directly by the engine.
- Bethesda Software Archive (BSA, `.bsa`) : an asset file loaded indirectly via reference by a plugin.

Yes, the plugins in Fallout and Starfield are also called ESPs (or ESMs, ESLs, etc).

- plugin : Contains "form" data that describes everything about the world -- actors, ai packages, armors, cells (interior, exterior), outfits, quests, weapons, etc.
- archive :  Contains assets that more tangibly realize the objects described in the plugin -- animations, audio, meshes, textures, etc -- and compiled Papyrus scripts.

There is no conceptual difference between the content of the base game, its DLCs, and community mods. For example ...

- `Fallout4.esm` (an ESP flagged "master")
- `DLCNukaWorld.esm`
- `SS2.esm` (kinggath's "Sim Settlements" 2 mod)
- `Eli_RV DC Home.esp` (Elianora's "Outfield Retreat" player home mod)
