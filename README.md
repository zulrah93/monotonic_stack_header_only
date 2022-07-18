# Monotonic Stack Implementation in C++
A monotonic stack implementation (both for increasing and decreasing) in a header file to include. Very simple implentation.
## Explanation
A monotonic sequence is one where the elements are increasing or staying constant or decreasing and staying constant but once it's increasing or decreasing it must stay like that. For example [1, 2, 2, 3] is a monotonic increasing where as [3, 2, 2, 1] is decreasing. [1, 2, 1, 3] is not monotonic. A monotonic stack is a stack that is ordered like a monotonic sequence. Certain algorithm problems require it but it isn't a common data structure. 
## How To Use In Your Project (Using Git Modules)

⚠️Warning Always Read Command Before Executing in Your Terminal Application:⚠️
```
      git submodule add https://github.com/zulrah93/monotonic_stack_header_only.git
```

Then you can include header in your (.cpp) file like this:

```
  #include "monotonic_stack_header_only/monotonic_stack.h"
```

Alternatively you may just wget (Linux/WSL) the header only from GitHub:

```
  wget https://raw.githubusercontent.com/zulrah93/monotonic_stack_header_only/main/monotonic_stack.h
```

```
  Invoke-WebRequest -Uri https://raw.githubusercontent.com/zulrah93/monotonic_stack_header_only/main/monotonic_stack.h -OutFile monotonic_stack.h
```
