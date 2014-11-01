#ifndef __CPUTIMEHACK_H__
#define __CPUTIMEHACK_H__

static inline u64 cputime64_sub(u64 a, u64 b){
	return a - b;
}

#endif
