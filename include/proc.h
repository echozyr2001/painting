#ifndef __PROC_H__
#define __PROC_H__

struct context {
//  TODO()
} ;

struct proc {
  struct spinlock     *lk;
  uint32              pid;    // process number
  struct trapframe    *trapframe;    // data page for trampline.S
  struct context      context;       // switch() here to run process, preserve site

  int                 killed;         // if not zero , have been killed
  pagetable_t         pagetable;
  // ... more infomation waiting to add
} ;

struct cpu {
  struct proc *proc;          // process infomation
  struct context context;     // process context
  int     noff;               // number of nested layers
  int     intena;             // old interrput state
} ;
#endif // !__PROC_H__

