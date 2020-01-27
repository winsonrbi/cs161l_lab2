/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/csmajs/wbi002/cs161l_lab2/fixedFloatConversion.v";
static const char *ng1 = "";
static int ng2[] = {1, 0};



static void Always_40_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3640);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t5, 32);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t7, 0, 8);
    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB13:    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB14;

LAB15:    t35 = *((unsigned int *)t7);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t29) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t7) > 0)
        goto LAB20;

LAB21:    memcpy(t6, t39, 8);

LAB22:    t33 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t33, t6, 0, 0, 32, 0LL);
    goto LAB2;

LAB8:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t7) = 1;
    goto LAB13;

LAB12:    t28 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    t33 = (t0 + 2008U);
    t34 = *((char **)t33);
    goto LAB15;

LAB16:    t33 = (t0 + 1848U);
    t39 = *((char **)t33);
    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t6, 32, t34, 32, t39, 32);
    goto LAB22;

LAB20:    memcpy(t6, t34, 8);
    goto LAB22;

}


extern void work_m_16502292628804405840_2401343879_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_16502292628804405840_2401343879", "isim/lab2_tb_isim_beh.exe.sim/work/m_16502292628804405840_2401343879.didat");
	xsi_register_executes(pe);
}
