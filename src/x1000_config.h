#pragma once

#define X1000_LOCKMEM_DATASEG   1
#define X1000_LOCKMEM_HEAPSTACK 2
#define X1000_LOCKMEM_MMAP      3
#define X1000_EXECHOOK_PREINIT  1
#define X1000_EXECHOOK_FORK     2
#define X1000_EXECHOOK_MMAP     3
#define X1000_SECTION_MAX       2

int get_config(unsigned *lockmem, unsigned *phase);
