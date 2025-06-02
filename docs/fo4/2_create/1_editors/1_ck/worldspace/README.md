
## Create a Worldspace

In the Creation Kit ...

1. Select `World/Worldspace`.
2. Create and name a new worldspace (e.g. "Fo4Di6442Worldspace").
3. In the properties pane, leave "Parent Worldspace" as "NONE".
4. For "Climate", use the "Default Climate" for now.
5. Skip "Map Image" for now. This is for the Pip-Boy, not the terrain.

## Import a Heightmap

A heightmap is a grayscale image from which we can generate our topography.
White is high. Black is low (potentially water-filled).
This is how most game engines (like Unreal) handle this problem, not just Bethesda.

1. Go to [Tangram Heightmapper](https://tangrams.github.io/heightmapper/). Select an area of the world map and export.
2. Open the image file in any image editor (e.g. paint.net).
3. Resize the image to 1633 x 1633 pixels (because we're going to make a worldspace with a particular number of cells, otherwise these dimensions might be different).
4. Save the file in DDS format, however ...
5. The CK is very, very picky about what file format it wants (grayscale single-channel 32-bit-per-channel floating-point DDS). We were _only_ able to successfully convert to this format using the NVIDIA Texture Tools Exporter application. (Download from Nvidia, of course.)
6. In the CK, navigate to "World > Heightmap Import".
7. We want our cell properties to be -25, -25, 25, 25. With these parameters, we'll see that we're generating 2601 cells and we're told that our ideal heightmap size should be 1633 x 1633 pixels (which is why we used these numbers above).
8. Set Min and Max Height with respect to 0 as water-level (although we decide the actual water level in the Worldspace properties panel). A generous difference in these numbers will result in more extreme topography. Twiddle and test to taste.
9. Click "BEGIN IMPORT". This will finish very quickly.
10. Save and push the plugin immediately.

In our experience we had to twiddle this _a lot_ to get a useful worldspace. Particularly the Min and Max Height in the Import panel versus the Default Land Height and Default Water Height properties in the Worldspace panel.

## Test

The worldspace is ready to test now.

1. Enable the plugin as usual.
2. Start the game.
3. Teleport to the new worldspace at coordinates 0,0. For example, `cow Fo4Di6442Worldspace 0 0`.

My album of screenshots: [fo4-di6442-worldspace](https://photos.google.com/album/AF1QipP4W7x0n6smjEHajXC3r2MojZrYGqTvs9igv1YR).

## Region

1. Go to "World/Regions" to create a custom region.
2. Draw your region on the map by clicking points to create a selection area.
3. Apply weather or sound, etc, to the region.
4. Generate an auto-navmesh.
5. Add rocks, trees, etc to "Objects". The engine will use these assets to auto-populate the region.

## Landscape

1. Open "World/Landscape Editing".
2. Add landscape textures.

## Door

1. Make a door that leads to the worldspace.

## Resources

1. [Creating a custom Worldspace](https://www.nexusmods.com/fallout4/mods/47316) by Zorkaz, 2020.
