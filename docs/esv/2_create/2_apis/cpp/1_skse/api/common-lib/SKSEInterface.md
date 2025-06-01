

CommonLib Extensions

CommonLib wraps the SKSE API in an easy to use interface that enables the use of modern C++ features, such as lambdas. The SKSE::Init function, accessed using #include "SKSE/API.h", acquires and stores all SKSE interfaces for the user, eliminating the need for awkward extern juggling between files. A basic template plugin written for CommonLib demonstrates how to handle the basic query and load functions. Note that SKSEInterface has been split into two classes, SKSE::QueryInterface and SKSE::LoadInterface, so as to prevent authors from doing more than they should during the query function. Member access has also been wrapped into member functions, which prevents authors from accidentally corrupting SKSE's exported types.


## Reference

1. [Query and Load](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Query-and-Load)