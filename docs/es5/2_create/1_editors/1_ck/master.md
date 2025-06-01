
## Multiple Masters

By default, neither the ESV or FO4 CKs allow us to work with more than one master file at a time.
That is to say, we are unable to create a plugin that has more than one master.

In `SkyrimEditor.ini` or `CreationKit.ini` add ...

```
[General]
bAllowMultipleMasterFiles=1
bAllowMultipleMasterLoads=1
```

## Light Masters

With the ESV CK (in 2023), we are able to work with two ESPFE files, and to make one a master for the other. This dependency furthermore appears to work flawlessly in-game.

With the FO4 CK (in 2023), we are NOT able to do the same. Furthermore the in-game consequences of attempting this are bad. In order to accomplish the same outcome in FO4, we must make the master plugin an ESL ("light master") rather than an ESPFE.

For example, we have a use case commmon to both games ...

1. Plugin A will contain a new house interior.
2. Plugin B will contain a new house exterior.
3. Plugin B will add a door to the interior and a door to the exterior, and then link these doors via Teleport.
4. In this sense, B will depend upon A. Therefore A must appear as a master for B.

In ESV, both plugins can be ESPFE files, and they will behave properly.

In FO4, Plugin A _must_ be an ESL ("light master"), while Plugin B can be an ESPFE.

Perhaps this behavior will change when FO4 gets its engine upgrade in 2023.

## Object Duplication

In the example above, why did we suggest that Plugin B should add the _interior_ door to the new interior cell we introduced in Plugin A? Wouldn't it make more sense for Plugin B (our new exterior) to add the _exterior_ door while defining the _interior_ door in Plugin A (our new interior)? Why wouldn't that be a good thing?

When any plugin _edits an object_ that was defined in another plugin, it actually _makes a copy_ of that object. In other words, we won't just be overriding _specific property_ of that object (as we might wish). Instead we will be making a copy of, and then overriding, that entire object. In our example above, if in Plugin B we edit a property of a door object defined in Plugin A, we end up with _two interior door objects_. Obviously, from a "keep it simple" (and therefore reliable) perspective, this is a bad outcome.

When mod authors don't think carefully about their edits, this duplication behavior in the CK (and the game engine) can cause all kinds of incompatibilities and in-game havoc. One of the more severe (and common) outcomes is landscape mismatches. That is, because a cell is also an object, any edit to a cell (no matter how small) may end up producing a shadow-copy of that cell. What often happens is that the authors of separate mods carelessly touch the same cells. They each believe that they have made an inconsequential change (perhaps moving a mushroom). What they don't realize is that they've inadvertently created a duplicate copy of the entire original cell state.

It's therefore important to pay attention to how and when objects are shadow-copied when edited, and to cause as few of these incidents as possible. These duplicates are hard to see in the CK. They can be seen very clearly in SSEEdit or FO4Edit.
