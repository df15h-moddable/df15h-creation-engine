# chance

Randomly swap between multiple swap objects/percentage chance to not swap at all.

- chance (0 - 100)
- Default is 100
- S/R suffixes
- chanceS(50) - fixed random chance (persists across game sessions; object refs will be always swapped or not)
- chanceR(50) - chance is rerolled on each new game session (object ref may or may not be swapped each time you load the game)
- Default is S

```
[Forms]
﻿;Randomly swaps between Base1, Base2, Base3

Base|Base1,Base2,Base3

;50% chance to swap to PenBlue
;25% chance to swap to PenRed

Pen01|PenBlue|NONE|chanceS(50)
Pen01|PenRed|NONE|chanceS(25)
```

```
;50% chance (rerolls each game session)

Pen01|PenBlue|NONE|chanceR(50)
```
