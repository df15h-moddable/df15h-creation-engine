## How To No.1

In most cases, we want to start with an empty plugin (`.esp`).

1. Launch the CK.
2. Select "File / Data".
3. Select `Skyrim.esm` and `Update.esm`.
4. Wait for data to load.
5. Select "File / Save and push plugin to PC".
6. Name the new plugin.
7. Exit.

To begin development ...

1. Launch the CK.
2. Select "File / Data".
3. Select our new plugin.
4. Set as "Active File".

## How To No.2

As a starting point for any new project, we need to create an empty plugin.

1. To use the core game ESM files as masters, navigate to "File > Data" (in the main toolbar), select, and load them. For ESV, these should be `Skyrim.esm` and `Update.esm`. For FO4, this should be `Fallout.esm`.
2. Some warnings will appear during this process. According to official documentation, we can choose "Yes to All" to disable all warnings in this context.
3. To save the project as a plugin, navigate to "File > Save" (in the main toolbar).
4. Since we probably don't want to put our gameplay at risk while we are not working on this project, we probably want to remove the plugin from the game's Data directory and commit it to GitHub.

## Load Plugin

1. We started with an empty ESP, with core game ESM files as masters.
2. After creating this ESP, we removed it from the game's Data directory and committed it to GitHub.
3. We must restore the ESP to the Data directory while we work on it, then ...
4. In the Creation Kit, select "File > Data".
5. Select the two masters and our ESP. Select our ESP and "Set as Active File".
6. Click "OK" to load our project.

## References

1. [Getting Started](https://www.creationkit.com/index.php?title=Category:Getting_Started) @ creationkit.
