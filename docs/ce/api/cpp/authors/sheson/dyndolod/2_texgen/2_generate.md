# TexGen

Use TexGen to update object LOD textures and to automatically create tree/grass LOD billboards.

Ignore wrong 3rd party advice to temporarily disable plugins, mods, meshes or textures. Such advice is categorically wrong or outdated. In case of issues, solve the cause or use appropriate mesh mask rules or settings for desired results. Disabling plugins, mods, meshes or textures is a troubleshooting step and not a fix.

...

1. Start TexGen.
2. Select a dedicated output path.
3. Change options as desired. The defaults are fine for standard tree, object and dynamic LOD generation with DynDOLOD. Generate HD tree LOD billboards and rendered billboards for ultra tree LOD generation. Enable grass LOD billboards for grass LOD generation with DynDOLOD.
4. Click Start and wait for the process to complete without errors. Pay attention to all log messages (especially "file not found textures"). It should end with the log message 'TexGen completed successfully'. Do not use the output if there were errors that stopped the process prematurely.
5. Click Exit TexGen or click Zip & Exit to create a *.zip archive of the output for easier mod installation. Creating an archive will clean the dedicated output folder while all relevant files are packed into the zip file.
6. In case a summary of messages was created and opened in the default browser check all its entries to learn about problems and if they need to be addressed.
7. Install the contents of the output path or the *.zip archive as a mod. It should overwrite everything. Consider moving the zip archive to the mod managers download folder for later re-use.

## Resources

1. [Generation Instructions](https://dyndolod.info/Generation-Instructions) @ dyndolod.info.
2. [TexGen](https://dyndolod.info/Help/TexGen) @ dyndolod.info.
