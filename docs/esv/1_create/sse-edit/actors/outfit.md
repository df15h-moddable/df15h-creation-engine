## Prepare

1. Launch SSEEdit and load plugins.
2. Navigate to follower plugin.
3. Expand data tree to find record "Non-Playable Character (Actor)".
4. . Right-click "Copy as override into ...".
5. Select `<new file>.esp` with flag ESL.
6. Name new plugin and save.

## Non-Playable Character (Actor)

Editable  ...

- AI Data
- Default Outfit
- Factions
- Hair Color
- Head Parts
- Height
- Items
- Name
- Perks
- Spells
- Weight

## Outfit

Why? Good reasons to patch outfits include ...

- We downloaded a good follower mod with an un-lore-friendly costume.
- We downloaded a location mod including NPCs that could be better dressed.
- We downloaded an oufit mod we'd like to apply to an NPC or follower.

And here's a _very important_ reason ...

- We want to change the hair of a follower or NPC.
- Why is an outfit a good way to do this?
- Because changing actual hair records can only be safely done via the Creation Kit.
- Because facetints need to be regenerated when actual hair records are changed.
- _Therefore_ ... applying a wig is a safer and easier technique.
- Note that wigs are assigned a different slot than helmets ...
- Slot 31 for short hair. Slot 41 for long hair.
- Undressing mods (e.g. for baths) can usually be configured to honor these slots.

### How To

First, we'll need an `Outfit` node in our patch plugin ...

1. Select our patch plugin and expand the data nodes.
2. To add a new data node ...
3. Right-click on the root node and "Add".
4. Scroll down to `OTFT`.

Second, we'll need a new data record in our `Outfit` node ...

1. Right-click on our `Oufit` node and "Add" `OTFT`.
2. Highlight out new data record. In the right-hand pane ...
3. Provide a readable unique `EDID - Editor ID`.
4. Note that this `EDID - Editor ID` will be our reference handle ...
5. ... and therefore must be easy to find in select lists.

Third, we'll want to add items to our new record ...

1. Highlight our new data record. In the right-hand pane ...
2. Right-click `INAM - Items` and "Add".

Next, we might want to add items from other mods ...

1. Select our patch plugin.
2. Right-click on the root node and "Add Master".

Finally, assign our outfit to the NPC ...

1. In our patch plugin ...
2. Select the `Non-Playable Character (Actor)` node.
3. In the right-hand pane, find `DOFT - Default Outfit`.
4. If our outfit includes a wig, it will honor `HCLF - Hair Color`, so change this if necessary.

Useful default outfits ...

- Blacksmith
- Barkeep
- ClothesTavernWench
- FarmClothes
- FineClothes
- JarlClothesBryling
- Monk
