# transformOverrides

Change the position, rotation, and scale of swapped objects ...

- `pos` - position.
- `rot` - rotation.
- `scale` - scale.
- units must be in floats (e.g. `20.0`).
- A/R suffixes for setting relative vs absolute transform.
- For position/rotation ...
- `posR(1.0,5.0,100.0)` will set new position relative to reference base position.
- `posA(300.0,100.0,200.0)` will override reference base position.
- scale is multiplicative. 
- scale randomization is possible, e.g. `scale(1.0/2.0)` will scale references between `1.0` and `2.0` units.
- Leave as `NONE` if you don't want transform overrides.

```
;swaps CoffeeCup01 misc items to cracked variants with relative position + random Z position of 50 to 100, and random scale between 1.0 and 1.50.

[Forms]
CoffeeCup01|CoffeeCupCracked01|posR(10.0,5.0,50.0/100.0),scale(1.0/1.50)
```
 
It is also possible to directly set a transform override without swapping objects.

Requires `[Transforms]` section ...

```
﻿[Transforms]
origBaseID|transformOverrides|chance
origRefID|transformOverrides|chance

[Transforms|LocationEDID,CellEDID,KeywordEDID,RegionEDID]
origBaseID|transformOverrides|chance
```

Affects swapped objects

```
[Transforms]
Bowl_05_Silver|rotR(-90,0,0),scale(2.0)
```
