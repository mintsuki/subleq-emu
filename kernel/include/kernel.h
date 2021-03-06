#ifndef __KERNEL_H__
#define __KERNEL_H__

#define KERNEL_PHYS_OFFSET 0xffffffffc0000000
#define PHYS_MEM_OFFSET 0xffff800000000000

// misc tunables

#define KRNL_PIT_FREQ 1000
#define MOUSE_UPDATE_FREQ 50
#define SCREEN_REFRESH_FREQ 30


#define MAX_MADT 128


#endif
