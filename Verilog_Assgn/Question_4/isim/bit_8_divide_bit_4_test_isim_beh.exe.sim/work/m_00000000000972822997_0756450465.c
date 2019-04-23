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
static const char *ng0 = "C:/CS223_Hardware_Lab/Verilog_Assgn/Question_4/bit_8_divide_bit_4.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {7, 0};
static int ng4[] = {3, 0};
static int ng5[] = {8, 0};
static int ng6[] = {2, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t34[8];
    char t39[8];
    char t49[8];
    char t61[8];
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t62;

LAB0:    t1 = (t0 + 2180U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2664);
    *((int *)t2) = 1;
    t3 = (t0 + 2208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(36, ng0);
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
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t5 = (t0 + 1380);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(37, ng0);
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
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 1564);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t14 = (t0 + 1656);
    t16 = (t0 + 1656);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t14 = (t0 + 1656);
    t16 = (t0 + 1656);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1380);
    t13 = (t5 + 44U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t17);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t21 = (t9 | t12);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1564);
    t13 = (t5 + 44U);
    t14 = *((char **)t13);
    t16 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t4, t14, 2, t16, 32, 1);
    t17 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t18 = (t6 + 4);
    t19 = (t17 + 4);
    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t17);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t18);
    t11 = *((unsigned int *)t19);
    t12 = (t10 ^ t11);
    t21 = (t9 | t12);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB20;

LAB17:    if (t25 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t15) = 1;

LAB20:    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1472);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t2);
    t22 = (t9 & t8);
    t4 = (t0 + 4044);
    *((int *)t4) = t22;

LAB24:    t5 = (t0 + 4044);
    if (*((int *)t5) > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 255U);
    t14 = (t0 + 1104);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t23 = (t21 >> 0);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 255U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 255U);
    t20 = (t0 + 1564);
    t28 = (t20 + 36U);
    t35 = *((char **)t28);
    memset(t34, 0, 8);
    t36 = (t34 + 4);
    t37 = (t35 + 4);
    t29 = *((unsigned int *)t35);
    t30 = (t29 >> 0);
    *((unsigned int *)t34) = t30;
    t31 = *((unsigned int *)t37);
    t32 = (t31 >> 0);
    *((unsigned int *)t36) = t32;
    t33 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t33 & 15U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 15U);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 8, t15, 8, t34, 8);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_minus(t49, 8, t6, 8, t39, 8);
    t38 = (t0 + 1196);
    xsi_vlogvar_assign_value(t38, t49, 0, 0, 4);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t13 = (t4 + 4);
    t14 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t12 = (t10 ^ t11);
    t21 = (t9 | t12);
    t23 = *((unsigned int *)t13);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB47;

LAB44:    if (t25 != 0)
        goto LAB46;

LAB45:    *((unsigned int *)t15) = 1;

LAB47:    memset(t6, 0, 8);
    t17 = (t15 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    t31 = *((unsigned int *)t15);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t17) == 0)
        goto LAB48;

LAB50:    t18 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t18) = 1;

LAB51:    t19 = (t6 + 4);
    t43 = *((unsigned int *)t19);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(82, ng0);

LAB66:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB67:    t5 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t22 == 1)
        goto LAB68;

LAB69:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t22 == 1)
        goto LAB70;

LAB71:
LAB72:
LAB54:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t15), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t15), 1);
    goto LAB9;

LAB12:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(42, ng0);
    t35 = (t0 + 1380);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    xsi_vlog_signed_unary_minus(t34, 8, t37, 8);
    t38 = (t0 + 1380);
    xsi_vlogvar_assign_value(t38, t34, 0, 0, 8);
    goto LAB16;

LAB19:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(44, ng0);
    t35 = (t0 + 1564);
    t36 = (t35 + 36U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    xsi_vlog_signed_unary_minus(t34, 4, t37, 4);
    t38 = (t0 + 1564);
    xsi_vlogvar_assign_value(t38, t34, 0, 0, 4);
    goto LAB23;

LAB25:    xsi_set_current_line(49, ng0);

LAB27:    xsi_set_current_line(50, ng0);
    t13 = (t0 + 1104);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    t17 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_lshift(t6, 8, t16, 8, t17, 32);
    t18 = (t0 + 1104);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t13);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t14 = (t0 + 1288);
    t16 = (t0 + 1288);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t15, t18, 2, t19, 32, 1);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    if (t22 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_lshift(t6, 8, t4, 8, t5, 32);
    t13 = (t0 + 1380);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 15U);
    t14 = (t0 + 1288);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t23 = (t21 >> 0);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 255U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 255U);
    memset(t34, 0, 8);
    t20 = (t6 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB31;

LAB30:    t28 = (t15 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t6) > *((unsigned int *)t15))
        goto LAB33;

LAB32:    *((unsigned int *)t34) = 1;

LAB33:    t36 = (t34 + 4);
    t29 = *((unsigned int *)t36);
    t30 = (~(t29));
    t31 = *((unsigned int *)t34);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(59, ng0);

LAB41:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t13 = *((char **)t5);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t13, 2, t14, 32, 1);
    t16 = (t6 + 4);
    t7 = *((unsigned int *)t16);
    t22 = (!(t7));
    if (t22 == 1)
        goto LAB42;

LAB43:
LAB37:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_lshift(t6, 8, t4, 8, t5, 32);
    t13 = (t0 + 1288);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 8);
    t2 = (t0 + 4044);
    t22 = *((int *)t2);
    *((int *)t2) = (t22 - 1);
    goto LAB24;

LAB28:    xsi_vlogvar_assign_value(t14, t6, 0, *((unsigned int *)t15), 1);
    goto LAB29;

LAB31:    t35 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(54, ng0);

LAB38:    xsi_set_current_line(55, ng0);
    t37 = (t0 + 1288);
    t38 = (t37 + 36U);
    t40 = *((char **)t38);
    memset(t39, 0, 8);
    t41 = (t39 + 4);
    t42 = (t40 + 4);
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 0);
    *((unsigned int *)t39) = t44;
    t45 = *((unsigned int *)t42);
    t46 = (t45 >> 0);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 255U);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 255U);
    t50 = (t0 + 1564);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    memset(t49, 0, 8);
    t53 = (t49 + 4);
    t54 = (t52 + 4);
    t55 = *((unsigned int *)t52);
    t56 = (t55 >> 0);
    *((unsigned int *)t49) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t53) = t58;
    t59 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t59 & 15U);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 & 15U);
    memset(t61, 0, 8);
    xsi_vlog_unsigned_minus(t61, 8, t39, 8, t49, 8);
    t62 = (t0 + 1288);
    xsi_vlogvar_assign_value(t62, t61, 0, 0, 8);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t13 = *((char **)t5);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t6, t13, 2, t14, 32, 1);
    t16 = (t6 + 4);
    t7 = *((unsigned int *)t16);
    t22 = (!(t7));
    if (t22 == 1)
        goto LAB39;

LAB40:    goto LAB37;

LAB39:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB40;

LAB42:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB43;

LAB46:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB47;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(67, ng0);

LAB55:    xsi_set_current_line(68, ng0);
    t20 = (t0 + 1656);
    t28 = (t20 + 36U);
    t35 = *((char **)t28);

LAB56:    t36 = ((char*)((ng2)));
    t22 = xsi_vlog_unsigned_case_compare(t35, 2, t36, 32);
    if (t22 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng6)));
    t22 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 32);
    if (t22 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng4)));
    t22 = xsi_vlog_unsigned_case_compare(t35, 2, t2, 32);
    if (t22 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB54;

LAB57:    xsi_set_current_line(69, ng0);
    t37 = (t0 + 1104);
    t38 = (t37 + 36U);
    t40 = *((char **)t38);
    memset(t34, 0, 8);
    xsi_vlog_signed_unary_minus(t34, 8, t40, 8);
    t41 = (t0 + 1104);
    xsi_vlogvar_assign_value(t41, t34, 0, 0, 8);
    goto LAB63;

LAB59:    xsi_set_current_line(70, ng0);

LAB64:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t13 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 8, t13, 32);
    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 8, t4, 8);
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 15U);
    t14 = (t0 + 1196);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t23 = (t21 >> 0);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 15U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 15U);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 4, t6, 4, t15, 4);
    t20 = (t0 + 1196);
    xsi_vlogvar_assign_value(t20, t34, 0, 0, 4);
    goto LAB63;

LAB61:    xsi_set_current_line(75, ng0);

LAB65:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1104);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t13 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 8, t13, 32);
    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t13 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 15U);
    t14 = (t0 + 1196);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t23 = (t21 >> 0);
    *((unsigned int *)t15) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t26 & 15U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 15U);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_minus(t34, 4, t6, 4, t15, 4);
    t20 = (t0 + 1196);
    xsi_vlogvar_assign_value(t20, t34, 0, 0, 4);
    goto LAB63;

LAB68:    xsi_set_current_line(84, ng0);
    t13 = (t0 + 1104);
    t14 = (t13 + 36U);
    t16 = *((char **)t14);
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 8, t16, 8);
    t17 = (t0 + 1104);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 8);
    goto LAB72;

LAB70:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1104);
    t5 = (t3 + 36U);
    t13 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_signed_unary_minus(t6, 8, t13, 8);
    t14 = (t0 + 1104);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);
    goto LAB72;

}

static void Cont_89_1(char *t0)
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

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2724);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 2672);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_90_2(char *t0)
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

LAB0:    t1 = (t0 + 2468U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2760);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 2680);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000972822997_0756450465_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Cont_89_1,(void *)Cont_90_2};
	xsi_register_didat("work_m_00000000000972822997_0756450465", "isim/bit_8_divide_bit_4_test_isim_beh.exe.sim/work/m_00000000000972822997_0756450465.didat");
	xsi_register_executes(pe);
}
