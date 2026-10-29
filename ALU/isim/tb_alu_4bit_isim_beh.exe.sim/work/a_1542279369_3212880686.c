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
static const char *ng0 = "/home/ise/VLSI/ALU/alu.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_2749763749646623249_1035706684(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_1542279369_3212880686_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned char t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5768);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 5771);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 5774);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5777);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5780);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5783);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 5786);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 5789);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t3 = (t0 + 3912);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 3800);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(22, ng0);
    t28 = (t0 + 1032U);
    t29 = *((char **)t28);
    t28 = (t0 + 5664U);
    t30 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t27, t29, t28, 5);
    t32 = (t0 + 1192U);
    t33 = *((char **)t32);
    t32 = (t0 + 5680U);
    t34 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t31, t33, t32, 5);
    t35 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t26, t30, t27, t34, t31);
    t36 = (t26 + 12U);
    t37 = *((unsigned int *)t36);
    t38 = (1U * t37);
    t39 = (5U != t38);
    if (t39 == 1)
        goto LAB21;

LAB22:    t40 = (t0 + 3912);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t35, 5U);
    xsi_driver_first_trans_fast(t40);
    goto LAB2;

LAB4:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5664U);
    t3 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t27, t2, t1, 5);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 5680U);
    t8 = ieee_p_1242562249_sub_2749763749646623249_1035706684(IEEE_P_1242562249, t31, t6, t5, 5);
    t9 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t26, t3, t27, t8, t31);
    t11 = (t26 + 12U);
    t37 = *((unsigned int *)t11);
    t38 = (1U * t37);
    t39 = (5U != t38);
    if (t39 == 1)
        goto LAB23;

LAB24:    t12 = (t0 + 3912);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5664U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5680U);
    t6 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t27, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t37 = *((unsigned int *)t11);
    t38 = (1U * t37);
    t45 = (1U + t38);
    t39 = (5U != t45);
    if (t39 == 1)
        goto LAB25;

LAB26:    t12 = (t0 + 3912);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5664U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5680U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t27, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t37 = *((unsigned int *)t11);
    t38 = (1U * t37);
    t45 = (1U + t38);
    t39 = (5U != t45);
    if (t39 == 1)
        goto LAB27;

LAB28:    t12 = (t0 + 3912);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5664U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 5680U);
    t6 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t26, t2, t1, t5, t3);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t27, t9, (char)99, (unsigned char)2, (char)97, t6, t26, (char)101);
    t11 = (t26 + 12U);
    t37 = *((unsigned int *)t11);
    t38 = (1U * t37);
    t45 = (1U + t38);
    t39 = (5U != t45);
    if (t39 == 1)
        goto LAB29;

LAB30:    t12 = (t0 + 3912);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5664U);
    t3 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t26, t2, t1);
    t6 = ((IEEE_P_1242562249) + 2976);
    t5 = xsi_base_array_concat(t5, t27, t6, (char)99, (unsigned char)2, (char)97, t3, t26, (char)101);
    t8 = (t26 + 12U);
    t37 = *((unsigned int *)t8);
    t38 = (1U * t37);
    t45 = (1U + t38);
    t39 = (5U != t45);
    if (t39 == 1)
        goto LAB31;

LAB32:    t9 = (t0 + 3912);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 5U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB9:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t37 = (3 - 2);
    t38 = (t37 * 1U);
    t45 = (0 + t38);
    t1 = (t2 + t45);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t27 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 2;
    t8 = (t6 + 4U);
    *((int *)t8) = 0;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (0 - 2);
    t46 = (t4 * -1);
    t46 = (t46 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t46;
    t3 = xsi_base_array_concat(t3, t26, t5, (char)97, t1, t27, (char)99, (unsigned char)2, (char)101);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t31, t9, (char)99, (unsigned char)2, (char)97, t3, t26, (char)101);
    t46 = (3U + 1U);
    t47 = (1U + t46);
    t39 = (5U != t47);
    if (t39 == 1)
        goto LAB33;

LAB34:    t11 = (t0 + 3912);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 5U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB10:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t37 = (3 - 3);
    t38 = (t37 * 1U);
    t45 = (0 + t38);
    t1 = (t2 + t45);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t27 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 3;
    t8 = (t6 + 4U);
    *((int *)t8) = 1;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (1 - 3);
    t46 = (t4 * -1);
    t46 = (t46 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t46;
    t3 = xsi_base_array_concat(t3, t26, t5, (char)99, (unsigned char)2, (char)97, t1, t27, (char)101);
    t9 = ((IEEE_P_1242562249) + 2976);
    t8 = xsi_base_array_concat(t8, t31, t9, (char)99, (unsigned char)2, (char)97, t3, t26, (char)101);
    t46 = (1U + 3U);
    t47 = (1U + t46);
    t39 = (5U != t47);
    if (t39 == 1)
        goto LAB35;

LAB36:    t11 = (t0 + 3912);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 5U);
    xsi_driver_first_trans_fast(t11);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(5U, t38, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(5U, t38, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(5U, t45, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(5U, t45, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(5U, t45, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(5U, t45, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(5U, t47, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(5U, t47, 0);
    goto LAB36;

}

static void work_a_1542279369_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (4 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3976);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 3816);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1542279369_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4040);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3832);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1542279369_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1542279369_3212880686_p_0,(void *)work_a_1542279369_3212880686_p_1,(void *)work_a_1542279369_3212880686_p_2};
	xsi_register_didat("work_a_1542279369_3212880686", "isim/tb_alu_4bit_isim_beh.exe.sim/work/a_1542279369_3212880686.didat");
	xsi_register_executes(pe);
}
