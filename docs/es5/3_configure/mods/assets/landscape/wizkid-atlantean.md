by WiZkiD.


## Complex Material

"From version 1.5 onward, Atlantean Landscape has full support for ENB complex material."

## Terrain Parallax Blending Fix

"I highly suggest to use Atlantean Landscape in combo with Terrain Parallax Blending Fix, this way you will have parallax on both landscape and on all models that require the "_p" texture. Terrain Parallax Blending Fix is required since terrain parallax normally disables the usual blending that the game does between two different textures and this causes annoying visual issues, as stated on its official desription page, Terrain Parallax Blending Fix plugin fixes that problem, making your landscape blend beautifully again!"

"Terrain Parallax Blending Fix is fundamental to achive a perfect landscape blending, install this patch and place it after both Atlantean Landscape.esp and Parallax TXST Fixes.esp --- Really important: use this patch instead of the one included inside Terrain Parallax Blending Fix official FOMOD
https://www.nexusmods.com/skyrimspecialedition/mods/88261"

## Load Order

"You should place the Atlantean Landscape.esp plugin at the bottom of your load order as it does not conflict with any plugins that need to be placed on that position."

## Related

Patches included in FOMOD ...

- Terrain Parallax Blending Fix
- Modular Patch Express
- Moss Rocks
- No Snow Under the Roof
- Skyrim Landscape and Water Fixes
- Snowy Surfaces Sound Collision and Aesthetics

Note, I've noticed the author, wizkid, still seems to prefer Better Dynamic Snow to Simpliciy of Snow (which therefore might not be tested).

Mentioned ...

- Enhanced Rocks and Mountains: "You can also use ERM meshes if you prefer but be sure to install the parallax version of that mod."

Recommended ...

- Blended Roads
- Snowy Surfaces Sound Collision and Aesthetics
- Landscape Fixes For Grass Mods
- Skyrim Landscape and Water Fixes

## ENB

Required ENB settings in enbseries.ini:

```
EnableTerrainParallax=false
EnableComplexParallax=true
EnableComplexParallaxShadows=true
EnableTerrainBlending=true
EnableComplexTerrainParallax=true
EnableComplexTerrainParallaxShadows=true
```
