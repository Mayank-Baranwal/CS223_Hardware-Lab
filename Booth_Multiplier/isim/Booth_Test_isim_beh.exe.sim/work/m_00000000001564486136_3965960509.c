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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/CS223_Hardware_Lab/Booth_Multiplier/Booth_Mul.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {1, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};



static void Always_30_0(char *t0)
{
    char t6[8];
    char t13[8];
    char t14[8];
    char t15[8];
    char t89[8];
    char t91[8];
    char t92[8];
    char t93[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
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
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2152);
    *((int *)t2) = 1;
    t3 = (t0 + 1840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 1196);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 3);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 1012);
    t16 = (t0 + 1012);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    t20 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t23 = (t9 & t8);
    t4 = (t0 + 3268);
    *((int *)t4) = t23;

LAB8:    t5 = (t0 + 3268);
    if (*((int *)t5) > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t17);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t22 = (t9 | t12);
    t25 = *((unsigned int *)t18);
    t29 = *((unsigned int *)t19);
    t32 = (t25 | t29);
    t34 = (~(t32));
    t35 = (t22 & t34);
    if (t35 != 0)
        goto LAB49;

LAB46:    if (t32 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t13) = 1;

LAB49:    t21 = (t13 + 4);
    t40 = *((unsigned int *)t21);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t45 = (t42 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t16, 32, 1);
    t17 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t17);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t22 = (t9 | t12);
    t25 = *((unsigned int *)t18);
    t29 = *((unsigned int *)t19);
    t32 = (t25 | t29);
    t34 = (~(t32));
    t35 = (t22 & t34);
    if (t35 != 0)
        goto LAB66;

LAB63:    if (t32 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t13) = 1;

LAB66:    t21 = (t13 + 4);
    t40 = *((unsigned int *)t21);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t45 = (t42 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB67;

LAB68:
LAB69:    goto LAB2;

LAB6:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t5, t6, t33, *((unsigned int *)t14), t37);
    goto LAB7;

LAB9:    xsi_set_current_line(37, ng0);

LAB11:    xsi_set_current_line(38, ng0);
    t16 = (t0 + 1196);
    t17 = (t16 + 36U);
    t18 = *((char **)t17);
    t19 = (t0 + 1196);
    t20 = (t19 + 44U);
    t21 = *((char **)t20);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t18, t21, 2, t24, 32, 1);
    t28 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t38 = (t6 + 4);
    t39 = (t28 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t28);
    t12 = (t10 ^ t11);
    t22 = *((unsigned int *)t38);
    t25 = *((unsigned int *)t39);
    t29 = (t22 ^ t25);
    t32 = (t12 | t29);
    t34 = *((unsigned int *)t38);
    t35 = *((unsigned int *)t39);
    t40 = (t34 | t35);
    t41 = (~(t40));
    t42 = (t32 & t41);
    if (t42 != 0)
        goto LAB15;

LAB12:    if (t40 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;

LAB15:    t44 = (t13 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t13);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1196);
    t16 = (t5 + 44U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t17, 2, t18, 32, 1);
    t19 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t20 = (t6 + 4);
    t21 = (t19 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t19);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t20);
    t11 = *((unsigned int *)t21);
    t12 = (t10 ^ t11);
    t22 = (t9 | t12);
    t25 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t21);
    t32 = (t25 | t29);
    t34 = (~(t32));
    t35 = (t22 & t34);
    if (t35 != 0)
        goto LAB32;

LAB29:    if (t32 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t28 = (t13 + 4);
    t40 = *((unsigned int *)t28);
    t41 = (~(t40));
    t42 = *((unsigned int *)t13);
    t45 = (t42 & t41);
    t46 = (t45 != 0);
    if (t46 > 0)
        goto LAB33;

LAB34:
LAB35:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 6, t4, 6, t5, 32);
    t16 = (t0 + 1012);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 6);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t16 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t17 = (t0 + 1288);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 3, t4, 3, t5, 32);
    t16 = (t0 + 1196);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 3);
    t2 = (t0 + 3268);
    t23 = *((int *)t2);
    *((int *)t2) = (t23 - 1);
    goto LAB8;

LAB14:    t43 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(39, ng0);

LAB19:    xsi_set_current_line(40, ng0);
    t50 = (t0 + 1288);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t54 = (t52 + 4);
    t55 = (t53 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t53);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB23;

LAB20:    if (t65 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t14) = 1;

LAB23:    t69 = (t14 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t14);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB18;

LAB22:    t68 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(42, ng0);
    t75 = (t0 + 1104);
    t76 = (t75 + 36U);
    t77 = *((char **)t76);
    memset(t15, 0, 8);
    t78 = (t15 + 4);
    t79 = (t77 + 4);
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 0);
    *((unsigned int *)t15) = t81;
    t82 = *((unsigned int *)t79);
    t83 = (t82 >> 0);
    *((unsigned int *)t78) = t83;
    t84 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t84 & 63U);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 & 63U);
    t86 = (t0 + 1012);
    t87 = (t86 + 36U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_add(t89, 6, t15, 6, t88, 6);
    t90 = (t0 + 1104);
    t94 = (t0 + 1104);
    t95 = (t94 + 44U);
    t96 = *((char **)t95);
    t97 = ((char*)((ng6)));
    t98 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t91, t92, t93, ((int*)(t96)), 2, t97, 32, 1, t98, 32, 1);
    t99 = (t91 + 4);
    t100 = *((unsigned int *)t99);
    t26 = (!(t100));
    t101 = (t92 + 4);
    t102 = *((unsigned int *)t101);
    t27 = (!(t102));
    t30 = (t26 && t27);
    t103 = (t93 + 4);
    t104 = *((unsigned int *)t103);
    t31 = (!(t104));
    t33 = (t30 && t31);
    if (t33 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t105 = *((unsigned int *)t93);
    t36 = (t105 + 0);
    t106 = *((unsigned int *)t91);
    t107 = *((unsigned int *)t92);
    t37 = (t106 - t107);
    t108 = (t37 + 1);
    xsi_vlogvar_assign_value(t90, t89, t36, *((unsigned int *)t92), t108);
    goto LAB28;

LAB31:    t24 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(46, ng0);

LAB36:    xsi_set_current_line(47, ng0);
    t38 = (t0 + 1288);
    t39 = (t38 + 36U);
    t43 = *((char **)t39);
    t44 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t50 = (t43 + 4);
    t51 = (t44 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = (t49 | t58);
    t60 = *((unsigned int *)t50);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB40;

LAB37:    if (t62 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t14) = 1;

LAB40:    t53 = (t14 + 4);
    t65 = *((unsigned int *)t53);
    t66 = (~(t65));
    t67 = *((unsigned int *)t14);
    t70 = (t67 & t66);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB35;

LAB39:    t52 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(49, ng0);
    t54 = (t0 + 1104);
    t55 = (t54 + 36U);
    t68 = *((char **)t55);
    memset(t15, 0, 8);
    t69 = (t15 + 4);
    t75 = (t68 + 4);
    t72 = *((unsigned int *)t68);
    t73 = (t72 >> 0);
    *((unsigned int *)t15) = t73;
    t74 = *((unsigned int *)t75);
    t80 = (t74 >> 0);
    *((unsigned int *)t69) = t80;
    t81 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t81 & 63U);
    t82 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t82 & 63U);
    t76 = (t0 + 1012);
    t77 = (t76 + 36U);
    t78 = *((char **)t77);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_minus(t89, 6, t15, 6, t78, 6);
    t79 = (t0 + 1104);
    t86 = (t0 + 1104);
    t87 = (t86 + 44U);
    t88 = *((char **)t87);
    t90 = ((char*)((ng6)));
    t94 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t91, t92, t93, ((int*)(t88)), 2, t90, 32, 1, t94, 32, 1);
    t95 = (t91 + 4);
    t83 = *((unsigned int *)t95);
    t23 = (!(t83));
    t96 = (t92 + 4);
    t84 = *((unsigned int *)t96);
    t26 = (!(t84));
    t27 = (t23 && t26);
    t97 = (t93 + 4);
    t85 = *((unsigned int *)t97);
    t30 = (!(t85));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB44;

LAB45:    goto LAB43;

LAB44:    t100 = *((unsigned int *)t93);
    t33 = (t100 + 0);
    t102 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t92);
    t36 = (t102 - t104);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t79, t89, t33, *((unsigned int *)t92), t37);
    goto LAB45;

LAB48:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(57, ng0);

LAB53:    xsi_set_current_line(58, ng0);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 668U);
    t38 = (t24 + 44U);
    t39 = *((char **)t38);
    t43 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t28, t39, 2, t43, 32, 1);
    t44 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t50 = (t14 + 4);
    t51 = (t44 + 4);
    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = (t49 | t58);
    t60 = *((unsigned int *)t50);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB57;

LAB54:    if (t62 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t15) = 1;

LAB57:    t53 = (t15 + 4);
    t65 = *((unsigned int *)t53);
    t66 = (~(t65));
    t67 = *((unsigned int *)t15);
    t70 = (t67 & t66);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB52;

LAB56:    t52 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(59, ng0);
    t54 = ((char*)((ng5)));
    t55 = (t0 + 1104);
    t68 = (t0 + 1104);
    t69 = (t68 + 44U);
    t75 = *((char **)t69);
    t76 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t89, t75, 2, t76, 32, 1);
    t77 = (t89 + 4);
    t72 = *((unsigned int *)t77);
    t23 = (!(t72));
    if (t23 == 1)
        goto LAB61;

LAB62:    goto LAB60;

LAB61:    xsi_vlogvar_assign_value(t55, t54, 0, *((unsigned int *)t89), 1);
    goto LAB62;

LAB65:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(63, ng0);

LAB70:    xsi_set_current_line(64, ng0);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 668U);
    t38 = (t24 + 44U);
    t39 = *((char **)t38);
    t43 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t14, 32, t28, t39, 2, t43, 32, 1);
    t44 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t50 = (t14 + 4);
    t51 = (t44 + 4);
    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t44);
    t49 = (t47 ^ t48);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = (t49 | t58);
    t60 = *((unsigned int *)t50);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    t63 = (~(t62));
    t64 = (t59 & t63);
    if (t64 != 0)
        goto LAB74;

LAB71:    if (t62 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t15) = 1;

LAB74:    t53 = (t15 + 4);
    t65 = *((unsigned int *)t53);
    t66 = (~(t65));
    t67 = *((unsigned int *)t15);
    t70 = (t67 & t66);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB75;

LAB76:
LAB77:    goto LAB69;

LAB73:    t52 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(65, ng0);
    t54 = ((char*)((ng5)));
    t55 = (t0 + 1104);
    t68 = (t0 + 1104);
    t69 = (t68 + 44U);
    t75 = *((char **)t69);
    t76 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t89, t75, 2, t76, 32, 1);
    t77 = (t89 + 4);
    t72 = *((unsigned int *)t77);
    t23 = (!(t72));
    if (t23 == 1)
        goto LAB78;

LAB79:    goto LAB77;

LAB78:    xsi_vlogvar_assign_value(t55, t54, 0, *((unsigned int *)t89), 1);
    goto LAB79;

}

static void Cont_69_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2204);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 6);
    t18 = (t0 + 2160);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001564486136_3965960509_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Cont_69_1};
	xsi_register_didat("work_m_00000000001564486136_3965960509", "isim/Booth_Test_isim_beh.exe.sim/work/m_00000000001564486136_3965960509.didat");
	xsi_register_executes(pe);
}
