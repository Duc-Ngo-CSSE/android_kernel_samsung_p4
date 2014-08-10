/*
 * drivers/video/tegra/host/host1x/hw_host1x_uclass_host1x.h
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

#ifndef __hw_host1x_uclass_host1x_h__
#define __hw_host1x_uclass_host1x_h__
/*This file is autogenerated.  Do not edit. */

static inline u32 host1x_uclass_incr_syncpt_r(void)
{
	return 0x0;
}
static inline u32 host1x_uclass_incr_syncpt_cond_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_incr_syncpt_cond_f(u32 v)
{
	return (v & 0xff) << 8;
}
static inline u32 host1x_uclass_incr_syncpt_cond_m(void)
{
	return 0xff << 8;
}
static inline u32 host1x_uclass_incr_syncpt_cond_v(u32 r)
{
	return (r >> 8) & 0xff;
}
static inline u32 host1x_uclass_incr_syncpt_cond_immediate_v(void)
{
	return 0;
}
static inline u32 host1x_uclass_incr_syncpt_cond_op_done_v(void)
{
	return 1;
}
static inline u32 host1x_uclass_incr_syncpt_cond_rd_done_v(void)
{
	return 2;
}
static inline u32 host1x_uclass_incr_syncpt_cond_reg_wr_safe_v(void)
{
	return 3;
}
static inline u32 host1x_uclass_incr_syncpt_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_incr_syncpt_indx_f(u32 v)
{
	return (v & 0xff) << 0;
}
static inline u32 host1x_uclass_incr_syncpt_indx_m(void)
{
	return 0xff << 0;
}
static inline u32 host1x_uclass_incr_syncpt_indx_v(u32 r)
{
	return (r >> 0) & 0xff;
}
static inline u32 host1x_uclass_wait_syncpt_r(void)
{
	return 0x8;
}
static inline u32 host1x_uclass_wait_syncpt_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_wait_syncpt_indx_f(u32 v)
{
	return (v & 0xff) << 24;
}
static inline u32 host1x_uclass_wait_syncpt_indx_m(void)
{
	return 0xff << 24;
}
static inline u32 host1x_uclass_wait_syncpt_indx_v(u32 r)
{
	return (r >> 24) & 0xff;
}
static inline u32 host1x_uclass_wait_syncpt_thresh_s(void)
{
	return 24;
}
static inline u32 host1x_uclass_wait_syncpt_thresh_f(u32 v)
{
	return (v & 0xffffff) << 0;
}
static inline u32 host1x_uclass_wait_syncpt_thresh_m(void)
{
	return 0xffffff << 0;
}
static inline u32 host1x_uclass_wait_syncpt_thresh_v(u32 r)
{
	return (r >> 0) & 0xffffff;
}
static inline u32 host1x_uclass_wait_syncpt_base_r(void)
{
	return 0x9;
}
static inline u32 host1x_uclass_wait_syncpt_base_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_wait_syncpt_base_indx_f(u32 v)
{
	return (v & 0xff) << 24;
}
static inline u32 host1x_uclass_wait_syncpt_base_indx_m(void)
{
	return 0xff << 24;
}
static inline u32 host1x_uclass_wait_syncpt_base_indx_v(u32 r)
{
	return (r >> 24) & 0xff;
}
static inline u32 host1x_uclass_wait_syncpt_base_base_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_wait_syncpt_base_base_indx_f(u32 v)
{
	return (v & 0xff) << 16;
}
static inline u32 host1x_uclass_wait_syncpt_base_base_indx_m(void)
{
	return 0xff << 16;
}
static inline u32 host1x_uclass_wait_syncpt_base_base_indx_v(u32 r)
{
	return (r >> 16) & 0xff;
}
static inline u32 host1x_uclass_wait_syncpt_base_offset_s(void)
{
	return 16;
}
static inline u32 host1x_uclass_wait_syncpt_base_offset_f(u32 v)
{
	return (v & 0xffff) << 0;
}
static inline u32 host1x_uclass_wait_syncpt_base_offset_m(void)
{
	return 0xffff << 0;
}
static inline u32 host1x_uclass_wait_syncpt_base_offset_v(u32 r)
{
	return (r >> 0) & 0xffff;
}
static inline u32 host1x_uclass_load_syncpt_base_r(void)
{
	return 0xb;
}
static inline u32 host1x_uclass_load_syncpt_base_base_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_load_syncpt_base_base_indx_f(u32 v)
{
	return (v & 0xff) << 24;
}
static inline u32 host1x_uclass_load_syncpt_base_base_indx_m(void)
{
	return 0xff << 24;
}
static inline u32 host1x_uclass_load_syncpt_base_base_indx_v(u32 r)
{
	return (r >> 24) & 0xff;
}
static inline u32 host1x_uclass_load_syncpt_base_value_s(void)
{
	return 24;
}
static inline u32 host1x_uclass_load_syncpt_base_value_f(u32 v)
{
	return (v & 0xffffff) << 0;
}
static inline u32 host1x_uclass_load_syncpt_base_value_m(void)
{
	return 0xffffff << 0;
}
static inline u32 host1x_uclass_load_syncpt_base_value_v(u32 r)
{
	return (r >> 0) & 0xffffff;
}
static inline u32 host1x_uclass_incr_syncpt_base_r(void)
{
	return 0xc;
}
static inline u32 host1x_uclass_incr_syncpt_base_base_indx_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_incr_syncpt_base_base_indx_f(u32 v)
{
	return (v & 0xff) << 24;
}
static inline u32 host1x_uclass_incr_syncpt_base_base_indx_m(void)
{
	return 0xff << 24;
}
static inline u32 host1x_uclass_incr_syncpt_base_base_indx_v(u32 r)
{
	return (r >> 24) & 0xff;
}
static inline u32 host1x_uclass_incr_syncpt_base_offset_s(void)
{
	return 24;
}
static inline u32 host1x_uclass_incr_syncpt_base_offset_f(u32 v)
{
	return (v & 0xffffff) << 0;
}
static inline u32 host1x_uclass_incr_syncpt_base_offset_m(void)
{
	return 0xffffff << 0;
}
static inline u32 host1x_uclass_incr_syncpt_base_offset_v(u32 r)
{
	return (r >> 0) & 0xffffff;
}
static inline u32 host1x_uclass_indoff_r(void)
{
	return 0x2d;
}
static inline u32 host1x_uclass_indoff_indbe_s(void)
{
	return 4;
}
static inline u32 host1x_uclass_indoff_indbe_f(u32 v)
{
	return (v & 0xf) << 28;
}
static inline u32 host1x_uclass_indoff_indbe_m(void)
{
	return 0xf << 28;
}
static inline u32 host1x_uclass_indoff_indbe_v(u32 r)
{
	return (r >> 28) & 0xf;
}
static inline u32 host1x_uclass_indoff_autoinc_s(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_autoinc_f(u32 v)
{
	return (v & 0x1) << 27;
}
static inline u32 host1x_uclass_indoff_autoinc_m(void)
{
	return 0x1 << 27;
}
static inline u32 host1x_uclass_indoff_autoinc_v(u32 r)
{
	return (r >> 27) & 0x1;
}
static inline u32 host1x_uclass_indoff_spool_s(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_spool_f(u32 v)
{
	return (v & 0x1) << 26;
}
static inline u32 host1x_uclass_indoff_spool_m(void)
{
	return 0x1 << 26;
}
static inline u32 host1x_uclass_indoff_spool_v(u32 r)
{
	return (r >> 26) & 0x1;
}
static inline u32 host1x_uclass_indoff_indoffset_s(void)
{
	return 24;
}
static inline u32 host1x_uclass_indoff_indoffset_f(u32 v)
{
	return (v & 0xffffff) << 2;
}
static inline u32 host1x_uclass_indoff_indoffset_m(void)
{
	return 0xffffff << 2;
}
static inline u32 host1x_uclass_indoff_indoffset_v(u32 r)
{
	return (r >> 2) & 0xffffff;
}
static inline u32 host1x_uclass_indoff_indmodid_s(void)
{
	return 8;
}
static inline u32 host1x_uclass_indoff_indmodid_f(u32 v)
{
	return (v & 0xff) << 18;
}
static inline u32 host1x_uclass_indoff_indmodid_m(void)
{
	return 0xff << 18;
}
static inline u32 host1x_uclass_indoff_indmodid_v(u32 r)
{
	return (r >> 18) & 0xff;
}
static inline u32 host1x_uclass_indoff_indmodid_host1x_v(void)
{
	return 0;
}
static inline u32 host1x_uclass_indoff_indmodid_mpe_v(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_indmodid_vi_v(void)
{
	return 2;
}
static inline u32 host1x_uclass_indoff_indmodid_epp_v(void)
{
	return 3;
}
static inline u32 host1x_uclass_indoff_indmodid_isp_v(void)
{
	return 4;
}
static inline u32 host1x_uclass_indoff_indmodid_gr2d_v(void)
{
	return 5;
}
static inline u32 host1x_uclass_indoff_indmodid_gr3d_v(void)
{
	return 6;
}
static inline u32 host1x_uclass_indoff_indmodid_display_v(void)
{
	return 8;
}
static inline u32 host1x_uclass_indoff_indmodid_tvo_v(void)
{
	return 11;
}
static inline u32 host1x_uclass_indoff_indmodid_displayb_v(void)
{
	return 9;
}
static inline u32 host1x_uclass_indoff_indmodid_dsi_v(void)
{
	return 12;
}
static inline u32 host1x_uclass_indoff_indmodid_hdmi_v(void)
{
	return 10;
}
static inline u32 host1x_uclass_indoff_indmodid_dsib_v(void)
{
	return 16;
}
static inline u32 host1x_uclass_indoff_indroffset_s(void)
{
	return 16;
}
static inline u32 host1x_uclass_indoff_indroffset_f(u32 v)
{
	return (v & 0xffff) << 2;
}
static inline u32 host1x_uclass_indoff_indroffset_m(void)
{
	return 0xffff << 2;
}
static inline u32 host1x_uclass_indoff_indroffset_v(u32 r)
{
	return (r >> 2) & 0xffff;
}
static inline u32 host1x_uclass_indoff_acctype_s(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_acctype_f(u32 v)
{
	return (v & 0x1) << 1;
}
static inline u32 host1x_uclass_indoff_acctype_m(void)
{
	return 0x1 << 1;
}
static inline u32 host1x_uclass_indoff_acctype_v(u32 r)
{
	return (r >> 1) & 0x1;
}
static inline u32 host1x_uclass_indoff_acctype_reg_v(void)
{
	return 0;
}
static inline u32 host1x_uclass_indoff_acctype_fb_v(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_rwn_s(void)
{
	return 1;
}
static inline u32 host1x_uclass_indoff_rwn_f(u32 v)
{
	return (v & 0x1) << 0;
}
static inline u32 host1x_uclass_indoff_rwn_m(void)
{
	return 0x1 << 0;
}
static inline u32 host1x_uclass_indoff_rwn_v(u32 r)
{
	return (r >> 0) & 0x1;
}
static inline u32 host1x_uclass_indoff_rwn_write_v(void)
{
	return 0;
}
static inline u32 host1x_uclass_indoff_rwn_read_v(void)
{
	return 1;
}
static inline u32 host1x_uclass_inddata_r(void)
{
	return 0x2e;
}

#endif /* __hw_host1x_uclass_host1x_h__ */