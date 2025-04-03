# Navmesh

1. On the main toolbar, click the Navmesh button.
2. This shows the NavMesh Toolbar, and ...
3. It puts us in NavMesh edit mode.

### View Modes

The NavMesh Toolbar includes 3 view modes.

### Selection Modes

The NavMesh Toolbar includes 3 selection modes.

## Cut

When we need to create a NavMesh for our modded location ...

- Never delete existing NavMesh.
- Cut it and move it downwards -- far beneath ground level.
- NPCs will only use a NavMesh if it is near surface level.

Make our selection ...

1. The NavMesh Toolbar includes 3 view modes.
2. Toggle the only-NavMesh view.
3. The NavMesh Toolbar includes 3 selection modes.
4. Toggle the triangle selection mode.
5. Multi-select all the triangles we want to cut.

Make our cut ...

1. In the main menu, select NavMesh and then ...
2. Select "Move Selection to Separate Navmesh".
3. In the resulting pop-up, "Ignore" warnings. Select "Yes to All".
4. We should now see a blue border around our cut.
5. If we don't, "Finalize" our NavMesh to fix it.

Troubleshoot ...

1. If after "Move Selection to Separate Navmesh" we are shown a mess of triangles ...
2. Close the NavMesh Toolbar to exit edit mode ...
3. Reopen the NavMesh Toolbar to enter edit mode again and it should render properly.

Move our cut ...

1. Select one triangle in our cut and then "F" to select the whole cut.
2. Hold "Z" and mouse-drag the whole cut far downwards.
3. With our cut still selected, hide it with "H". "Ctrl-H" will unhide it.
4. Now we can begin building our new NavMesh at surface level.

## Reference

1. [Navmesh Toolbar](https://ck.uesp.net/wiki/Navmesh_Toolbar) @ ck.uesp.
2. [Navmesh Cheat Sheet](https://github.com/ciathyza/modding-guides/blob/master/Cheat%20Sheets/Creation%20Kit%20Navmesh%20Cheat%20Sheet.md) by ciathyza @ github.
