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
static const char *ng0 = "/home/ise/VLSI/register/register_8bit_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_4133266227_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(30, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(31, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4133266227_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int64 t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 5715);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(38, ng0);

LAB6:    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3392);
    *((int *)t4) = 0;
    xsi_set_current_line(38, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5723);
    t9 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t9 = 0;

LAB16:    if (t9 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 5765);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(45, ng0);

LAB22:    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t7 = (t0 + 5731);
    xsi_report(t7, 34U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    t4 = (t0 + 3408);
    *((int *)t4) = 0;
    xsi_set_current_line(45, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5773);
    t9 = 1;
    if (8U == 8U)
        goto LAB30;

LAB31:    t9 = 0;

LAB32:    if (t9 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5809);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);

LAB38:    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t7 = (t0 + 5781);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB29;

LAB30:    t11 = 0;

LAB33:    if (t11 < 8U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB31;

LAB35:    t11 = (t11 + 1);
    goto LAB33;

LAB36:    t4 = (t0 + 3424);
    *((int *)t4) = 0;
    xsi_set_current_line(50, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5817);
    t9 = 1;
    if (8U == 8U)
        goto LAB46;

LAB47:    t9 = 0;

LAB48:    if (t9 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5853);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);

LAB54:    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t7 = (t0 + 5825);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB45;

LAB46:    t11 = 0;

LAB49:    if (t11 < 8U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t11 = (t11 + 1);
    goto LAB49;

LAB52:    t4 = (t0 + 3440);
    *((int *)t4) = 0;
    xsi_set_current_line(55, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5861);
    t9 = 1;
    if (8U == 8U)
        goto LAB62;

LAB63:    t9 = 0;

LAB64:    if (t9 == 0)
        goto LAB60;

LAB61:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5910);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);

LAB70:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    t7 = (t0 + 5869);
    xsi_report(t7, 41U, (unsigned char)2);
    goto LAB61;

LAB62:    t11 = 0;

LAB65:    if (t11 < 8U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB63;

LAB67:    t11 = (t11 + 1);
    goto LAB65;

LAB68:    t4 = (t0 + 3456);
    *((int *)t4) = 0;
    xsi_set_current_line(60, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5918);
    t9 = 1;
    if (8U == 8U)
        goto LAB78;

LAB79:    t9 = 0;

LAB80:    if (t9 == 0)
        goto LAB76;

LAB77:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5954);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);

LAB86:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    t7 = (t0 + 5926);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB77;

LAB78:    t11 = 0;

LAB81:    if (t11 < 8U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB79;

LAB83:    t11 = (t11 + 1);
    goto LAB81;

LAB84:    t4 = (t0 + 3472);
    *((int *)t4) = 0;
    xsi_set_current_line(65, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB84;
    else
        goto LAB86;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5962);
    t9 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t9 = 0;

LAB96:    if (t9 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5998);
    t4 = (t0 + 3760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);

LAB102:    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t7 = (t0 + 5970);
    xsi_report(t7, 28U, (unsigned char)2);
    goto LAB93;

LAB94:    t11 = 0;

LAB97:    if (t11 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    t4 = (t0 + 3488);
    *((int *)t4) = 0;
    xsi_set_current_line(70, ng0);
    t10 = (2 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t10);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB100;
    else
        goto LAB102;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6006);
    t9 = 1;
    if (8U == 8U)
        goto LAB110;

LAB111:    t9 = 0;

LAB112:    if (t9 == 0)
        goto LAB108;

LAB109:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6047);
    xsi_report(t2, 39U, (unsigned char)0);
    xsi_set_current_line(74, ng0);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    t7 = (t0 + 6014);
    xsi_report(t7, 33U, (unsigned char)2);
    goto LAB109;

LAB110:    t11 = 0;

LAB113:    if (t11 < 8U)
        goto LAB114;
    else
        goto LAB112;

LAB114:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB111;

LAB115:    t11 = (t11 + 1);
    goto LAB113;

LAB116:    goto LAB2;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

}


extern void work_a_4133266227_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4133266227_3212880686_p_0,(void *)work_a_4133266227_3212880686_p_1};
	xsi_register_didat("work_a_4133266227_3212880686", "isim/register_8bit_tb_isim_beh.exe.sim/work/a_4133266227_3212880686.didat");
	xsi_register_executes(pe);
}
