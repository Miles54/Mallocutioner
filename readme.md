# Mallocutioner

![Mallocutioner Logo](Mallocutioner.png)

Meme program that my friends kept saying is the "BEST" software I've written.

Have you ever thought to yourself "Man, I want to allocate all of memory to one program that doesn't even use it."?
Well have I got the program for you! Mallocutioner will simply do exactly that (*up to 0xFFFFFFFFFFFFFFFF bytes...*)

If you are compiling this for linux, you might find that the default behavior of the system is to lie, promising more memory than it can service.
using `echo 2 > /proc/sys/vm/overcommit_memory` should get the system to not overcommit, if you really needed to test this.

If you are compiling this for windows, you should see that the memory is not overcommitted, and the system will properly tell you "NO" by default.
(I don't think there's a way to configure it to overcommit, but if there is, it doesn't do so by default.)
However, **DO NOT** rely on this saving you from nasty effects. as **a lot** of things may crash when not getting the memory allocation they want.

for any other operating systems, I do not know what the default behavior is.
