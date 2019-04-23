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
static const char *ng0 = "C:/CS223_Hardware_Lab/Verilog_Assgn/Question_5/distributive_verification.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {8U, 0U};



static void Always_28_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t22[8];
    char t38[8];
    char t54[8];
    char t70[8];
    char t78[8];
    char t116[8];
    char t128[8];
    char t138[8];
    char t140[8];
    char t141[8];
    char t142[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
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
    unsigned int t68;
    char *t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t139;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    unsigned int t149;
    int t150;
    char *t151;
    unsigned int t152;
    int t153;
    int t154;
    char *t155;
    unsigned int t156;
    int t157;
    int t158;
    unsigned int t159;
    int t160;
    unsigned int t161;
    unsigned int t162;
    int t163;
    int t164;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2060);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t2);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t25 = (t11 ^ t12);
    t26 = (t10 | t25);
    t27 = *((unsigned int *)t4);
    t28 = *((unsigned int *)t5);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB67;

LAB64:    if (t29 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t6) = 1;

LAB67:    t13 = (t6 + 4);
    t32 = *((unsigned int *)t13);
    t33 = (~(t32));
    t34 = *((unsigned int *)t6);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB2;

LAB7:    xsi_set_current_line(33, ng0);

LAB9:    xsi_set_current_line(34, ng0);
    t13 = (t0 + 692U);
    t14 = *((char **)t13);
    t13 = (t0 + 668U);
    t16 = (t13 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1196);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 32, t14, t17, 2, t20, 32, 1);
    t21 = ((char*)((ng1)));
    memset(t22, 0, 8);
    t23 = (t15 + 4);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = (t27 | t30);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t24);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t31 & t35);
    if (t36 != 0)
        goto LAB13;

LAB10:    if (t34 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t22) = 1;

LAB13:    memset(t38, 0, 8);
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t22);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t39) != 0)
        goto LAB16;

LAB17:    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB18;

LAB19:    memcpy(t78, t38, 8);

LAB20:    t110 = (t78 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t78);
    t114 = (t113 & t112);
    t115 = (t114 != 0);
    if (t115 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 668U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = (t0 + 1196);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 32, t3, t5, 2, t14, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t17 = (t6 + 4);
    t18 = (t16 + 4);
    t8 = *((unsigned int *)t6);
    t9 = *((unsigned int *)t16);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t17);
    t12 = *((unsigned int *)t18);
    t25 = (t11 ^ t12);
    t26 = (t10 | t25);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t18);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB40;

LAB37:    if (t29 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t15) = 1;

LAB40:    memset(t22, 0, 8);
    t20 = (t15 + 4);
    t32 = *((unsigned int *)t20);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t20) != 0)
        goto LAB43;

LAB44:    t23 = (t22 + 4);
    t40 = *((unsigned int *)t22);
    t41 = *((unsigned int *)t23);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB45;

LAB46:    memcpy(t70, t22, 8);

LAB47:    t82 = (t70 + 4);
    t105 = *((unsigned int *)t82);
    t106 = (~(t105));
    t107 = *((unsigned int *)t70);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB34:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_arith_rshift(t6, 8, t4, 8, t5, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 668U);
    t4 = (t2 + 44U);
    t5 = *((char **)t4);
    t7 = (t0 + 1196);
    t13 = (t7 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_index_select_value(t6, 1, t3, t5, 2, t14, 32, 1);
    t16 = (t0 + 1104);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB12:    t37 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t38) = 1;
    goto LAB17;

LAB16:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB17;

LAB18:    t50 = (t0 + 1104);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    t53 = ((char*)((ng3)));
    memset(t54, 0, 8);
    t55 = (t52 + 4);
    t56 = (t53 + 4);
    t57 = *((unsigned int *)t52);
    t58 = *((unsigned int *)t53);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t56);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t55);
    t65 = *((unsigned int *)t56);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB24;

LAB21:    if (t66 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t54) = 1;

LAB24:    memset(t70, 0, 8);
    t71 = (t54 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t54);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t71) != 0)
        goto LAB27;

LAB28:    t79 = *((unsigned int *)t38);
    t80 = *((unsigned int *)t70);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t38 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t69 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t70) = 1;
    goto LAB28;

LAB27:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB28;

LAB29:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t38 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t38);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t70);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB31;

LAB32:    xsi_set_current_line(35, ng0);
    t117 = (t0 + 1012);
    t118 = (t117 + 36U);
    t119 = *((char **)t118);
    memset(t116, 0, 8);
    t120 = (t116 + 4);
    t121 = (t119 + 4);
    t122 = *((unsigned int *)t119);
    t123 = (t122 >> 4);
    *((unsigned int *)t116) = t123;
    t124 = *((unsigned int *)t121);
    t125 = (t124 >> 4);
    *((unsigned int *)t120) = t125;
    t126 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t126 & 15U);
    t127 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t127 & 15U);
    t129 = (t0 + 600U);
    t130 = *((char **)t129);
    memset(t128, 0, 8);
    t129 = (t128 + 4);
    t131 = (t130 + 4);
    t132 = *((unsigned int *)t130);
    t133 = (t132 >> 0);
    *((unsigned int *)t128) = t133;
    t134 = *((unsigned int *)t131);
    t135 = (t134 >> 0);
    *((unsigned int *)t129) = t135;
    t136 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t136 & 15U);
    t137 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t137 & 15U);
    memset(t138, 0, 8);
    xsi_vlog_unsigned_add(t138, 4, t116, 4, t128, 4);
    t139 = (t0 + 1012);
    t143 = (t0 + 1012);
    t144 = (t143 + 44U);
    t145 = *((char **)t144);
    t146 = ((char*)((ng4)));
    t147 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t140, t141, t142, ((int*)(t145)), 2, t146, 32, 1, t147, 32, 1);
    t148 = (t140 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (!(t149));
    t151 = (t141 + 4);
    t152 = *((unsigned int *)t151);
    t153 = (!(t152));
    t154 = (t150 && t153);
    t155 = (t142 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (!(t156));
    t158 = (t154 && t157);
    if (t158 == 1)
        goto LAB35;

LAB36:    goto LAB34;

LAB35:    t159 = *((unsigned int *)t142);
    t160 = (t159 + 0);
    t161 = *((unsigned int *)t140);
    t162 = *((unsigned int *)t141);
    t163 = (t161 - t162);
    t164 = (t163 + 1);
    xsi_vlogvar_assign_value(t139, t138, t160, *((unsigned int *)t141), t164);
    goto LAB36;

LAB39:    t19 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t22) = 1;
    goto LAB44;

LAB43:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB45:    t24 = (t0 + 1104);
    t37 = (t24 + 36U);
    t39 = *((char **)t37);
    t45 = ((char*)((ng1)));
    memset(t38, 0, 8);
    t46 = (t39 + 4);
    t50 = (t45 + 4);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t45);
    t47 = (t43 ^ t44);
    t48 = *((unsigned int *)t46);
    t49 = *((unsigned int *)t50);
    t57 = (t48 ^ t49);
    t58 = (t47 | t57);
    t59 = *((unsigned int *)t46);
    t60 = *((unsigned int *)t50);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB51;

LAB48:    if (t61 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t38) = 1;

LAB51:    memset(t54, 0, 8);
    t52 = (t38 + 4);
    t64 = *((unsigned int *)t52);
    t65 = (~(t64));
    t66 = *((unsigned int *)t38);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t52) != 0)
        goto LAB54;

LAB55:    t72 = *((unsigned int *)t22);
    t73 = *((unsigned int *)t54);
    t74 = (t72 & t73);
    *((unsigned int *)t70) = t74;
    t55 = (t22 + 4);
    t56 = (t54 + 4);
    t69 = (t70 + 4);
    t75 = *((unsigned int *)t55);
    t76 = *((unsigned int *)t56);
    t79 = (t75 | t76);
    *((unsigned int *)t69) = t79;
    t80 = *((unsigned int *)t69);
    t81 = (t80 != 0);
    if (t81 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB50:    t51 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t54) = 1;
    goto LAB55;

LAB54:    t53 = (t54 + 4);
    *((unsigned int *)t54) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB55;

LAB56:    t85 = *((unsigned int *)t70);
    t86 = *((unsigned int *)t69);
    *((unsigned int *)t70) = (t85 | t86);
    t71 = (t22 + 4);
    t77 = (t54 + 4);
    t87 = *((unsigned int *)t22);
    t88 = (~(t87));
    t89 = *((unsigned int *)t71);
    t90 = (~(t89));
    t91 = *((unsigned int *)t54);
    t94 = (~(t91));
    t95 = *((unsigned int *)t77);
    t96 = (~(t95));
    t102 = (t88 & t90);
    t103 = (t94 & t96);
    t97 = (~(t102));
    t98 = (~(t103));
    t99 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t99 & t97);
    t100 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t100 & t98);
    t101 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t101 & t97);
    t104 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t104 & t98);
    goto LAB58;

LAB59:    xsi_set_current_line(37, ng0);
    t83 = (t0 + 1012);
    t84 = (t83 + 36U);
    t92 = *((char **)t84);
    memset(t78, 0, 8);
    t93 = (t78 + 4);
    t110 = (t92 + 4);
    t111 = *((unsigned int *)t92);
    t112 = (t111 >> 4);
    *((unsigned int *)t78) = t112;
    t113 = *((unsigned int *)t110);
    t114 = (t113 >> 4);
    *((unsigned int *)t93) = t114;
    t115 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t115 & 15U);
    t122 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t122 & 15U);
    t117 = (t0 + 600U);
    t118 = *((char **)t117);
    memset(t116, 0, 8);
    t117 = (t116 + 4);
    t119 = (t118 + 4);
    t123 = *((unsigned int *)t118);
    t124 = (t123 >> 0);
    *((unsigned int *)t116) = t124;
    t125 = *((unsigned int *)t119);
    t126 = (t125 >> 0);
    *((unsigned int *)t117) = t126;
    t127 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t127 & 15U);
    t132 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t132 & 15U);
    memset(t128, 0, 8);
    xsi_vlog_unsigned_minus(t128, 4, t78, 4, t116, 4);
    t120 = (t0 + 1012);
    t121 = (t0 + 1012);
    t129 = (t121 + 44U);
    t130 = *((char **)t129);
    t131 = ((char*)((ng4)));
    t139 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t138, t140, t141, ((int*)(t130)), 2, t131, 32, 1, t139, 32, 1);
    t143 = (t138 + 4);
    t133 = *((unsigned int *)t143);
    t150 = (!(t133));
    t144 = (t140 + 4);
    t134 = *((unsigned int *)t144);
    t153 = (!(t134));
    t154 = (t150 && t153);
    t145 = (t141 + 4);
    t135 = *((unsigned int *)t145);
    t157 = (!(t135));
    t158 = (t154 && t157);
    if (t158 == 1)
        goto LAB62;

LAB63:    goto LAB61;

LAB62:    t136 = *((unsigned int *)t141);
    t160 = (t136 + 0);
    t137 = *((unsigned int *)t138);
    t149 = *((unsigned int *)t140);
    t163 = (t137 - t149);
    t164 = (t163 + 1);
    xsi_vlogvar_assign_value(t120, t128, t160, *((unsigned int *)t140), t164);
    goto LAB63;

LAB66:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(42, ng0);
    t14 = (t0 + 1012);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    xsi_vlog_signed_unary_minus(t15, 8, t17, 8);
    t18 = (t0 + 1012);
    xsi_vlogvar_assign_value(t18, t15, 0, 0, 8);
    goto LAB70;

}

static void Cont_44_1(char *t0)
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

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2112);
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
    t18 = (t0 + 2068);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001304921668_4046732839_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_44_1};
	xsi_register_didat("work_m_00000000001304921668_4046732839", "isim/distributive_verification_test_isim_beh.exe.sim/work/m_00000000001304921668_4046732839.didat");
	xsi_register_executes(pe);
}
