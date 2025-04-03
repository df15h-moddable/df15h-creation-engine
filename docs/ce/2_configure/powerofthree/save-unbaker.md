
"Unbakes" some record types so that they will be _always loaded from plugins_ and _not from saves_.

## Why?

- For example, many mods touch NPC records and change e.g. vanilla Weight. Weight scales the actor's body mesh. This can lead to neck and hand gaps.
- May make installing certain mods mid-save safer.

## Features

Includes the following records ...

- NPC weight
- opposite gender animation flags
- persistent reference transforms (position, rotation)

Regarding persistent reference transforms ...

- only includes immovable references, i.e. objects that cannot be moved using scripts (statics, furniture, flora)
- does not include markers

## Config

Toggle each category of record in `po3_SaveUnbaker.ini`.
