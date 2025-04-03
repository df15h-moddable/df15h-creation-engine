
# Far Object LOD Improvement

[Far Object LOD Improvement](https://www.nexusmods.com/fallout4/mods/61884) @ nexusmods.

DOES NOT BREAK PRECOMBINES.

## FO4LODGen

"By itself, the main file does nothing. You must regenerate Object LOD using FO4LODGen to see the added objects."

Required ...

1. TexGen (from DynDOLOD) to generate correct textures.
2. Synthesis [patcher](https://github.com/DoubleYouC/FOLIP) for FOLIP and HasDistantLOD patches.
3. [xLODGen](https://stepmodifications.org/forum/topic/13451-xlodgen-terrain-lod-beta-102-for-fnv-fo3-fo4-fo4vr-tes5-sse-tes5vr-enderal-enderalse/).
See [documentation](https://dyndolod.info/Help/xLODGen).

Documentation ...

- [LOD Generation Instructions](https://www.nexusmods.com/fallout4/articles/4162) by DoubleYou @ nexusmods.
- [Fallout 4 LOD Tutorial](https://www.youtube.com/watch?v=uyRkT_oBp5Q&list=PLKTiWHmFXWc4gciFpUjo9cy3bQrGTcmLb) by DoubleYou @ youtube.
- See also Luxor's [FO4LODGen Guide](https://www.nexusmods.com/fallout4/mods/49362), which includes FOLIP.

## Pregen

"There is an optional Pregenerated Object LOD file.
Generating your own LOD will be more performance friendly, mod compatible, and look better,
but this gets you very close without having to do all the extra legwork."

Regarding trees ...

- If you use a tree mod that provides LOD texture resources for _vanilla replacements_, the pregenerated LOD will use the tree mod's textures.
- This works out of the box with vanilla, Barren Trees, Luxor's Summer, Make Like a Tree, and probably others (those were the few tested).
- This method does not work for any tree mod that _adds_ new trees ( Boston Natural Surroundings, A Forest, etc).

## Config

Recommended settings, in `Fallout4Prefs.ini ` ...

```
[TerrainManager]
fBlockLevel0Distance=32768
fBlockLevel1Distance=65536
fBlockLevel2Distance=131072
fBlockMaximumDistance=262144
fSplitDistanceMult=1.000
```
