CommonLib Extensions
SKSE implements NativeFunction by using awkward macro hacking to provide implementations for a limited number of arguments.
CommonLib does away with this by using template meta-programming to implement a NativeFunction wrapper that's easy to read, and extends to an unlimited number of arguments.
SKSE requires the plugin author to explicitly define the signature of their function upon registration, which they must update each time they modify the signature.
CommonLib does away with this by using template meta-programming to automatically determine the signature of an author's function, and generates the correct wrapper based on that type. Thus, registration is as simple as passing the function pointer to the registration function.
Here is a complete implementation of a plugin using CommonLib's SKSE::PapyrusInterface.


https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Papyrus