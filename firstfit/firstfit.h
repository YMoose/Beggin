#ifndef __ALLOCATOR_FIRSTFIT_H__
#define __ALLOCATOR_FIRSTFIT_H__

#include "unit.h"

template <typename Taddr, typename Tunit>
class Allocator{
private:
	AllocatorUnit* headunit;
	AllocatorUnit* tailunit;
	size_t resourcepool_size;

public:
	// Allocator Initiate
	bool Init(void);
	// Allocate Resources by unit
	Taddr Alloc(size_t size);
	Taddr Realloc(size_t size);
	Taddr AllocAlign(size_t size, size_t align_size);
	// Free Allocated Resources
	void Free(AllocatorUnit block);

};

#endif /* __ALLOCATOR_FIRSTFIT_H__ */
