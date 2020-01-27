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
static const char *ng0 = "/home/csmajs/wbi002/cs161l_lab2/fixedToFloat.v";
static const char *ng1 = "Entered fixed point %b";
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {31, 0};
static int ng6[] = {1, 0};



static void Always_32_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t37[8];
    char t39[8];
    char t43[8];
    char t49[8];
    char t85[8];
    char t92[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    char *t117;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    t3 = (t0 + 3512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t5, 32);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 31);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 31);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = ((char*)((ng3)));
    memset(t28, 0, 8);
    t19 = (t6 + 4);
    t20 = (t5 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t19);
    t17 = *((unsigned int *)t20);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t19);
    t23 = *((unsigned int *)t20);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t29 = (t21 & t25);
    if (t29 != 0)
        goto LAB18;

LAB15:    if (t24 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t28) = 1;

LAB18:    t27 = (t28 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(46, ng0);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB22:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t6, 32);
    memset(t37, 0, 8);
    t19 = (t28 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t28);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t19) != 0)
        goto LAB25;

LAB26:    t26 = (t37 + 4);
    t12 = *((unsigned int *)t37);
    t13 = (!(t12));
    t14 = *((unsigned int *)t26);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB27;

LAB28:    memcpy(t49, t37, 8);

LAB29:    t77 = (t49 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t49);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB41;

LAB42:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);
    goto LAB12;

LAB17:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(42, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    goto LAB21;

LAB23:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB25:    t20 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB26;

LAB27:    t27 = (t0 + 2408);
    t35 = (t27 + 56U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng4)));
    memset(t39, 0, 8);
    t40 = (t36 + 4);
    t41 = (t38 + 4);
    t16 = *((unsigned int *)t36);
    t17 = *((unsigned int *)t38);
    t18 = (t16 ^ t17);
    t21 = *((unsigned int *)t40);
    t22 = *((unsigned int *)t41);
    t23 = (t21 ^ t22);
    t24 = (t18 | t23);
    t25 = *((unsigned int *)t40);
    t29 = *((unsigned int *)t41);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB31;

LAB30:    if (t30 != 0)
        goto LAB32;

LAB33:    memset(t43, 0, 8);
    t44 = (t39 + 4);
    t33 = *((unsigned int *)t44);
    t34 = (~(t33));
    t45 = *((unsigned int *)t39);
    t46 = (t45 & t34);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t44) != 0)
        goto LAB36;

LAB37:    t50 = *((unsigned int *)t37);
    t51 = *((unsigned int *)t43);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = (t37 + 4);
    t54 = (t43 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB31:    *((unsigned int *)t39) = 1;
    goto LAB33;

LAB32:    t42 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t43) = 1;
    goto LAB37;

LAB36:    t48 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB37;

LAB38:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t37 + 4);
    t64 = (t43 + 4);
    t65 = *((unsigned int *)t63);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (t67 & t66);
    t69 = *((unsigned int *)t64);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (t71 & t70);
    t73 = (~(t68));
    t74 = (~(t72));
    t75 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t75 & t73);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t76 & t74);
    goto LAB40;

LAB41:    xsi_set_current_line(46, ng0);

LAB43:    xsi_set_current_line(47, ng0);
    t83 = (t0 + 1368U);
    t84 = *((char **)t83);
    t83 = (t0 + 1328U);
    t86 = (t83 + 72U);
    t87 = *((char **)t86);
    t88 = (t0 + 2568);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    xsi_vlog_generic_get_index_select_value(t85, 1, t84, t87, 2, t90, 32, 1);
    t91 = ((char*)((ng3)));
    memset(t92, 0, 8);
    t93 = (t85 + 4);
    t94 = (t91 + 4);
    t95 = *((unsigned int *)t85);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = *((unsigned int *)t93);
    t99 = *((unsigned int *)t94);
    t100 = (t98 ^ t99);
    t101 = (t97 | t100);
    t102 = *((unsigned int *)t93);
    t103 = *((unsigned int *)t94);
    t104 = (t102 | t103);
    t105 = (~(t104));
    t106 = (t101 & t105);
    if (t106 != 0)
        goto LAB47;

LAB44:    if (t104 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t92) = 1;

LAB47:    t108 = (t92 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t92);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2568);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB22;

LAB46:    t107 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(47, ng0);

LAB51:    xsi_set_current_line(48, ng0);
    t114 = (t0 + 2568);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    t117 = (t0 + 2408);
    xsi_vlogvar_assign_value(t117, t116, 0, 0, 5);
    goto LAB50;

}


extern void work_m_02564273793927233735_2924049845_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_02564273793927233735_2924049845", "isim/lab2_tb_isim_beh.exe.sim/work/m_02564273793927233735_2924049845.didat");
	xsi_register_executes(pe);
}
