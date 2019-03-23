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
static const char *ng0 = "C:/CS223_Hardware_Lab/ALU_3bit/ALU_3bit.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {5, 0};
static int ng5[] = {3, 0};



static void Always_25_0(char *t0)
{
    char t6[8];
    char t9[8];
    char t33[8];
    char t38[8];
    char t63[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1968);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1104);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 6);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB9;

LAB6:    if (t21 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB27;

LAB24:    if (t21 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t9) = 1;

LAB27:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB28;

LAB29:
LAB30:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB42;

LAB39:    if (t21 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t9) = 1;

LAB42:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB43;

LAB44:
LAB45:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 576U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t7, 32, 1);
    t8 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB64;

LAB61:    if (t21 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t9) = 1;

LAB64:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB65;

LAB66:
LAB67:    goto LAB2;

LAB8:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t31 = (t0 + 600U);
    t32 = *((char **)t31);
    t31 = (t0 + 576U);
    t34 = (t31 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t32, t35, 2, t36, 32, 1);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t33 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB17;

LAB14:    if (t50 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t38) = 1;

LAB17:    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB12;

LAB16:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(31, ng0);
    t60 = (t0 + 692U);
    t61 = *((char **)t60);
    t60 = (t0 + 784U);
    t62 = *((char **)t60);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t60 = (t61 + 4);
    t67 = (t62 + 4);
    t68 = (t63 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB21;

LAB22:
LAB23:    t94 = (t0 + 1104);
    xsi_vlogvar_assign_value(t94, t63, 0, 0, 6);
    goto LAB20;

LAB21:    t74 = *((unsigned int *)t63);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t63) = (t74 | t75);
    t76 = (t61 + 4);
    t77 = (t62 + 4);
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t88);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    goto LAB23;

LAB26:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(35, ng0);

LAB31:    xsi_set_current_line(36, ng0);
    t31 = (t0 + 600U);
    t32 = *((char **)t31);
    t31 = (t0 + 576U);
    t34 = (t31 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t32, t35, 2, t36, 32, 1);
    t37 = ((char*)((ng2)));
    memset(t38, 0, 8);
    t39 = (t33 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB35;

LAB32:    if (t50 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t38) = 1;

LAB35:    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB36;

LAB37:
LAB38:    goto LAB30;

LAB34:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(37, ng0);
    t60 = (t0 + 692U);
    t61 = *((char **)t60);
    t60 = (t0 + 784U);
    t62 = *((char **)t60);
    memset(t63, 0, 8);
    xsi_vlog_unsigned_multiply(t63, 6, t61, 3, t62, 3);
    t60 = (t0 + 1104);
    xsi_vlogvar_assign_value(t60, t63, 0, 0, 6);
    goto LAB38;

LAB41:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(41, ng0);

LAB46:    xsi_set_current_line(42, ng0);
    t31 = (t0 + 600U);
    t32 = *((char **)t31);
    t31 = (t0 + 576U);
    t34 = (t31 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t32, t35, 2, t36, 32, 1);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    t39 = (t33 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB50;

LAB47:    if (t50 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t38) = 1;

LAB50:    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB51;

LAB52:
LAB53:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    t4 = (t0 + 1104);
    t5 = (t4 + 44U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng4)));
    t10 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t6, t9, t33, ((int*)(t7)), 2, t8, 32, 1, t10, 32, 1);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t86 = (!(t12));
    t24 = (t9 + 4);
    t13 = *((unsigned int *)t24);
    t87 = (!(t13));
    t106 = (t86 && t87);
    t25 = (t33 + 4);
    t14 = *((unsigned int *)t25);
    t107 = (!(t14));
    t108 = (t106 && t107);
    if (t108 == 1)
        goto LAB59;

LAB60:    goto LAB45;

LAB49:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(43, ng0);
    t60 = (t0 + 692U);
    t61 = *((char **)t60);
    t60 = (t0 + 784U);
    t62 = *((char **)t60);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 & t65);
    *((unsigned int *)t95) = t66;
    t60 = (t61 + 4);
    t67 = (t62 + 4);
    t68 = (t95 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB54;

LAB55:
LAB56:    memset(t63, 0, 8);
    t94 = (t63 + 4);
    t96 = (t95 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (~(t97));
    *((unsigned int *)t63) = t98;
    *((unsigned int *)t94) = 0;
    if (*((unsigned int *)t96) != 0)
        goto LAB58;

LAB57:    t103 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t103 & 63U);
    t104 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t104 & 63U);
    t105 = (t0 + 1104);
    xsi_vlogvar_assign_value(t105, t63, 0, 0, 6);
    goto LAB53;

LAB54:    t74 = *((unsigned int *)t95);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t95) = (t74 | t75);
    t76 = (t61 + 4);
    t77 = (t62 + 4);
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t76);
    t81 = (~(t80));
    t82 = *((unsigned int *)t62);
    t83 = (~(t82));
    t84 = *((unsigned int *)t77);
    t85 = (~(t84));
    t86 = (t79 & t81);
    t87 = (t83 & t85);
    t88 = (~(t86));
    t89 = (~(t87));
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t88);
    t91 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t91 & t89);
    t92 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t92 & t88);
    t93 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t93 & t89);
    goto LAB56;

LAB58:    t99 = *((unsigned int *)t63);
    t100 = *((unsigned int *)t96);
    *((unsigned int *)t63) = (t99 | t100);
    t101 = *((unsigned int *)t94);
    t102 = *((unsigned int *)t96);
    *((unsigned int *)t94) = (t101 | t102);
    goto LAB57;

LAB59:    t15 = *((unsigned int *)t33);
    t109 = (t15 + 0);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t9);
    t110 = (t16 - t17);
    t111 = (t110 + 1);
    xsi_vlogvar_assign_value(t3, t2, t109, *((unsigned int *)t9), t111);
    goto LAB60;

LAB63:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(48, ng0);

LAB68:    xsi_set_current_line(49, ng0);
    t31 = (t0 + 600U);
    t32 = *((char **)t31);
    t31 = (t0 + 576U);
    t34 = (t31 + 44U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t33, 32, t32, t35, 2, t36, 32, 1);
    t37 = ((char*)((ng3)));
    memset(t38, 0, 8);
    t39 = (t33 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t33);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t40);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB72;

LAB69:    if (t50 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t38) = 1;

LAB72:    t54 = (t38 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t38);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB67;

LAB71:    t53 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(50, ng0);
    t60 = (t0 + 692U);
    t61 = *((char **)t60);
    t60 = (t0 + 784U);
    t62 = *((char **)t60);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 ^ t65);
    *((unsigned int *)t63) = t66;
    t60 = (t61 + 4);
    t67 = (t62 + 4);
    t68 = (t63 + 4);
    t69 = *((unsigned int *)t60);
    t70 = *((unsigned int *)t67);
    t71 = (t69 | t70);
    *((unsigned int *)t68) = t71;
    t72 = *((unsigned int *)t68);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB76;

LAB77:
LAB78:    t76 = (t0 + 1104);
    xsi_vlogvar_assign_value(t76, t63, 0, 0, 6);
    goto LAB75;

LAB76:    t74 = *((unsigned int *)t63);
    t75 = *((unsigned int *)t68);
    *((unsigned int *)t63) = (t74 | t75);
    goto LAB78;

}

static void Cont_55_1(char *t0)
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

LAB0:    t1 = (t0 + 1772U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2020);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 63U;
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
    xsi_driver_vfirst_trans(t5, 0, 5);
    t18 = (t0 + 1976);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000752653963_0434317919_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Cont_55_1};
	xsi_register_didat("work_m_00000000000752653963_0434317919", "isim/ALU_Test_isim_beh.exe.sim/work/m_00000000000752653963_0434317919.didat");
	xsi_register_executes(pe);
}
