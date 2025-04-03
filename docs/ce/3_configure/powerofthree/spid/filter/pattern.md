# Pattern Matching

- `Requirements [strings, formIDs]` - require actor to have all keywords or filter forms, using + (eg. ActorTypeGhost+ActorTypeAnimal to get animal ghosts).
- `Exclusions [strings, formIDs]` - exclude actors that have name/keyword/form, using - (eg. -Nora).
- `Wildcards [strings]` - find all actors that have name, editorID or keyword containing wildcard, using * (eg. *Sentry to get all actors with Sentry in their name).
- `Matches [strings, formIDs]` - this is default setting. NPC has to match with any filter.

These are evaluated in the following order ...

1. Requirements
2. Exclusions
3. Matches
4. Wildcards
