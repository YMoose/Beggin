#ifndef __ALLOCATOR_H__
#define __ALLOCATOR_H__

#include <bits\stdc++.h>
#if defined(FIRSTFIT)
#include "firstfit.h"
#else if defined(NEXTFIT)
//#include "nextfit.h"
#endif
using namespace std;

template <typename Taddr, typename Tunit>
uintptr_t
AllocatorInit(Taddr resource, Tunit unit, size_t size, uintptr_t allocatoraddr);

#endif /* __ALLOCATOR_H__ */
