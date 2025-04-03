PluginInfo: This is a plugin info structure which contains fields relating to info about your plugin, and it is your responsibility to fill these fields out. These fields are as follows:
infoVersion: Fill this out with the version of PluginInfo your plugin was compiled with (i.e. PluginInfo::kInfoVersion).
name: Fill this out with the name of your plugin (i.e. "MyFirstPlugin"). Note that this is a pointer, and is non-owning. Be sure that the data it points to is always valid.
version: Fill this out with the version of your plugin (i.e. 42). It can be anything you want, so long as you understand how to interpret it.
The main purpose of the query is to determine if your plugin can safely load. During the query, you should fill out the plugin info structure, check if your plugin is compatible with the current executable, and return a boolean indicating if your plugin can be safely loaded. You should do nothing else during this phase.

## Reference

1. [Query and Load](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Query-and-Load)