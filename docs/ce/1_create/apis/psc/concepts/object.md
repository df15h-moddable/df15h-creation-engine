# Papyrus Object

Papyrus is _behaviorally Object-Oriented_, in the most classic sense.

- Objects are scripts (e.g. `Actor_Script`).
- The most important aspect of each script are its behavioral functions (e.g. `Actor_Script`, `Kill()`).

More accurately, in order to facilitate ease of development (division of labor) ...

- Each actual native object is encoded in the game directly for the Creation Engine.
- Each Papyrus script object is _attached_ 1-to-1 to its _corresponding_ native object.
- The native object name and the script object name also strictly correspond.

So that the Papyrus script object is much easier to manipulate than the orignal native object.

Papyrus script objects "are the strings behind the puppets". [1]

Papyrus script objects employ Object-Oriented paradigms like ...

- abstraction
- encapsulation
- inheritance

## Reference

1. [Papyrus Introduction](https://wiki.bethesda.net/wiki/creationkit/Skyrim/Papyrus_Introduction/) @ wiki.bethesda.
2. [Script File Structure](https://wiki.bethesda.net/wiki/creationkit/Skyrim/Script_File_Structure/) @ wiki.bethesda.