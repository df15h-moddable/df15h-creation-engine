
Use DynDOLOD to generate a comprehensive LOD mod that can contain tree LOD, object LOD, dynamic LOD or grass LOD, occlusion data, terrain underside etc.


- Make sure all mods, plugins and patches (that affect exterior cells and worldspaces and base records used by references in exterior cells) are enabled and their overwrite order is sorted.
- Ignore wrong 3rd party advice to temporarily disable plugins, mods, meshes or textures. Such advice is categorically wrong or outdated.
- In case of issues, solve the cause or use appropriate mesh mask rules or settings for desired results.
- Disabling plugins, mods, meshes or textures is a troubleshooting step and not a fix.

...

1. Start DynDOLOD.
2. Depending on preferences and desired options, use the wizard mode or click to advanced mode.
3. Select the worldspaces to generate the LOD mod for. Ignore wrong third party instructions to not select specific worldspaces because of "problems" or pre-made LOD. Pre-made LOD only works and matches the load order it was generated for and it is all but guaranteed that models, textures, plugins and their load order are going to be different. Instead of ignoring problems or issues, they should be reported to the official DynDOLOD support forum to be discussed, fixed or properly addressed.
5. Select a dedicated output path.
6. If in wizard mode, start LOD generation by clicking one of the Low, Medium or High buttons.
7. If in advanced mode, select options as desired and start LOD generation by clicking the OK button.
8. Wait for all processes including all spawned LODGen command prompt windows to complete successfully. Pay attention to all log messages. It should end with the log message 'DynDOLOD plugins generated successfully' and lines like 'LODGen generated object LOD for [WORLDSPACE] successfully' for each selected worldspace. Do not use the output if there were errors that stopped the process prematurely.
9. Click Save & Exit to save the plugin(s) or click Save & Zip & Exit to save the plugin(s) and to create a *.zip archive of the output for easier mod installation. Creating an archive will clean the dedicated output folder while all relevant files are packed into the zip file.
10. In case a summary of messages was created and opened in the default browser check all its entries to learn about problems and if they need to be addressed.
11. Install the contents of the dedicated output path or the *.zip archive as a mod. It should overwrite everything.
12. Activate the plugins(s).
13. In case Occlusion.esp was generated, it should be the last plugin to load right after DynDOLOD.esp.
14. If a DynDOLOD.esm was generated it should be the ESM with the highest priority possible or just before the first non-ESM. Ignore any contradicting third party instructions. Instead use correct options and settings for the desired results.
15. Keep all LOD assets (DynDOLOD Resources, 3rd party mods, TexGen output etc.) that were active for LOD generation activated unless there are specific instructions to disable 3rd party mods. Object LOD and tree LOD assets may also be used directly in the game like any other models and textures, in particular by dynamic LOD or Child/Parent Worldspace Copies.
16. Launch the game via skse[64|vr]_loader.exe. Start a new game or load a save game and enter an exterior worldspace for which LOD was generated. Wait for onscreen message 'DynDOLOD successfully initialized' and/or check the DynDOLOD SkyUI MCM Main page for the last message.
