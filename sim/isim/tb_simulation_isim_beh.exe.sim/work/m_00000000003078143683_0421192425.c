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
static const char *ng0 = "C:/mohd/___job/Company/V-Nova/fpga-design-task/sim/image_read.v";
static int ng1[] = {778593656, 0, 1718185061, 0, 1852863860, 0, 105, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {3, 0};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {0U, 0U};
static unsigned int ng8[] = {2U, 0U};
static unsigned int ng9[] = {3U, 0U};



static void Initial_76_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(76, ng0);

LAB2:    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3272);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 744);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t4, 32);
    xsi_vlogfile_readmemh(t1, 104, t2, 1, *((unsigned int *)t3), 1, *((unsigned int *)t6));

LAB1:    return;
}

static void Always_81_1(char *t0)
{
    char t8[8];
    char t32[8];
    char t33[8];
    char t34[8];
    char t43[8];
    char t44[8];
    char t48[8];
    char t49[8];
    char t66[8];
    char t67[8];
    char t68[8];
    char t72[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t45;
    char *t46;
    char *t47;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    int t60;
    char *t61;
    int t62;
    int t63;
    int t64;
    int t65;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 4860U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6496);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2628);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);

LAB13:    xsi_set_current_line(83, ng0);
    xsi_set_current_line(83, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 3824);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);

LAB14:    t2 = (t0 + 3824);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 264);
    t6 = *((char **)t5);
    t5 = (t0 + 344);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t5 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 32, t8, 32, t5, 32);
    memset(t33, 0, 8);
    xsi_vlog_signed_less(t33, 32, t4, 32, t32, 32);
    t9 = (t33 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t33);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(87, ng0);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB20:    t2 = (t0 + 3824);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 344);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t6, 32);
    t5 = (t8 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:    goto LAB12;

LAB15:    xsi_set_current_line(83, ng0);

LAB17:    xsi_set_current_line(84, ng0);
    t10 = (t0 + 3272);
    t23 = (t10 + 36U);
    t24 = *((char **)t23);
    t30 = (t0 + 3272);
    t31 = (t30 + 44U);
    t35 = *((char **)t31);
    t36 = (t0 + 3272);
    t37 = (t36 + 40U);
    t38 = *((char **)t37);
    t39 = (t0 + 3824);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng2)));
    memset(t43, 0, 8);
    xsi_vlog_signed_add(t43, 32, t41, 32, t42, 32);
    xsi_vlog_generic_get_array_select_value(t34, 8, t24, t35, t38, 2, 1, t43, 32, 1);
    memset(t44, 0, 8);
    t45 = (t44 + 4);
    t46 = (t34 + 4);
    t16 = *((unsigned int *)t34);
    t17 = (t16 >> 0);
    *((unsigned int *)t44) = t17;
    t18 = *((unsigned int *)t46);
    t19 = (t18 >> 0);
    *((unsigned int *)t45) = t19;
    t20 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t20 & 255U);
    t21 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t21 & 255U);
    t47 = (t0 + 3364);
    t50 = (t0 + 3364);
    t51 = (t50 + 44U);
    t52 = *((char **)t51);
    t53 = (t0 + 3364);
    t54 = (t53 + 40U);
    t55 = *((char **)t54);
    t56 = (t0 + 3824);
    t57 = (t56 + 36U);
    t58 = *((char **)t57);
    xsi_vlog_generic_convert_array_indices(t48, t49, t52, t55, 1, 1, t58, 32, 1);
    t59 = (t48 + 4);
    t22 = *((unsigned int *)t59);
    t60 = (!(t22));
    t61 = (t49 + 4);
    t25 = *((unsigned int *)t61);
    t62 = (!(t25));
    t63 = (t60 && t62);
    if (t63 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3824);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB14;

LAB18:    t26 = *((unsigned int *)t48);
    t27 = *((unsigned int *)t49);
    t64 = (t26 - t27);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t47, t44, 0, *((unsigned int *)t49), t65);
    goto LAB19;

LAB21:    xsi_set_current_line(87, ng0);

LAB23:    xsi_set_current_line(88, ng0);
    xsi_set_current_line(88, ng0);
    t7 = ((char*)((ng2)));
    t9 = (t0 + 3916);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);

LAB24:    t2 = (t0 + 3916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 264);
    t6 = *((char **)t5);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t6, 32);
    t5 = (t8 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3824);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3824);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB20;

LAB25:    xsi_set_current_line(88, ng0);

LAB27:    xsi_set_current_line(89, ng0);
    t7 = (t0 + 3364);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t23 = (t0 + 3364);
    t24 = (t23 + 44U);
    t30 = *((char **)t24);
    t31 = (t0 + 3364);
    t35 = (t31 + 40U);
    t36 = *((char **)t35);
    t37 = (t0 + 264);
    t38 = *((char **)t37);
    t37 = ((char*)((ng5)));
    memset(t33, 0, 8);
    xsi_vlog_signed_multiply(t33, 32, t38, 32, t37, 32);
    t39 = (t0 + 344);
    t40 = *((char **)t39);
    t39 = (t0 + 3824);
    t41 = (t39 + 36U);
    t42 = *((char **)t41);
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t40, 32, t42, 32);
    t45 = ((char*)((ng3)));
    memset(t43, 0, 8);
    xsi_vlog_signed_minus(t43, 32, t34, 32, t45, 32);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t33, 32, t43, 32);
    t46 = ((char*)((ng5)));
    t47 = (t0 + 3916);
    t50 = (t47 + 36U);
    t51 = *((char **)t50);
    memset(t48, 0, 8);
    xsi_vlog_signed_multiply(t48, 32, t46, 32, t51, 32);
    memset(t49, 0, 8);
    xsi_vlog_signed_add(t49, 32, t44, 32, t48, 32);
    t52 = ((char*)((ng2)));
    memset(t66, 0, 8);
    xsi_vlog_signed_add(t66, 32, t49, 32, t52, 32);
    xsi_vlog_generic_get_array_select_value(t32, 32, t10, t30, t36, 1, 1, t66, 32, 1);
    t53 = (t0 + 3456);
    t54 = (t0 + 3456);
    t55 = (t54 + 44U);
    t56 = *((char **)t55);
    t57 = (t0 + 3456);
    t58 = (t57 + 40U);
    t59 = *((char **)t58);
    t61 = (t0 + 264);
    t69 = *((char **)t61);
    t61 = (t0 + 3824);
    t70 = (t61 + 36U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    xsi_vlog_signed_multiply(t72, 32, t69, 32, t71, 32);
    t73 = (t0 + 3916);
    t74 = (t73 + 36U);
    t75 = *((char **)t74);
    memset(t76, 0, 8);
    xsi_vlog_signed_add(t76, 32, t72, 32, t75, 32);
    xsi_vlog_generic_convert_array_indices(t67, t68, t56, t59, 1, 1, t76, 32, 1);
    t77 = (t67 + 4);
    t16 = *((unsigned int *)t77);
    t60 = (!(t16));
    t78 = (t68 + 4);
    t17 = *((unsigned int *)t78);
    t62 = (!(t17));
    t63 = (t60 && t62);
    if (t63 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3364);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3364);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t9 = (t0 + 3364);
    t10 = (t9 + 40U);
    t23 = *((char **)t10);
    t24 = (t0 + 264);
    t30 = *((char **)t24);
    t24 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 32, t30, 32, t24, 32);
    t31 = (t0 + 344);
    t35 = *((char **)t31);
    t31 = (t0 + 3824);
    t36 = (t31 + 36U);
    t37 = *((char **)t36);
    memset(t33, 0, 8);
    xsi_vlog_signed_minus(t33, 32, t35, 32, t37, 32);
    t38 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t33, 32, t38, 32);
    memset(t43, 0, 8);
    xsi_vlog_signed_multiply(t43, 32, t32, 32, t34, 32);
    t39 = ((char*)((ng5)));
    t40 = (t0 + 3916);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t39, 32, t42, 32);
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t43, 32, t44, 32);
    t45 = ((char*)((ng3)));
    memset(t49, 0, 8);
    xsi_vlog_signed_add(t49, 32, t48, 32, t45, 32);
    xsi_vlog_generic_get_array_select_value(t8, 32, t4, t7, t23, 1, 1, t49, 32, 1);
    t46 = (t0 + 3548);
    t47 = (t0 + 3548);
    t50 = (t47 + 44U);
    t51 = *((char **)t50);
    t52 = (t0 + 3548);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    t55 = (t0 + 264);
    t56 = *((char **)t55);
    t55 = (t0 + 3824);
    t57 = (t55 + 36U);
    t58 = *((char **)t57);
    memset(t68, 0, 8);
    xsi_vlog_signed_multiply(t68, 32, t56, 32, t58, 32);
    t59 = (t0 + 3916);
    t61 = (t59 + 36U);
    t69 = *((char **)t61);
    memset(t72, 0, 8);
    xsi_vlog_signed_add(t72, 32, t68, 32, t69, 32);
    xsi_vlog_generic_convert_array_indices(t66, t67, t51, t54, 1, 1, t72, 32, 1);
    t70 = (t66 + 4);
    t11 = *((unsigned int *)t70);
    t60 = (!(t11));
    t71 = (t67 + 4);
    t12 = *((unsigned int *)t71);
    t62 = (!(t12));
    t63 = (t60 && t62);
    if (t63 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3364);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3364);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t9 = (t0 + 3364);
    t10 = (t9 + 40U);
    t23 = *((char **)t10);
    t24 = (t0 + 264);
    t30 = *((char **)t24);
    t24 = ((char*)((ng5)));
    memset(t32, 0, 8);
    xsi_vlog_signed_multiply(t32, 32, t30, 32, t24, 32);
    t31 = (t0 + 344);
    t35 = *((char **)t31);
    t31 = (t0 + 3824);
    t36 = (t31 + 36U);
    t37 = *((char **)t36);
    memset(t33, 0, 8);
    xsi_vlog_signed_minus(t33, 32, t35, 32, t37, 32);
    t38 = ((char*)((ng3)));
    memset(t34, 0, 8);
    xsi_vlog_signed_minus(t34, 32, t33, 32, t38, 32);
    memset(t43, 0, 8);
    xsi_vlog_signed_multiply(t43, 32, t32, 32, t34, 32);
    t39 = ((char*)((ng5)));
    t40 = (t0 + 3916);
    t41 = (t40 + 36U);
    t42 = *((char **)t41);
    memset(t44, 0, 8);
    xsi_vlog_signed_multiply(t44, 32, t39, 32, t42, 32);
    memset(t48, 0, 8);
    xsi_vlog_signed_add(t48, 32, t43, 32, t44, 32);
    t45 = ((char*)((ng6)));
    memset(t49, 0, 8);
    xsi_vlog_signed_add(t49, 32, t48, 32, t45, 32);
    xsi_vlog_generic_get_array_select_value(t8, 32, t4, t7, t23, 1, 1, t49, 32, 1);
    t46 = (t0 + 3640);
    t47 = (t0 + 3640);
    t50 = (t47 + 44U);
    t51 = *((char **)t50);
    t52 = (t0 + 3640);
    t53 = (t52 + 40U);
    t54 = *((char **)t53);
    t55 = (t0 + 264);
    t56 = *((char **)t55);
    t55 = (t0 + 3824);
    t57 = (t55 + 36U);
    t58 = *((char **)t57);
    memset(t68, 0, 8);
    xsi_vlog_signed_multiply(t68, 32, t56, 32, t58, 32);
    t59 = (t0 + 3916);
    t61 = (t59 + 36U);
    t69 = *((char **)t61);
    memset(t72, 0, 8);
    xsi_vlog_signed_add(t72, 32, t68, 32, t69, 32);
    xsi_vlog_generic_convert_array_indices(t66, t67, t51, t54, 1, 1, t72, 32, 1);
    t70 = (t66 + 4);
    t11 = *((unsigned int *)t70);
    t60 = (!(t11));
    t71 = (t67 + 4);
    t12 = *((unsigned int *)t71);
    t62 = (!(t12));
    t63 = (t60 && t62);
    if (t63 == 1)
        goto LAB32;

LAB33:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 3916);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB24;

LAB28:    t18 = *((unsigned int *)t67);
    t19 = *((unsigned int *)t68);
    t64 = (t18 - t19);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t53, t32, 0, *((unsigned int *)t68), t65);
    goto LAB29;

LAB30:    t13 = *((unsigned int *)t66);
    t14 = *((unsigned int *)t67);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t46, t8, 0, *((unsigned int *)t67), t65);
    goto LAB31;

LAB32:    t13 = *((unsigned int *)t66);
    t14 = *((unsigned int *)t67);
    t64 = (t13 - t14);
    t65 = (t64 + 1);
    xsi_vlogvar_assign_value(t46, t8, 0, *((unsigned int *)t67), t65);
    goto LAB33;

}

static void Always_101_2(char *t0)
{
    char t4[8];
    char t23[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
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
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;

LAB0:    t1 = (t0 + 5004U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 6504);
    *((int *)t2) = 1;
    t3 = (t0 + 5032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t5 = (t0 + 1572U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(107, ng0);

LAB14:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1572U);
    t3 = *((char **)t2);
    t2 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1572U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t4) = 1;

LAB18:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB22:    t20 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = *((unsigned int *)t20);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB23;

LAB24:    memcpy(t60, t23, 8);

LAB25:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB39:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(103, ng0);

LAB13:    xsi_set_current_line(104, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2720);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t23) = 1;
    goto LAB22;

LAB21:    t19 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB22;

LAB23:    t32 = (t0 + 2720);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng7)));
    memset(t36, 0, 8);
    t37 = (t34 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB29;

LAB26:    if (t48 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t36) = 1;

LAB29:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t53) != 0)
        goto LAB32;

LAB33:    t61 = *((unsigned int *)t23);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t23 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB28:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t52) = 1;
    goto LAB33;

LAB32:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB33;

LAB34:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t23 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t23);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB36;

LAB37:    xsi_set_current_line(110, ng0);
    t98 = ((char*)((ng4)));
    t99 = (t0 + 2628);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 1, 0LL);
    goto LAB39;

}

static void Always_120_3(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5148U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6512);
    *((int *)t2) = 1;
    t3 = (t0 + 5176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t5 = (t0 + 1572U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(125, ng0);

LAB16:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2536);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(122, ng0);

LAB15:    xsi_set_current_line(123, ng0);
    t29 = ((char*)((ng7)));
    t30 = (t0 + 2444);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB14;

}

static void Always_134_4(char *t0)
{
    char t20[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 5292U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 6520);
    *((int *)t2) = 1;
    t3 = (t0 + 5320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(134, ng0);

LAB5:    xsi_set_current_line(135, ng0);
    t4 = (t0 + 2444);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(137, ng0);

LAB16:    xsi_set_current_line(138, ng0);
    t9 = (t0 + 2628);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(144, ng0);

LAB20:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 2904);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 504);
    t9 = *((char **)t7);
    memset(t20, 0, 8);
    t7 = (t5 + 4);
    t10 = (t9 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t10);
    t21 = (t16 ^ t17);
    t22 = (t15 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB24;

LAB21:    if (t25 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t20) = 1;

LAB24:    t12 = (t20 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t20);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(151, ng0);

LAB28:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 3088);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 584);
    t9 = *((char **)t7);
    memset(t20, 0, 8);
    t7 = (t5 + 4);
    t10 = (t9 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t10);
    t21 = (t16 ^ t17);
    t22 = (t15 | t21);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB32;

LAB29:    if (t25 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t20) = 1;

LAB32:    t12 = (t20 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t20);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB35:    goto LAB15;

LAB13:    xsi_set_current_line(158, ng0);

LAB36:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 1756U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(161, ng0);

LAB40:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4100);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 264);
    t7 = *((char **)t5);
    t5 = ((char*)((ng6)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t7, 32, t5, 32);
    memset(t33, 0, 8);
    t9 = (t4 + 4);
    t10 = (t20 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t21 = (t16 ^ t17);
    t22 = (t15 | t21);
    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t10);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB44;

LAB41:    if (t25 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t33) = 1;

LAB44:    t12 = (t33 + 4);
    t28 = *((unsigned int *)t12);
    t29 = (~(t28));
    t30 = *((unsigned int *)t33);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB47:
LAB39:    goto LAB15;

LAB17:    xsi_set_current_line(139, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 2536);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 2);
    goto LAB19;

LAB23:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(146, ng0);
    t18 = ((char*)((ng8)));
    t19 = (t0 + 2536);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 2);
    goto LAB27;

LAB31:    t11 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(153, ng0);
    t18 = ((char*)((ng9)));
    t19 = (t0 + 2536);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 2);
    goto LAB35;

LAB37:    xsi_set_current_line(160, ng0);
    t5 = ((char*)((ng7)));
    t7 = (t0 + 2536);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 2);
    goto LAB39;

LAB43:    t11 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(163, ng0);
    t18 = ((char*)((ng8)));
    t19 = (t0 + 2536);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 2);
    goto LAB47;

}

static void Always_174_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 5436U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6528);
    *((int *)t2) = 1;
    t3 = (t0 + 5464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(174, ng0);

LAB5:    xsi_set_current_line(175, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2812);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2996);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3180);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2444);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(179, ng0);

LAB14:    xsi_set_current_line(179, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 2812);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(180, ng0);

LAB15:    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2996);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB13;

LAB11:    xsi_set_current_line(181, ng0);

LAB16:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3180);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    goto LAB13;

}

static void Always_186_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5580U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 6536);
    *((int *)t2) = 1;
    t3 = (t0 + 5608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t5 = (t0 + 1572U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(192, ng0);

LAB16:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2812);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB19:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2996);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);

LAB22:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(188, ng0);

LAB15:    xsi_set_current_line(189, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 9, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(194, ng0);
    t12 = (t0 + 2904);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t14, 9, t23, 32);
    t29 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 9, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(199, ng0);
    t12 = (t0 + 3088);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t14, 9, t23, 32);
    t29 = (t0 + 3088);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 9, 0LL);
    goto LAB22;

}

static void Always_206_7(char *t0)
{
    char t4[8];
    char t31[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;

LAB0:    t1 = (t0 + 5724U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 6544);
    *((int *)t2) = 1;
    t3 = (t0 + 5752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(207, ng0);

LAB5:    xsi_set_current_line(208, ng0);
    t5 = (t0 + 1572U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(212, ng0);

LAB16:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 3180);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(208, ng0);

LAB15:    xsi_set_current_line(209, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4100);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 11, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(213, ng0);

LAB20:    xsi_set_current_line(214, ng0);
    t12 = (t0 + 4100);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = (t0 + 264);
    t29 = *((char **)t23);
    t23 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t29, 32, t23, 32);
    memset(t31, 0, 8);
    t30 = (t14 + 4);
    t32 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t4);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t30);
    t19 = *((unsigned int *)t32);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t32);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB24;

LAB21:    if (t25 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t31) = 1;

LAB24:    t34 = (t31 + 4);
    t28 = *((unsigned int *)t34);
    t35 = (~(t28));
    t36 = *((unsigned int *)t31);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4100);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 264);
    t12 = *((char **)t6);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t12, 32, t6, 32);
    memset(t31, 0, 8);
    t13 = (t5 + 4);
    t14 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB32;

LAB29:    if (t19 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t31) = 1;

LAB32:    t29 = (t31 + 4);
    t22 = *((unsigned int *)t29);
    t24 = (~(t22));
    t25 = *((unsigned int *)t31);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 4100);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 11, t6, 32);
    t12 = (t0 + 4100);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 11, 0LL);

LAB35:    goto LAB19;

LAB23:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(214, ng0);

LAB28:    xsi_set_current_line(215, ng0);
    t39 = (t0 + 4008);
    t40 = (t39 + 36U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng3)));
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 32, t41, 10, t42, 32);
    t44 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 10, 0LL);
    goto LAB27;

LAB31:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(218, ng0);
    t30 = ((char*)((ng2)));
    t32 = (t0 + 4100);
    xsi_vlogvar_wait_assign_value(t32, t30, 0, 0, 11, 0LL);
    goto LAB35;

}

static void Always_227_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 5868U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 6552);
    *((int *)t2) = 1;
    t3 = (t0 + 5896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(228, ng0);

LAB5:    xsi_set_current_line(229, ng0);
    t5 = (t0 + 1572U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(232, ng0);

LAB16:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 3180);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(229, ng0);

LAB15:    xsi_set_current_line(230, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 4192);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    goto LAB14;

LAB17:    xsi_set_current_line(234, ng0);
    t12 = (t0 + 4192);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t23 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t14, 32, t23, 32);
    t29 = (t0 + 4192);
    xsi_vlogvar_wait_assign_value(t29, t4, 0, 0, 32, 0LL);
    goto LAB19;

}

static void Cont_238_9(char *t0)
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

LAB0:    t1 = (t0 + 6012U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 2812);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 6620);
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
    t18 = (t0 + 6560);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_239_10(char *t0)
{
    char t3[8];
    char t4[8];
    char t10[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 6156U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 4192);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 264);
    t8 = *((char **)t7);
    t7 = (t0 + 344);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 32, t8, 32, t9, 32);
    t7 = ((char*)((ng3)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t10, 32, t7, 32);
    memset(t12, 0, 8);
    t13 = (t6 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = (t17 | t20);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t14);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB7;

LAB4:    if (t24 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t28 = (t12 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t12);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t28) != 0)
        goto LAB10;

LAB11:    t35 = (t4 + 4);
    t36 = *((unsigned int *)t4);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB12;

LAB13:    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t35) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t44, 8);

LAB20:    t45 = (t0 + 6656);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    t48 = (t47 + 40U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 1U;
    t51 = t50;
    t52 = (t3 + 4);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 0);
    t58 = (t0 + 6568);
    *((int *)t58) = 1;

LAB1:    return;
LAB6:    t27 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t34 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB11;

LAB12:    t39 = ((char*)((ng4)));
    goto LAB13;

LAB14:    t44 = ((char*)((ng7)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t39, 1, t44, 1);
    goto LAB20;

LAB18:    memcpy(t3, t39, 8);
    goto LAB20;

}

static void Always_244_11(char *t0)
{
    char t14[8];
    char t25[8];
    char t29[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;

LAB0:    t1 = (t0 + 6300U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(244, ng0);
    t2 = (t0 + 6576);
    *((int *)t2) = 1;
    t3 = (t0 + 6328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(244, ng0);

LAB5:    xsi_set_current_line(246, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 2076);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2260);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 3180);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(251, ng0);

LAB9:    xsi_set_current_line(253, ng0);
    t11 = (t0 + 3456);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = (t0 + 3456);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 3456);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 264);
    t22 = *((char **)t21);
    t21 = (t0 + 4008);
    t23 = (t21 + 36U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_multiply(t25, 32, t22, 32, t24, 10);
    t26 = (t0 + 4100);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t25, 32, t28, 11);
    xsi_vlog_generic_get_array_select_value(t14, 32, t13, t17, t20, 1, 1, t29, 32, 2);
    t30 = (t0 + 3732);
    xsi_vlogvar_assign_value(t30, t14, 0, 0, 8);
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 4192);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 0);
    t31 = (t10 & 1);
    *((unsigned int *)t5) = t31;
    t12 = (t0 + 4008);
    t13 = (t12 + 36U);
    t15 = *((char **)t13);
    memset(t29, 0, 8);
    t16 = (t29 + 4);
    t17 = (t15 + 4);
    t32 = *((unsigned int *)t15);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t17);
    t36 = (t35 >> 0);
    t37 = (t36 & 1);
    *((unsigned int *)t16) = t37;
    memset(t25, 0, 8);
    t18 = (t29 + 4);
    t38 = *((unsigned int *)t18);
    t39 = (~(t38));
    t40 = *((unsigned int *)t29);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t18) == 0)
        goto LAB10;

LAB12:    t19 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t19) = 1;

LAB13:    t20 = (t25 + 4);
    t21 = (t29 + 4);
    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    *((unsigned int *)t25) = t44;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB15;

LAB14:    t49 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t49 & 1U);
    t50 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t50 & 1U);
    t52 = *((unsigned int *)t14);
    t53 = *((unsigned int *)t25);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t22 = (t14 + 4);
    t23 = (t25 + 4);
    t24 = (t51 + 4);
    t55 = *((unsigned int *)t22);
    t56 = *((unsigned int *)t23);
    t57 = (t55 | t56);
    *((unsigned int *)t24) = t57;
    t58 = *((unsigned int *)t24);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB16;

LAB17:
LAB18:    t28 = (t0 + 2076);
    xsi_vlogvar_assign_value(t28, t51, 0, 0, 1);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2260);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2352);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    goto LAB8;

LAB10:    *((unsigned int *)t25) = 1;
    goto LAB13;

LAB15:    t45 = *((unsigned int *)t25);
    t46 = *((unsigned int *)t21);
    *((unsigned int *)t25) = (t45 | t46);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t47 | t48);
    goto LAB14;

LAB16:    t60 = *((unsigned int *)t51);
    t61 = *((unsigned int *)t24);
    *((unsigned int *)t51) = (t60 | t61);
    t26 = (t14 + 4);
    t27 = (t25 + 4);
    t62 = *((unsigned int *)t14);
    t63 = (~(t62));
    t64 = *((unsigned int *)t26);
    t65 = (~(t64));
    t66 = *((unsigned int *)t25);
    t67 = (~(t66));
    t68 = *((unsigned int *)t27);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t74 & t72);
    t75 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t75 & t73);
    t76 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t76 & t72);
    t77 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t77 & t73);
    goto LAB18;

}


extern void work_m_00000000003078143683_0421192425_init()
{
	static char *pe[] = {(void *)Initial_76_0,(void *)Always_81_1,(void *)Always_101_2,(void *)Always_120_3,(void *)Always_134_4,(void *)Always_174_5,(void *)Always_186_6,(void *)Always_206_7,(void *)Always_227_8,(void *)Cont_238_9,(void *)Cont_239_10,(void *)Always_244_11};
	xsi_register_didat("work_m_00000000003078143683_0421192425", "isim/tb_simulation_isim_beh.exe.sim/work/m_00000000003078143683_0421192425.didat");
	xsi_register_executes(pe);
}
