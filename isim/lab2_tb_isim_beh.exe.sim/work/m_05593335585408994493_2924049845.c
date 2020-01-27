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
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};
static int ng6[] = {31, 0};
static const char *ng7 = "leadpos value is %d";
static int ng8[] = {4194304, 0};
static const char *ng9 = "Leadpos Error";
static int ng10[] = {127, 0};
static const char *ng11 = "biased_exponent is %d";
static const char *ng12 = "fraction is %b";



static void Always_34_0(char *t0)
{
    char t6[8];
    char t28[8];
    char t37[8];
    char t43[8];
    char t47[8];
    char t57[8];
    char t73[8];
    char t81[8];
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
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 0, ng1, 2, t0, (char)118, t5, 32);
    xsi_set_current_line(39, ng0);
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

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(44, ng0);
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

LAB20:    xsi_set_current_line(50, ng0);

LAB25:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB21:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB26:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t28, 0, 8);
    xsi_vlog_signed_greater(t28, 32, t4, 32, t6, 32);
    t19 = (t28 + 4);
    t7 = *((unsigned int *)t19);
    t8 = (~(t7));
    t9 = *((unsigned int *)t28);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t0 + 1208U);
    t20 = *((char **)t19);
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB73;

LAB72:    t26 = (t20 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t5) < *((unsigned int *)t20))
        goto LAB74;

LAB75:    t35 = (t6 + 4);
    t7 = *((unsigned int *)t35);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(81, ng0);

LAB81:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2568);
    t5 = (t3 + 56U);
    t19 = *((char **)t5);
    t20 = (t0 + 1208U);
    t26 = *((char **)t20);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t19, 5, t26, 5);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t2, 32, t6, 32);
    t20 = (t0 + 2248);
    xsi_vlogvar_assign_value(t20, t28, 0, 0, 8);

LAB79:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng11, 2, t0, (char)118, t5, 8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t5, 23);

LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 32);
    goto LAB12;

LAB17:    t26 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 1928);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    *((unsigned int *)t6) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB24;

LAB23:    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 32);
    goto LAB21;

LAB24:    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t4);
    *((unsigned int *)t6) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB23;

LAB27:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t20 = (t0 + 2088);
    t26 = (t20 + 56U);
    t27 = *((char **)t26);
    t35 = (t0 + 2088);
    t36 = (t35 + 72U);
    t38 = *((char **)t36);
    t39 = (t0 + 2728);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    xsi_vlog_generic_get_index_select_value(t37, 1, t27, t38, 2, t41, 32, 1);
    t42 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t44 = (t37 + 4);
    t45 = (t42 + 4);
    t12 = *((unsigned int *)t37);
    t13 = *((unsigned int *)t42);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t44);
    t16 = *((unsigned int *)t45);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t21 = *((unsigned int *)t44);
    t22 = *((unsigned int *)t45);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB33;

LAB30:    if (t23 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t43) = 1;

LAB33:    memset(t47, 0, 8);
    t48 = (t43 + 4);
    t29 = *((unsigned int *)t48);
    t30 = (~(t29));
    t31 = *((unsigned int *)t43);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t48) != 0)
        goto LAB36;

LAB37:    t50 = (t47 + 4);
    t34 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t50);
    t52 = (t34 || t51);
    if (t52 > 0)
        goto LAB38;

LAB39:    memcpy(t81, t47, 8);

LAB40:    t113 = (t81 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t81);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    goto LAB26;

LAB32:    t46 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t47) = 1;
    goto LAB37;

LAB36:    t49 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB37;

LAB38:    t53 = (t0 + 2568);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng5)));
    memset(t57, 0, 8);
    t58 = (t55 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t58);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB44;

LAB41:    if (t69 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t57) = 1;

LAB44:    memset(t73, 0, 8);
    t74 = (t57 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t57);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t74) != 0)
        goto LAB47;

LAB48:    t82 = *((unsigned int *)t47);
    t83 = *((unsigned int *)t73);
    t84 = (t82 & t83);
    *((unsigned int *)t81) = t84;
    t85 = (t47 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB40;

LAB43:    t72 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t73) = 1;
    goto LAB48;

LAB47:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB48;

LAB49:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t47 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t47);
    t98 = (~(t97));
    t99 = *((unsigned int *)t95);
    t100 = (~(t99));
    t101 = *((unsigned int *)t73);
    t102 = (~(t101));
    t103 = *((unsigned int *)t96);
    t104 = (~(t103));
    t105 = (t98 & t100);
    t106 = (t102 & t104);
    t107 = (~(t105));
    t108 = (~(t106));
    t109 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t109 & t107);
    t110 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t110 & t108);
    t111 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t111 & t107);
    t112 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t112 & t108);
    goto LAB51;

LAB52:    xsi_set_current_line(57, ng0);

LAB55:    xsi_set_current_line(58, ng0);
    t119 = (t0 + 2728);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    t122 = (t0 + 2568);
    xsi_vlogvar_assign_value(t122, t121, 0, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)118, t4, 5);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t19 = (t4 + 4);
    t20 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB59;

LAB56:    if (t16 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(63, ng0);

LAB64:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB65:    t5 = ((char*)((ng3)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t105 == 1)
        goto LAB66;

LAB67:
LAB69:
LAB68:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng9, 1, t0);

LAB70:
LAB62:    goto LAB54;

LAB58:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(60, ng0);

LAB63:    xsi_set_current_line(61, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 2408);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 23);
    goto LAB62;

LAB66:    xsi_set_current_line(65, ng0);

LAB71:    xsi_set_current_line(66, ng0);
    t19 = (t0 + 2088);
    t20 = (t19 + 56U);
    t26 = *((char **)t20);
    t27 = (t0 + 2088);
    t35 = (t27 + 72U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t26, t36, 2, t38, 32, 1);
    t39 = (t0 + 2888);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t19, 32);
    t20 = (t0 + 2888);
    xsi_vlogvar_assign_value(t20, t6, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 23);
    goto LAB70;

LAB73:    t27 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;
    goto LAB75;

LAB77:    xsi_set_current_line(77, ng0);

LAB80:    xsi_set_current_line(79, ng0);
    t36 = ((char*)((ng10)));
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    t38 = (t0 + 2568);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 32, t39, 5, t41, 5);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t36, 32, t28, 32);
    t42 = (t0 + 2248);
    xsi_vlogvar_assign_value(t42, t37, 0, 0, 8);
    goto LAB79;

}


extern void work_m_05593335585408994493_2924049845_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_05593335585408994493_2924049845", "isim/lab2_tb_isim_beh.exe.sim/work/m_05593335585408994493_2924049845.didat");
	xsi_register_executes(pe);
}
