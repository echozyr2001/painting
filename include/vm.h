#ifndef VM_H__
#define VM_H__

extern pagetable_t kernel_pagetable;

void      kvminit(void);
int       mappages(pagetable_t, uint64_t, uint64_t, uint64_t, int);
void      kvminithart(void);

pagetable_t uvmcreate(void);
void        uvmunmap(pagetable_t, uint64_t, uint64_t, int);
void        freewalk(pagetable_t);
void        uvmfree(pagetable_t, uint64_t);

void *      kmalloc(uint64_t) {return 0;};
#endif //!VM_H__
