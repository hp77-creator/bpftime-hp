#define BPF_NO_GLOBAL_DATA
#include "vmlinux.h"
#include "bpf/bpf_tracing.h"
#include "bpf/bpf_helpers.h"

int print_and_add1(struct data *d, int sz) {
	bpf_printk("print_and_add1\n");
	bpf_printk("print_and_add1: %d\n", sz);
 	return 23;
}
