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
static const char *ng0 = "C:/CS223_Hardware_Lab/Testing/J_K_Flip_Flop/D_Flip_Flop.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Always_25_0(char *t0)
{
    char t8[8];
    char t21[8];
    char t34[8];
    char t50[8];
    char t58[8];
    char t96[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1824);
    *((int *)t2) = 1;
    t3 = (t0 + 1656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t21, 0, 8);
    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t7) != 0)
        goto LAB12;

LAB13:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB14;

LAB15:    memcpy(t58, t21, 8);

LAB16:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t8) = 1;

LAB40:    memset(t21, 0, 8);
    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t7) != 0)
        goto LAB43;

LAB44:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB45;

LAB46:    memcpy(t58, t21, 8);

LAB47:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t8) = 1;

LAB65:    memset(t21, 0, 8);
    t7 = (t8 + 4);
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t8);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t7) != 0)
        goto LAB68;

LAB69:    t28 = (t21 + 4);
    t29 = *((unsigned int *)t21);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB70;

LAB71:    memcpy(t58, t21, 8);

LAB72:    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB86:
LAB61:
LAB30:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB8:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB12:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB13;

LAB14:    t32 = (t0 + 692U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB20;

LAB17:    if (t46 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t34) = 1;

LAB20:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t51) != 0)
        goto LAB23;

LAB24:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t50) = 1;
    goto LAB24;

LAB23:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB27;

LAB28:    xsi_set_current_line(29, ng0);
    t97 = (t0 + 1104);
    t98 = (t97 + 36U);
    t99 = *((char **)t98);
    memset(t96, 0, 8);
    t100 = (t99 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t99);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB34;

LAB32:    if (*((unsigned int *)t100) == 0)
        goto LAB31;

LAB33:    t106 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t106) = 1;

LAB34:    t107 = (t96 + 4);
    t108 = (t99 + 4);
    t109 = *((unsigned int *)t99);
    t110 = (~(t109));
    *((unsigned int *)t96) = t110;
    *((unsigned int *)t107) = 0;
    if (*((unsigned int *)t108) != 0)
        goto LAB36;

LAB35:    t115 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t115 & 1U);
    t116 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t116 & 1U);
    t117 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t117, t96, 0, 0, 1, 0LL);
    goto LAB30;

LAB31:    *((unsigned int *)t96) = 1;
    goto LAB34;

LAB36:    t111 = *((unsigned int *)t96);
    t112 = *((unsigned int *)t108);
    *((unsigned int *)t96) = (t111 | t112);
    t113 = *((unsigned int *)t107);
    t114 = *((unsigned int *)t108);
    *((unsigned int *)t107) = (t113 | t114);
    goto LAB35;

LAB39:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t21) = 1;
    goto LAB44;

LAB43:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB44;

LAB45:    t32 = (t0 + 692U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB51;

LAB48:    if (t46 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t34) = 1;

LAB51:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t51) != 0)
        goto LAB54;

LAB55:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB50:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t50) = 1;
    goto LAB55;

LAB54:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB55;

LAB56:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB58;

LAB59:    xsi_set_current_line(31, ng0);
    t97 = ((char*)((ng1)));
    t98 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    goto LAB61;

LAB64:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t21) = 1;
    goto LAB69;

LAB68:    t27 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB69;

LAB70:    t32 = (t0 + 692U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB76;

LAB73:    if (t46 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t34) = 1;

LAB76:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t51) != 0)
        goto LAB79;

LAB80:    t59 = *((unsigned int *)t21);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t21 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB81;

LAB82:
LAB83:    goto LAB72;

LAB75:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t50) = 1;
    goto LAB80;

LAB79:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB80;

LAB81:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t21 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t21);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB83;

LAB84:    xsi_set_current_line(33, ng0);
    t97 = ((char*)((ng2)));
    t98 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    goto LAB86;

}


extern void work_m_00000000002168175281_4214665605_init()
{
	static char *pe[] = {(void *)Always_25_0};
	xsi_register_didat("work_m_00000000002168175281_4214665605", "isim/j_k_test_isim_beh.exe.sim/work/m_00000000002168175281_4214665605.didat");
	xsi_register_executes(pe);
}
