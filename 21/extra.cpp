/* TODO: One more exercise: removing special cases.  If you look at
 * our code in lists.cpp for either reading values (in main()) or for
 * copying a list (the copy(...) function), you will notice that we
 * needed a special case to handle the first node.  This stems in
 * part from the fact that unlike every other node in the list, the
 * pointer we have to the first node is not the "->next" of anything.
 * It is just a lone pointer.  See if you can figure out a way to
 * remove those special cases.  Here are two ideas if you need them:
 * 1. invent a "fake" first node whose value is not used / meaningless.
 *    At the end, you can set the pointer L's value from this node's next.
 * 2. use pointers to pointers (datatype node**) to move through the
 *    arrows themselves, instead of moving through the nodes!
 * NOTE: I don't make any claims that doing things this way is better
 * than how we did it, but I think it is a good exercise (and personally,
 * I do prefer the resulting aesthetic).  */

// vim:foldlevel=2
