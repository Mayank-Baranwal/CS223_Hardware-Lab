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
static const char *ng0 = "C:/CS223_Hardware_Lab/Testing/FSM_Moore_Behavioural/Moore_Pattern.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t6[8];
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
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2204);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1196);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
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

LAB11:    xsi_set_current_line(46, ng0);

LAB26:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB27:    t5 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t32 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t32 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t32 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t32 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t32 == 1)
        goto LAB36;

LAB37:
LAB38:
LAB12:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);

LAB39:    t7 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 3, t7, 32);
    if (t32 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t32 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t32 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t32 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t32 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t28 = (t0 + 1012);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);

LAB14:    t31 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t31, 32);
    if (t32 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 32);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 32);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 32);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 32);
    if (t32 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(38, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 1012);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 3);
    goto LAB25;

LAB17:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB25;

LAB19:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB25;

LAB21:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB25;

LAB23:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);
    goto LAB25;

LAB28:    xsi_set_current_line(48, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1012);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    goto LAB38;

LAB30:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB38;

LAB32:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB38;

LAB34:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB38;

LAB36:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 3);
    goto LAB38;

LAB40:    xsi_set_current_line(56, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 1104);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 1);
    goto LAB50;

LAB42:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    goto LAB50;

LAB44:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    goto LAB50;

LAB46:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng1)));
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    goto LAB50;

LAB48:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng2)));
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    goto LAB50;

}

static void Cont_64_2(char *t0)
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

LAB0:    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2256);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 2212);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002747652326_3175377508_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_32_1,(void *)Cont_64_2};
	xsi_register_didat("work_m_00000000002747652326_3175377508", "isim/Moore_Pattern_Test_isim_beh.exe.sim/work/m_00000000002747652326_3175377508.didat");
	xsi_register_executes(pe);
}
