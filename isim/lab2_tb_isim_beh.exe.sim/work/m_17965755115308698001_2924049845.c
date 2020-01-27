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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {31, 0};
static int ng6[] = {4194304, 0};
static unsigned int ng7[] = {2U, 0U};
static int ng8[] = {2097152, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {1048576, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {524288, 0};
static unsigned int ng13[] = {5U, 0U};
static int ng14[] = {262144, 0};
static unsigned int ng15[] = {6U, 0U};
static int ng16[] = {131072, 0};
static unsigned int ng17[] = {7U, 0U};
static int ng18[] = {65536, 0};
static unsigned int ng19[] = {8U, 0U};
static int ng20[] = {32768, 0};
static unsigned int ng21[] = {9U, 0U};
static int ng22[] = {16384, 0};
static unsigned int ng23[] = {10U, 0U};
static int ng24[] = {8192, 0};
static unsigned int ng25[] = {11U, 0U};
static int ng26[] = {4096, 0};
static unsigned int ng27[] = {12U, 0U};
static int ng28[] = {2048, 0};
static unsigned int ng29[] = {13U, 0U};
static int ng30[] = {1024, 0};
static unsigned int ng31[] = {14U, 0U};
static int ng32[] = {512, 0};
static unsigned int ng33[] = {15U, 0U};
static int ng34[] = {256, 0};
static unsigned int ng35[] = {16U, 0U};
static int ng36[] = {128, 0};
static unsigned int ng37[] = {17U, 0U};
static int ng38[] = {64, 0};
static unsigned int ng39[] = {18U, 0U};
static int ng40[] = {32, 0};
static unsigned int ng41[] = {19U, 0U};
static int ng42[] = {16, 0};
static unsigned int ng43[] = {20U, 0U};
static int ng44[] = {8, 0};
static unsigned int ng45[] = {21U, 0U};
static int ng46[] = {4, 0};
static unsigned int ng47[] = {22U, 0U};
static int ng48[] = {2, 0};
static unsigned int ng49[] = {23U, 0U};
static unsigned int ng50[] = {24U, 0U};
static unsigned int ng51[] = {25U, 0U};
static unsigned int ng52[] = {26U, 0U};
static unsigned int ng53[] = {27U, 0U};
static unsigned int ng54[] = {28U, 0U};
static unsigned int ng55[] = {29U, 0U};
static unsigned int ng56[] = {30U, 0U};
static unsigned int ng57[] = {31U, 0U};
static const char *ng58 = "Leadpos Error";
static int ng59[] = {127, 0};



static void Always_35_0(char *t0)
{
    char t6[8];
    char t30[8];
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
    char *t7;
    char *t8;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(42, ng0);

LAB14:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    t5 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t23 = (t17 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t8);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t31 = (t23 & t27);
    if (t31 != 0)
        goto LAB18;

LAB15:    if (t26 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t30) = 1;

LAB18:    t22 = (t30 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(50, ng0);

LAB25:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB21:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(56, ng0);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB26:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 32, t5, 32);
    memset(t30, 0, 8);
    xsi_vlog_signed_greater(t30, 32, t4, 32, t6, 32);
    t7 = (t30 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t30);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB163;

LAB162:    t21 = (t8 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB163;

LAB166:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB164;

LAB165:    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB167;

LAB168:    xsi_set_current_line(221, ng0);

LAB171:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng59)));
    t3 = (t0 + 2728);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 1208U);
    t21 = *((char **)t8);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t7, 5, t21, 5);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t2, 32, t6, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t30, 0, 0, 8);

LAB169:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2408);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 1928);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    xsi_vlogtype_concat(t6, 32, 32, 3U, t29, 1, t21, 8, t5, 23);
    t38 = (t0 + 2088);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 32);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);
    goto LAB12;

LAB17:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB22:    xsi_set_current_line(45, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    *((unsigned int *)t6) = t10;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB24;

LAB23:    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 4294967295U);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2248);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB21;

LAB24:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t6) = (t11 | t12);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t13 | t14);
    goto LAB23;

LAB27:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t8 = (t0 + 2248);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = (t0 + 2248);
    t29 = (t28 + 72U);
    t38 = *((char **)t29);
    t39 = (t0 + 2888);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    xsi_vlog_generic_get_index_select_value(t37, 1, t22, t38, 2, t41, 32, 1);
    t42 = ((char*)((ng2)));
    memset(t43, 0, 8);
    t44 = (t37 + 4);
    t45 = (t42 + 4);
    t14 = *((unsigned int *)t37);
    t15 = *((unsigned int *)t42);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t44);
    t18 = *((unsigned int *)t45);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t44);
    t24 = *((unsigned int *)t45);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB33;

LAB30:    if (t25 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t43) = 1;

LAB33:    memset(t47, 0, 8);
    t48 = (t43 + 4);
    t31 = *((unsigned int *)t48);
    t32 = (~(t31));
    t33 = *((unsigned int *)t43);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t48) != 0)
        goto LAB36;

LAB37:    t50 = (t47 + 4);
    t36 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t50);
    t52 = (t36 || t51);
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
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 2888);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
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

LAB38:    t53 = (t0 + 2728);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = ((char*)((ng4)));
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
    t119 = (t0 + 2888);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    t122 = (t0 + 2728);
    xsi_vlogvar_assign_value(t122, t121, 0, 0, 5);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(62, ng0);

LAB64:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB65:    t5 = ((char*)((ng2)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t5, 5);
    if (t105 == 1)
        goto LAB66;

LAB67:    t2 = ((char*)((ng7)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng9)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng11)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB72;

LAB73:    t2 = ((char*)((ng13)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB74;

LAB75:    t2 = ((char*)((ng15)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB76;

LAB77:    t2 = ((char*)((ng17)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB78;

LAB79:    t2 = ((char*)((ng19)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB80;

LAB81:    t2 = ((char*)((ng21)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB82;

LAB83:    t2 = ((char*)((ng23)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB84;

LAB85:    t2 = ((char*)((ng25)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB86;

LAB87:    t2 = ((char*)((ng27)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB88;

LAB89:    t2 = ((char*)((ng29)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB90;

LAB91:    t2 = ((char*)((ng31)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB92;

LAB93:    t2 = ((char*)((ng33)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB94;

LAB95:    t2 = ((char*)((ng35)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB96;

LAB97:    t2 = ((char*)((ng37)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB98;

LAB99:    t2 = ((char*)((ng39)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB100;

LAB101:    t2 = ((char*)((ng41)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB102;

LAB103:    t2 = ((char*)((ng43)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB104;

LAB105:    t2 = ((char*)((ng45)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB106;

LAB107:    t2 = ((char*)((ng47)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB108;

LAB109:    t2 = ((char*)((ng49)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB110;

LAB111:    t2 = ((char*)((ng50)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB112;

LAB113:    t2 = ((char*)((ng51)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB114;

LAB115:    t2 = ((char*)((ng52)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB116;

LAB117:    t2 = ((char*)((ng53)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB118;

LAB119:    t2 = ((char*)((ng54)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB120;

LAB121:    t2 = ((char*)((ng55)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB122;

LAB123:    t2 = ((char*)((ng56)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB124;

LAB125:    t2 = ((char*)((ng57)));
    t105 = xsi_vlog_unsigned_case_compare(t4, 5, t2, 5);
    if (t105 == 1)
        goto LAB126;

LAB127:
LAB129:
LAB128:    xsi_set_current_line(210, ng0);
    xsi_vlogfile_write(1, 0, 0, ng58, 1, t0);

LAB130:
LAB62:    goto LAB54;

LAB58:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(59, ng0);

LAB63:    xsi_set_current_line(60, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2568);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 23);
    goto LAB62;

LAB66:    xsi_set_current_line(64, ng0);

LAB131:    xsi_set_current_line(65, ng0);
    t7 = (t0 + 2248);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = (t0 + 2248);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t38 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t21, t29, 2, t38, 32, 1);
    t39 = (t0 + 3048);
    xsi_vlogvar_assign_value(t39, t6, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB68:    xsi_set_current_line(69, ng0);

LAB132:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 3U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB70:    xsi_set_current_line(74, ng0);

LAB133:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 7U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB72:    xsi_set_current_line(79, ng0);

LAB134:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 15U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 15U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng12)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB74:    xsi_set_current_line(84, ng0);

LAB135:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 31U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng14)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB76:    xsi_set_current_line(89, ng0);

LAB136:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 63U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 63U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng16)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB78:    xsi_set_current_line(94, ng0);

LAB137:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 127U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 127U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng18)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB80:    xsi_set_current_line(99, ng0);

LAB138:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 255U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng20)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB82:    xsi_set_current_line(104, ng0);

LAB139:    xsi_set_current_line(105, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 511U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 511U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng22)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB84:    xsi_set_current_line(109, ng0);

LAB140:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 1023U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 1023U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng24)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB86:    xsi_set_current_line(114, ng0);

LAB141:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 2047U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 2047U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng26)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB88:    xsi_set_current_line(119, ng0);

LAB142:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4095U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 4095U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng28)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB90:    xsi_set_current_line(124, ng0);

LAB143:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8191U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8191U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng30)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB92:    xsi_set_current_line(129, ng0);

LAB144:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 16383U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 16383U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng32)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB94:    xsi_set_current_line(134, ng0);

LAB145:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 32767U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 32767U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng34)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB96:    xsi_set_current_line(139, ng0);

LAB146:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 65535U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng36)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB98:    xsi_set_current_line(144, ng0);

LAB147:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 131071U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 131071U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng38)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB100:    xsi_set_current_line(149, ng0);

LAB148:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 262143U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 262143U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng40)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB102:    xsi_set_current_line(154, ng0);

LAB149:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 524287U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 524287U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng42)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB104:    xsi_set_current_line(159, ng0);

LAB150:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 1048575U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 1048575U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng44)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB106:    xsi_set_current_line(164, ng0);

LAB151:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 2097151U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 2097151U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng46)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB108:    xsi_set_current_line(169, ng0);

LAB152:    xsi_set_current_line(170, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4194303U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 4194303U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng48)));
    memset(t6, 0, 8);
    xsi_vlog_signed_multiply(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB110:    xsi_set_current_line(174, ng0);

LAB153:    xsi_set_current_line(175, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB112:    xsi_set_current_line(178, ng0);

LAB154:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB114:    xsi_set_current_line(182, ng0);

LAB155:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 2);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB116:    xsi_set_current_line(186, ng0);

LAB156:    xsi_set_current_line(187, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 3);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 3);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB118:    xsi_set_current_line(190, ng0);

LAB157:    xsi_set_current_line(191, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 4);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 4);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB120:    xsi_set_current_line(194, ng0);

LAB158:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 5);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 5);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB122:    xsi_set_current_line(198, ng0);

LAB159:    xsi_set_current_line(199, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 6);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 6);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB124:    xsi_set_current_line(202, ng0);

LAB160:    xsi_set_current_line(203, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 7);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 7);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB126:    xsi_set_current_line(206, ng0);

LAB161:    xsi_set_current_line(207, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 8);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 8);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 8388607U);
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 8388607U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t6, 0, 0, 32);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 23);
    goto LAB130;

LAB163:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB165;

LAB164:    *((unsigned int *)t6) = 1;
    goto LAB165;

LAB167:    xsi_set_current_line(217, ng0);

LAB170:    xsi_set_current_line(219, ng0);
    t29 = ((char*)((ng59)));
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    t38 = (t0 + 2728);
    t40 = (t38 + 56U);
    t41 = *((char **)t40);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_minus(t30, 32, t39, 5, t41, 5);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_minus(t37, 32, t29, 32, t30, 32);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t37, 0, 0, 8);
    goto LAB169;

}


extern void work_m_17965755115308698001_2924049845_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_17965755115308698001_2924049845", "isim/lab2_tb_isim_beh.exe.sim/work/m_17965755115308698001_2924049845.didat");
	xsi_register_executes(pe);
}
