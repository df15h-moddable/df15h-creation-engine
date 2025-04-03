
Available for ESV and FO4.

## Distributable Types

- `DeathItem`
- `Faction`
- `Item`
- `Keyword`
- `LevSpell`
- `Outfit`
- `Package`
- `Perk`
- `Spell`

## File

1. In the `Data` folder (at the same level as plugins) ...
2. Crate a `.ini` file with the suffix `_DISTR` (e.g. `MyMod_DISTR.ini`).

## Format

```
Spell = formID~esp(OR)editorID|strings|formIDs(OR)editorIDs|min/max level|gender/unique|NONE|chance
```

Where ...

1. `formID~esp(OR)editorID` is the distributable.
2. `|strings|formIDs(OR)editorIDs|min/max level|gender/unique|NONE|` are the filters that determine target(s).
3. `chance` is the % chance of distribution.

And ...

- `formID` is the `formID` of the distributable record with leading zero digits removed (e.g. `0x12345`).
- `esp` is the name of the mod containing the record (e.g. `MyMod.esp`). This is not necessary for base Fallout and DLC records.
- `editorID` is the form `editorID` of the record displayed in CK or xEdit.

### Items

`Items` and `DeathItems` have their own specialized format (notice `itemCount`) ...

```
Item = formID~esp|strings|formIDs(OR)editorIDs|min/max level|gender/unique|itemCount|chance
```

## Examples

```
﻿;add 3000 bottlecaps to Piper
Item = 0xF|Piper|NONE|NONE|NONE|3000 

;50% chance to add Gift of Gab perk to all ghouls and Mr.Handys
Perk = 0x00178D54~Fallout4.esm|NONE|0x000EAFB6,0x000359F4|NONE|NONE|NONE|50

;add Glowing One radiation cloak spell to all female NPCs between actor levels 25 and 50
Spell = 0x000DB3AD~Fallout4.esm|NONE|NONE|25/50|F 

;adds 2000 Molotov Cocktails to all NPCs on death
DeathItem = MolotovCocktail|ActorTypeNPC|NONE|NONE|NONE|2000
```

## Reference

1. [Spell Perk Item Distributor](https://www.nexusmods.com/fallout4/mods/48365) for FO4 @ nexusmods.
