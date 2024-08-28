# RobCo Patcher

[RobCo Patcher](https://www.nexusmods.com/fallout4/mods/69798) @ nexusmods.

A F4SE plugin. The author has NOT made the source code for `RobCo_Patcher.dll` available.

Seems a little like PowerOf3's SPID, in that it lets us use declarative configuration files to change the properties of game objects (NPCs, weapons, etc).
The author's intent is to be able to resolve mod incompatibilities declaratively, without having to build and install a new ESPFE to resolve each incident.

## Example

1. Find races with `ActorTypeHuman`.
2. Set the AV 2D4(Health) to 100 and 2E3(Damage Resist) to 100.
3. Add two spells from "Better Locational Damage".

```
filterByRaces=Fallout4.esm|00013746:filterByKeywords=Fallout4.esm|0002CB72:changeAVIFS=Fallout4.esm|000002D4=100,Fallout4.esm|000002E3=100:spellsToAdd=Better Locational Damage.esp|0101750F,Better Locational Damage.esp|0101B207
```
