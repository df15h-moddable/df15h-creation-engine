CommonLib
CommonLib forgoes SKSE's logging implementation in favor of its own implementation that uses a more modern std::filestream rather than raw access to Windows file handles. As such, it uses its own class interface, and is entirely separate from SKSE's IDebugLog.

Class Interface
OpenRelative: Opens a file at the relative location specified.
a_referenceID: This is a Windows type which the path will be opened relative to. Typically this is passed FOLDERID_Documents.
a_fileName: The is the relative path that will be opened. SKSE logs are typically opened in /My Games/Skyrim Special Edition/SKSE/. See std::filesystem::path for more details on constructing a valid argument.
a_mode: This is the ios mode the file will be opened in. See std::ios_base::openmode for more details on constructing a valid argument.
OpenAbsolute: Opens a file at the absolute location specified.
a_fileName: This is the full path of the file to open. See std::filesystem::path for more details on constructing a valid argument.
a_mode: This is the ios mode the file will be opened in. See std::ios_base::openmode for more details on constructing a valid argument.
SetPrintLevel: Sets the minimum level required to print a message to the log. Returns the previously set value.
a_printLevel: The minimum level required.
SetFlushLevel: Sets the minimum level required to flush the log and synchronize with the copy on disk. Returns the previously set value.
a_printLevel: The minimum level required.
UseLogStamp: Enables the logger to automatically prefix the type of the message to the message itself (e.g. _MESSAGE("Hello world!") prints as [MESSAGE] Hello world!). Returns the previously set value.
a_enable: Pass true to enable the feature, false to disable it.
UseTimeStamp: Enables the logger to automatically prefix the message with the time the message was logged. Returns the previously set values.
a_enable: Pass true to enable the feature, false to disable it.
a_fmt: The format to pass to std::put_time.
Print: Prints the string to the log.
a_level: The level of the message. The overload without this argument will print regardless of the required print level.
a_string: The message to print.
VPrint: Formats and then prints the given string to the log.
a_level: The level of the message. The overload without this argument will print regardless of the required print level.
a_format: The format of the message to print.
...: The variadic arguments to use with the given format.
Included in the file are the following macros:

_DMESSAGE
_VMESSAGE
_MESSAGE
_WARNING
_ERROR
_FATALERROR
These macros mimic the syntax of SKSE's IDebugLog shortcuts and redirect output to SKSE::Logger.


https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Logging