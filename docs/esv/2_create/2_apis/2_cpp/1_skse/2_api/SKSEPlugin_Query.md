
SKSE calls your plugin via two exported functions - SKSEPlugin_Query and SKSEPlugin_Load. These are the entry points for your plugin and you can consider them equivalent to int main().

Query
The query passes two arguments:

- SKSEInterface
- PluginInfo


## Reference

1. [Query and Load](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Query-and-Load)