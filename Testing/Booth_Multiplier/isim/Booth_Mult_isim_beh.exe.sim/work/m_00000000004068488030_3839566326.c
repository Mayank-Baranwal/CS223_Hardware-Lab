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
static const char *ng0 = "C:/CS223_Hardware_Lab/Testing/Booth_Multiplier/Booth_Mult.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {8, 0};
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {8U, 0U};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char t66[8];
    char t67[8];
    char t68[8];
    char t69[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    int t13;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1564);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    t7 = (t0 + 1012);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t9, 2, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (!(t12));
    if (t13 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1012);
    t4 = (t0 + 1012);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    t9 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t6, t14, t15, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t10 = (t6 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (!(t12));
    t11 = (t14 + 4);
    t16 = *((unsigned int *)t11);
    t17 = (!(t16));
    t18 = (t13 && t17);
    t19 = (t15 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t16 = (~(t12));
    t20 = *((unsigned int *)t2);
    t13 = (t20 & t16);
    t4 = (t0 + 2936);
    *((int *)t4) = t13;

LAB10:    t5 = (t0 + 2936);
    if (*((int *)t5) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t2);
    t20 = (t12 ^ t16);
    t23 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t23 ^ t25);
    t29 = (t20 | t26);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t5);
    t34 = (t30 | t31);
    t35 = (~(t34));
    t36 = (t29 & t35);
    if (t36 != 0)
        goto LAB35;

LAB32:    if (t34 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t6) = 1;

LAB35:    t8 = (t6 + 4);
    t37 = *((unsigned int *)t8);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t15);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t14);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t14), t28);
    goto LAB9;

LAB11:    xsi_set_current_line(30, ng0);

LAB13:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1012);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t23 = *((unsigned int *)t9);
    t25 = (t23 >> 0);
    *((unsigned int *)t6) = t25;
    t26 = *((unsigned int *)t11);
    t29 = (t26 >> 0);
    *((unsigned int *)t10) = t29;
    t30 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t30 & 3U);
    t31 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t31 & 3U);
    t19 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t32 = (t6 + 4);
    t33 = (t19 + 4);
    t34 = *((unsigned int *)t6);
    t35 = *((unsigned int *)t19);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB17;

LAB14:    if (t43 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t14) = 1;

LAB17:    t47 = (t14 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t14);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t16 = (t12 >> 0);
    *((unsigned int *)t6) = t16;
    t20 = *((unsigned int *)t7);
    t23 = (t20 >> 0);
    *((unsigned int *)t5) = t23;
    t25 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t25 & 3U);
    t26 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t26 & 3U);
    t8 = ((char*)((ng6)));
    memset(t14, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t29 = *((unsigned int *)t6);
    t30 = *((unsigned int *)t8);
    t31 = (t29 ^ t30);
    t34 = *((unsigned int *)t9);
    t35 = *((unsigned int *)t10);
    t36 = (t34 ^ t35);
    t37 = (t31 | t36);
    t38 = *((unsigned int *)t9);
    t39 = *((unsigned int *)t10);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB26;

LAB23:    if (t40 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB26:    t19 = (t14 + 4);
    t43 = *((unsigned int *)t19);
    t44 = (~(t43));
    t45 = *((unsigned int *)t14);
    t48 = (t45 & t44);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB20:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_arith_rshift(t6, 9, t4, 9, t5, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 9);
    t2 = (t0 + 2936);
    t13 = *((int *)t2);
    *((int *)t2) = (t13 - 1);
    goto LAB10;

LAB16:    t46 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(32, ng0);
    t53 = (t0 + 1012);
    t54 = (t53 + 36U);
    t55 = *((char **)t54);
    memset(t15, 0, 8);
    t56 = (t15 + 4);
    t57 = (t55 + 4);
    t58 = *((unsigned int *)t55);
    t59 = (t58 >> 5);
    *((unsigned int *)t15) = t59;
    t60 = *((unsigned int *)t57);
    t61 = (t60 >> 5);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t62 & 15U);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t63 & 15U);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_add(t66, 4, t15, 4, t65, 4);
    t64 = (t0 + 1012);
    t70 = (t0 + 1012);
    t71 = (t70 + 44U);
    t72 = *((char **)t71);
    t73 = ((char*)((ng4)));
    t74 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t67, t68, t69, ((int*)(t72)), 2, t73, 32, 1, t74, 32, 1);
    t75 = (t67 + 4);
    t76 = *((unsigned int *)t75);
    t17 = (!(t76));
    t77 = (t68 + 4);
    t78 = *((unsigned int *)t77);
    t18 = (!(t78));
    t21 = (t17 && t18);
    t79 = (t69 + 4);
    t80 = *((unsigned int *)t79);
    t22 = (!(t80));
    t24 = (t21 && t22);
    if (t24 == 1)
        goto LAB21;

LAB22:    goto LAB20;

LAB21:    t81 = *((unsigned int *)t69);
    t27 = (t81 + 0);
    t82 = *((unsigned int *)t67);
    t83 = *((unsigned int *)t68);
    t28 = (t82 - t83);
    t84 = (t28 + 1);
    xsi_vlogvar_assign_value(t64, t66, t27, *((unsigned int *)t68), t84);
    goto LAB22;

LAB25:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(34, ng0);
    t32 = (t0 + 1012);
    t33 = (t32 + 36U);
    t46 = *((char **)t33);
    memset(t15, 0, 8);
    t47 = (t15 + 4);
    t53 = (t46 + 4);
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 5);
    *((unsigned int *)t15) = t51;
    t52 = *((unsigned int *)t53);
    t58 = (t52 >> 5);
    *((unsigned int *)t47) = t58;
    t59 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t59 & 15U);
    t60 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t60 & 15U);
    t54 = (t0 + 600U);
    t55 = *((char **)t54);
    memset(t66, 0, 8);
    xsi_vlog_unsigned_minus(t66, 4, t15, 4, t55, 4);
    t54 = (t0 + 1012);
    t56 = (t0 + 1012);
    t57 = (t56 + 44U);
    t64 = *((char **)t57);
    t65 = ((char*)((ng4)));
    t70 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t67, t68, t69, ((int*)(t64)), 2, t65, 32, 1, t70, 32, 1);
    t71 = (t67 + 4);
    t61 = *((unsigned int *)t71);
    t13 = (!(t61));
    t72 = (t68 + 4);
    t62 = *((unsigned int *)t72);
    t17 = (!(t62));
    t18 = (t13 && t17);
    t73 = (t69 + 4);
    t63 = *((unsigned int *)t73);
    t21 = (!(t63));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB30:    t76 = *((unsigned int *)t69);
    t24 = (t76 + 0);
    t78 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t68);
    t27 = (t78 - t80);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t54, t66, t24, *((unsigned int *)t68), t28);
    goto LAB31;

LAB34:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(38, ng0);
    t9 = (t0 + 1012);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t15, 0, 8);
    t19 = (t15 + 4);
    t32 = (t11 + 4);
    t42 = *((unsigned int *)t11);
    t43 = (t42 >> 1);
    *((unsigned int *)t15) = t43;
    t44 = *((unsigned int *)t32);
    t45 = (t44 >> 1);
    *((unsigned int *)t19) = t45;
    t48 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t48 & 255U);
    t49 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t49 & 255U);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_unary_minus(t14, 8, t15, 8);
    t33 = (t0 + 1012);
    t46 = (t0 + 1012);
    t47 = (t46 + 44U);
    t53 = *((char **)t47);
    t54 = ((char*)((ng4)));
    t55 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t66, t67, t68, ((int*)(t53)), 2, t54, 32, 1, t55, 32, 1);
    t56 = (t66 + 4);
    t50 = *((unsigned int *)t56);
    t13 = (!(t50));
    t57 = (t67 + 4);
    t51 = *((unsigned int *)t57);
    t17 = (!(t51));
    t18 = (t13 && t17);
    t64 = (t68 + 4);
    t52 = *((unsigned int *)t64);
    t21 = (!(t52));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB39;

LAB40:    goto LAB38;

LAB39:    t58 = *((unsigned int *)t68);
    t24 = (t58 + 0);
    t59 = *((unsigned int *)t66);
    t60 = *((unsigned int *)t67);
    t27 = (t59 - t60);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t33, t14, t24, *((unsigned int *)t67), t28);
    goto LAB40;

}

static void Cont_41_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1012);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 255U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 255U);
    t14 = (t0 + 1928);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 255U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 7);
    t27 = (t0 + 1884);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_00000000004068488030_3839566326_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_41_1};
	xsi_register_didat("work_m_00000000004068488030_3839566326", "isim/Booth_Mult_isim_beh.exe.sim/work/m_00000000004068488030_3839566326.didat");
	xsi_register_executes(pe);
}
