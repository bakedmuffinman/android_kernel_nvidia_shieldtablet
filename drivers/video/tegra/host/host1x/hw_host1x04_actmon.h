/*
 * drivers/video/tegra/host/host1x/hw_host1x04_actmon.h
 *
 * Copyright (c) 2012, NVIDIA Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

 /*
  * Function naming determines intended use:
  *
  *     <x>_r(void) : Returns the offset for register <x>.
  *
  *     <x>_w(void) : Returns the word offset for word (4 byte) element <x>.
  *
  *     <x>_<y>_s(void) : Returns size of field <y> of register <x> in bits.
  *
  *     <x>_<y>_f(u32 v) : Returns a value based on 'v' which has been shifted
  *         and masked to place it at field <y> of register <x>.  This value
  *         can be |'d with others to produce a full register value for
  *         register <x>.
  *
  *     <x>_<y>_m(void) : Returns a mask for field <y> of register <x>.  This
  *         value can be ~'d and then &'d to clear the value of field <y> for
  *         register <x>.
  *
  *     <x>_<y>_<z>_f(void) : Returns the constant value <z> after being shifted
  *         to place it at field <y> of register <x>.  This value can be |'d
  *         with others to produce a full register value for <x>.
  *
  *     <x>_<y>_v(u32 r) : Returns the value of field <y> from a full register
  *         <x> value 'r' after being shifted to place its LSB at bit 0.
  *         This value is suitable for direct comparison with other unshifted
  *         values appropriate for use in field <y> of register <x>.
  *
  *     <x>_<y>_<z>_v(void) : Returns the constant value for <z> defined for
  *         field <y> of register <x>.  This value is suitable for direct
  *         comparison with unshifted values appropriate for use in field <y>
  *         of register <x>.
  */

#ifndef __hw_host1x04_actmon_h__
#define __hw_host1x04_actmon_h__
/*This file is autogenerated.  Do not edit. */

static inline u32 actmon_ctrl_r(void)
{
	return 0x0;
}
static inline u32 actmon_ctrl_actmon_enable_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_actmon_enable_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 actmon_ctrl_actmon_enable_m(void)
{
	return 0x1 << 31;
}
static inline u32 actmon_ctrl_actmon_enable_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_num_s(void)
{
	return 3;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_num_f(u32 v)
{
	return (v & 0x7) << 26;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_num_m(void)
{
	return 0x7 << 26;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_num_v(u32 r)
{
	return (r >> 26) & 0x7;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_num_s(void)
{
	return 3;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_num_f(u32 v)
{
	return (v & 0x7) << 21;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_num_m(void)
{
	return 0x7 << 21;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_num_v(u32 r)
{
	return (r >> 21) & 0x7;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_en_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_en_f(u32 v)
{
	return (v & 0x1) << 19;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_en_m(void)
{
	return 0x1 << 19;
}
static inline u32 actmon_ctrl_consecutive_above_wmark_en_v(u32 r)
{
	return (r >> 19) & 0x1;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_en_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_en_f(u32 v)
{
	return (v & 0x1) << 18;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_en_m(void)
{
	return 0x1 << 18;
}
static inline u32 actmon_ctrl_consecutive_below_wmark_en_v(u32 r)
{
	return (r >> 18) & 0x1;
}
static inline u32 actmon_ctrl_avg_above_wmark_en_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_avg_above_wmark_en_f(u32 v)
{
	return (v & 0x1) << 17;
}
static inline u32 actmon_ctrl_avg_above_wmark_en_m(void)
{
	return 0x1 << 17;
}
static inline u32 actmon_ctrl_avg_above_wmark_en_v(u32 r)
{
	return (r >> 17) & 0x1;
}
static inline u32 actmon_ctrl_avg_below_wmark_en_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_avg_below_wmark_en_f(u32 v)
{
	return (v & 0x1) << 16;
}
static inline u32 actmon_ctrl_avg_below_wmark_en_m(void)
{
	return 0x1 << 16;
}
static inline u32 actmon_ctrl_avg_below_wmark_en_v(u32 r)
{
	return (r >> 16) & 0x1;
}
static inline u32 actmon_ctrl_at_end_en_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_at_end_en_f(u32 v)
{
	return (v & 0x1) << 15;
}
static inline u32 actmon_ctrl_at_end_en_m(void)
{
	return 0x1 << 15;
}
static inline u32 actmon_ctrl_at_end_en_v(u32 r)
{
	return (r >> 15) & 0x1;
}
static inline u32 actmon_ctrl_enb_periodic_s(void)
{
	return 1;
}
static inline u32 actmon_ctrl_enb_periodic_f(u32 v)
{
	return (v & 0x1) << 13;
}
static inline u32 actmon_ctrl_enb_periodic_m(void)
{
	return 0x1 << 13;
}
static inline u32 actmon_ctrl_enb_periodic_v(u32 r)
{
	return (r >> 13) & 0x1;
}
static inline u32 actmon_ctrl_k_val_s(void)
{
	return 3;
}
static inline u32 actmon_ctrl_k_val_f(u32 v)
{
	return (v & 0x7) << 10;
}
static inline u32 actmon_ctrl_k_val_m(void)
{
	return 0x7 << 10;
}
static inline u32 actmon_ctrl_k_val_v(u32 r)
{
	return (r >> 10) & 0x7;
}
static inline u32 actmon_ctrl_sample_period_s(void)
{
	return 8;
}
static inline u32 actmon_ctrl_sample_period_f(u32 v)
{
	return (v & 0xff) << 0;
}
static inline u32 actmon_ctrl_sample_period_m(void)
{
	return 0xff << 0;
}
static inline u32 actmon_ctrl_sample_period_v(u32 r)
{
	return (r >> 0) & 0xff;
}
static inline u32 actmon_avg_upper_wmark_r(void)
{
	return 0xc;
}
static inline u32 actmon_avg_lower_wmark_r(void)
{
	return 0x10;
}
static inline u32 actmon_init_avg_r(void)
{
	return 0x14;
}
static inline u32 actmon_count_r(void)
{
	return 0x18;
}
static inline u32 actmon_avg_count_r(void)
{
	return 0x1c;
}
static inline u32 actmon_intr_status_r(void)
{
	return 0x20;
}
static inline u32 actmon_intr_status_consecutive_upper_s(void)
{
	return 1;
}
static inline u32 actmon_intr_status_consecutive_upper_f(u32 v)
{
	return (v & 0x1) << 31;
}
static inline u32 actmon_intr_status_consecutive_upper_m(void)
{
	return 0x1 << 31;
}
static inline u32 actmon_intr_status_consecutive_upper_v(u32 r)
{
	return (r >> 31) & 0x1;
}
static inline u32 actmon_intr_status_consecutive_lower_s(void)
{
	return 1;
}
static inline u32 actmon_intr_status_consecutive_lower_f(u32 v)
{
	return (v & 0x1) << 30;
}
static inline u32 actmon_intr_status_consecutive_lower_m(void)
{
	return 0x1 << 30;
}
static inline u32 actmon_intr_status_consecutive_lower_v(u32 r)
{
	return (r >> 30) & 0x1;
}
static inline u32 actmon_intr_status_avg_below_wmark_s(void)
{
	return 1;
}
static inline u32 actmon_intr_status_avg_below_wmark_f(u32 v)
{
	return (v & 0x1) << 29;
}
static inline u32 actmon_intr_status_avg_below_wmark_m(void)
{
	return 0x1 << 29;
}
static inline u32 actmon_intr_status_avg_below_wmark_v(u32 r)
{
	return (r >> 29) & 0x1;
}
static inline u32 actmon_intr_status_avg_above_wmark_s(void)
{
	return 1;
}
static inline u32 actmon_intr_status_avg_above_wmark_f(u32 v)
{
	return (v & 0x1) << 28;
}
static inline u32 actmon_intr_status_avg_above_wmark_m(void)
{
	return 0x1 << 28;
}
static inline u32 actmon_intr_status_avg_above_wmark_v(u32 r)
{
	return (r >> 28) & 0x1;
}
static inline u32 actmon_intr_status_at_end_s(void)
{
	return 1;
}
static inline u32 actmon_intr_status_at_end_f(u32 v)
{
	return (v & 0x1) << 27;
}
static inline u32 actmon_intr_status_at_end_m(void)
{
	return 0x1 << 27;
}
static inline u32 actmon_intr_status_at_end_v(u32 r)
{
	return (r >> 27) & 0x1;
}

#endif /* __hw_host1x04_actmon_h__ */