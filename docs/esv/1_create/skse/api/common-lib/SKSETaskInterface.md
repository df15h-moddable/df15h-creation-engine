CommonLib Extensions
SKSE implements the task interface using named, virtual methods, instead of a functor-style syntax. This makes it inherently hostile to lambdas, forcing authors to derive a new delegate for every different task they wish to dispatch.
CommonLib does away with this by using a std::function to act as a container for any callable objects passed to AddTask. Thus, tasks can now be defined inline using lambdas, simplifying code for executing simple, thread-safe tasks.
Note that tasks execute outside of the scope they are defined in, so lambdas with capture should ensure the variables they are capturing exist beyond the scope of the lambda's definiton.
Here is a complete implementation of a plugin using CommonLib's SKSE::TaskInterface.

## Reference

1. [Task](https://github.com/Ryan-rsm-McKenzie/CommonLibSSE/wiki/Task) by Ryan-rsm-McKenzie @ github.
2. [Native SKSE64 Task Interface Implementation](https://gist.github.com/Ryan-rsm-McKenzie/436ef9d4d053b0d5cf9cbd87268e8978) by Ryan-rsm-McKenzie @ github.