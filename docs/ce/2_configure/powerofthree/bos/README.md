
Available for ESV and FO4.

## How To

### Basics

1. In the `Data` folder (at the same level as plugins) ...
2. Crate a `.ini` file with the suffix `_SWAP` (e.g. `MyMod_SWAP.ini`).

File content specification ...

```
[Forms]
origBaseID|swapBaseID|transformOverrides|chance
origBaseID|swapBaseID,swapBase2ID,swapBase3ID|transformOverrides|chance

[References]
origRefID|swapBaseID|transformOverrides|chance

[Forms|LocationEDID,CellEDID,KeywordEDID,RegionEDID]
origBaseID|swapBaseID|transformOverrides|chance
```

- ID can be either formID or editorID of the object: `ObjectFormID~ModName.esp` OR `ObjectEditorID`.
- `origBase` is the base object you're trying to replace (eg. all farmhouse statics).
- `origRef` is the specific object reference you're trying to replace (ie. a specific farmhouse in Riverwood).
- `swapBase` is the replacement object you're replacing it with (eg. your farmhouse static with new model).

## Examples

```
[Forms]

;swap ash-trays with pens
0x0008e371~Fallout4.esm|0x000140d99~Fallout4.esm

[References]

;swap specific ash-tray reference with pen and scale it between 1.0 and 1.50
0x1234~Fallout4.esm|0x000140d99~Fallout4.esm|scale(1.0/1.50)
```

Check po3_BaseObjectSwapper.log in My Documents/My Games/Fallout4/F4SE, for more information about the process.

## Reference

1. [Base Object Swapper](https://www.nexusmods.com/fallout4/mods/67528) for FO4 @ nexusmods.
2. [BaseObjectSwapperF4](https://github.com/powerof3/BaseObjectSwapperF4) @ github.
