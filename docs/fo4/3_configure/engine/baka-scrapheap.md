# Baka ScrapHeap

"Expands the default size of ScrapHeap allocations."

Q: Why?

A: Sim Settlements.
The vanilla game allocates ~70 MB of memory in which to load script properties.
When present, Sim Settlements eats much of that all by itself.
Therefore, any heavily modded game is likely to exceed the vanilla ScrapHeap allocation (and crash).

## References

1. [Baka ScrapHeap](https://www.nexusmods.com/fallout4/mods/46340) by shad0wshayd3 @ nexusmods.
2. [BakaScrapHeap](https://github.com/shad0wshayd3-FO4/BakaScrapHeap) @ github.
