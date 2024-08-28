# Nemesis Unlimited Behavior Engine

Download: ShikyoKira's [Nemesis Unlimited Behavior Engine](https://www.nexusmods.com/skyrimspecialedition/mods/60033) @ nexusmods.

## Requirements

### Per the Author

- [Microsoft Visual C++ Redistributable](https://learn.microsoft.com/en-us/cpp/windows/latest-supported-vc-redist?view=msvc-170) @ microsoft.

### Per the Community

This seems _insane_ (truly, genuinely _insane_) but some folks have needed to do this to get Nemesis to behave ...

- Install _all_ versions of the Microsoft .NET Framework. [Download .NET Framework](https://dotnet.microsoft.com/en-us/download/dotnet-framework) @ microsoft.
- Install _all_ Microsoft .NET SDKs, ASP.NET Core Runtimes, .NET Desktop Runtimes, and .NET Runtimes (both 64-bit (x64) and 32-bit (x86)). [Download .NET](https://dotnet.microsoft.com/en-us/download/dotnet) @ microsoft.
- Install _all_ Microsoft Visual C++ Redistributables. [Visual C++ Redistributable Runtimes All-in-One](https://www.techpowerup.com/download/visual-c-redistributable-runtime-package-all-in-one/) @ techpowerup.
- Install _all_ Java Runtimes (both 64-bit (x64) and 32-bit (x86)). [Java Downloads for All Operating Systems](https://www.java.com/en/download/manual.jsp) @ java.

## Install as a Mod

1. Download and install the tool like a mod.
2. The executable should appear as `data/nemesis_engine/Nemesis Unlimited Behavior Engine.exe`.
3. Register the executable with Mod Organizer (in the "Configure Executables" panel).

## Create an Empty Mod For Output

1. Create an empty mod named "Nemesis Output".
2. Open the "Configure Executables" panel.
3. Choose to "create files in mod" rather than "overwrite (*)".
4. Choose our empty "Nemesis Output" mod from the dropdown.

## Run Nemesis

Must be (re)run whenever skeleton and animation mods are added or updated.

1. Turn off "Virus & Threat Protection" in "Windows Security". Re-enable when finished.
2. Delete any previously generated plugin and assets.
3. Sort plugins with LOOT.
5. Run Nemesis via Mod Organizer.
6. If prompted to "Update Engine", do it.
7. "Launch Nemesis Behavior Engine" and wait until "Behavior Generation Complete".
8. Enable the newly output plugin.
9. Sort plugins again with LOOT.

## Resources

1. [Nemesis Unlimited Behavior Engine](https://stepmodifications.org/wiki/SkyrimSE:Nemesis_Unlimited_Behavior_Engine) @ stepmodifications.
