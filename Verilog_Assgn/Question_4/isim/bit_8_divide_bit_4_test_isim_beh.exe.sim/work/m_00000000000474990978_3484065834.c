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
static const char *ng0 = "C:/CS223_Hardware_Lab/Verilog_Assgn/Question_4/bit_8_divide_bit_4_test.v";
static unsigned int ng1[] = {255U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {253U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {63U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {165U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {103U, 0U};
static unsigned int ng11[] = {3U, 0U};



static void Initial_43_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 50000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 920);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB1;

}


extern void work_m_00000000000474990978_3484065834_init()
{
	static char *pe[] = {(void *)Initial_43_0};
	xsi_register_didat("work_m_00000000000474990978_3484065834", "isim/bit_8_divide_bit_4_test_isim_beh.exe.sim/work/m_00000000000474990978_3484065834.didat");
	xsi_register_executes(pe);
}
