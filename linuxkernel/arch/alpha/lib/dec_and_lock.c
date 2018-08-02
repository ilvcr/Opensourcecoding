/*************************************************************************
> File Name: dec_and_lock.c
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月03日 星期五 00时06分34秒
> Description:   ll/sc version of atomic_dec_and_lock()
 ************************************************************************/

#include <linux/spinlock.h>
#include <asm/atomic.h>

  asm (".text					\n\
	.global atomic_dec_and_lock		\n\
	.ent atomic_dec_and_lock		\n\
	.align	4				\n\
atomic_dec_and_lock:				\n\
	.prologue 0				\n\
1:	ldl_l	$1, 0($16)			\n\
	subl	$1, 1, $1			\n\
	beq	$1, 2f				\n\
	stl_c	$1, 0($16)			\n\
	beq	$1, 4f				\n\
	mb					\n\
	clr	$0				\n\
	ret					\n\
2:	br	$29, 3f				\n\
3:	ldgp	$29, 0($29)			\n\
	br	$atomic_dec_and_lock_1..ng	\n\
	.subsection 2				\n\
4:	br	1b				\n\
	.end atomic_dec_and_lock");

static int __attribute__((unused))
atomic_dec_and_lock_1(atomic_t *atomic, spinlock_t *lock){

    /* Slow path */
    spin_lock(lock);

    if(atomic_dec_andtest(atomic)){

        return;
    }

    spin_unlock(lock);
    return 0;
}



