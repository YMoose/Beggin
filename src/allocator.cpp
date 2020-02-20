#include "allocator.h"
#include "typedef.h"

template <typename Taddr, typename Tunit>
uintptr_t
AllocatorInit(Taddr resource, Tunit unit, size_t size, uintptr_t allocatoraddr){
	if(((Allocator*)allocatoraddr)->Init()){
		return allocatoraddr;
	}
	else{
		return NULL;
	}
}


