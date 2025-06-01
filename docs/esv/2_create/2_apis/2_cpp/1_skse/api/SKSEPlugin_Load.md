
SKSE calls your plugin via two exported functions - SKSEPlugin_Query and SKSEPlugin_Load. These are the entry points for your plugin and you can consider them equivalent to int main().

Load
The load passes one argument:

- SKSEInterface: This is the SKSE interface which gives you access to the functionality that SKSE provides.

The load is when your plugin is free to do whatever it wants: query the interface, apply hooks, register callbacks, etc. Finish by returning a boolean indicating if your plugin loaded successfully. Note that because of the nature of code injection, you aren't driving the executable. Your code must act in response to events. This also means that you can't rely on stack allocated memory if you wish to store persistent data. When your functions are done executing, they'll pop off the stack, and your local variables will be lost. If you want data to persist beyond the scope it's allocated in, you'll need to allocate it on the heap, and access it via statically declared variables. You can read other sections to learn how to leverage assembly hooks and callbacks to inject your code into the executable, and perform the tasks you want.

## Reference

1. [Query and Load](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Query-and-Load)