
1. Clean plugins.
2. Run xLODGen.
3. Generate grass pre-cache.
4. Run TexGen.

## Clean Plugins

1. [Clean and error check the load order with xEdit.](https://tes5edit.github.io/docs/7-mod-cleaning-and-error-checking.html)
2. Clean every plugin that LOOT suggests to clean.

Why ...?

- Ignore misinformation that cleaning any plugins is not needed, does not do anything, or causes problems.
- Cleaning of plugins that contain deleted [large references](https://dyndolod.info/Help/Large-References) is mandatory for the [large reference bugs workarounds](https://dyndolod.info/Help/Large-Reference-Bugs-Workarounds).
- ITMs are irrelevant in this context: [There are no intentional ITMs](https://tes5edit.github.io/docs/7-mod-cleaning-and-error-checking.html#TherearenointentionalITMs).

How ...?

- Follow the instructions in LOOT, or ...
- MO2 [Batch Plugin Cleaner](https://www.nexusmods.com/skyrimspecialedition/mods/59598).

## xLODGen

- Generate terrain LOD meshes and textures with xLODGen before generating the LOD mod with DynDOLOD,
as the terrain LOD meshes are used to optimize object LOD meshes.
- Existing object LOD or tree LOD meshes or textures do not affect the LOD mod generation with DynDOLOD
and will typically be overwritten by the generated output anyways.

## Grass Pre-Cache

For generating grass LOD, generate the grass pre-cache with No Grass In Objects before generating the LOD mod with DynDOLOD.

## Billboards

Do not install any 3rd party tree LOD billboards. Use TexGen to generate all desired LOD billboards.
