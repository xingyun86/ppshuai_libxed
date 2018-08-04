/// @file include-private/xed-ild-imm-l2.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(INCLUDE_PRIVATE_XED_ILD_IMM_L2_H)
# define INCLUDE_PRIVATE_XED_ILD_IMM_L2_H
/*BEGIN_LEGAL

Copyright (c) 2018 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
#include "xed-internal-header.h"
#include "xed-ild-eosz.h"
#include "xed-ild-imm-l3.h"
#include "xed-ild.h"
#include "xed-operand-accessors.h"
static XED_INLINE void xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SE_IMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMM32_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IGNORE66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_REFINING66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_FORCE64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_FORCE64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IMMUNE66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IMMUNE_REXW_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IGNORE66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_REFINING66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_FORCE64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_FORCE64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IMMUNE66_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IMMUNE_REXW_EOSZ_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_0_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x);

static XED_INLINE void xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed_bits_t _imm_width;
_imm_width = (xed_bits_t)xed_lookup_function_SIMM8_IMM_WIDTH_l3();
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed_bits_t _imm_width;
_imm_width = (xed_bits_t)xed_lookup_function_UIMM16_IMM_WIDTH_l3();
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SE_IMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed_bits_t _imm_width;
_imm_width = (xed_bits_t)xed_lookup_function_SE_IMM8_IMM_WIDTH_l3();
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMM32_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed_bits_t _imm_width;
_imm_width = (xed_bits_t)xed_lookup_function_UIMM32_IMM_WIDTH_l3();
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IGNORE66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IGNORE66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_REFINING66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_REFINING66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_FORCE64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_FORCE64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_FORCE64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_FORCE64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IMMUNE66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IMMUNE66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_CR_WIDTH_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_IMMUNE_REXW_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IMMUNE_REXW_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_SIMMz_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IGNORE66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IGNORE66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_REFINING66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_REFINING66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_FORCE64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_FORCE64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_FORCE64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_FORCE64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_REFINING66_CR_WIDTH_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_DF64_IMMUNE66_LOOP64_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IMMUNE66_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IMMUNE66_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_CR_WIDTH_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_CR_WIDTH_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_IMMUNE_REXW_EOSZ_l2(xed_decoded_inst_t* x)
{
xed_bits_t _eosz;
xed_bits_t _imm_width;
xed_bits_t _rexw;
xed_bits_t _osz;
xed_bits_t _mode;
_rexw = (xed_bits_t)xed3_operand_get_rexw(x);
_osz = (xed_bits_t)xed3_operand_get_osz(x);
_mode = (xed_bits_t)xed3_operand_get_mode(x);
_eosz = xed_lookup_function_OSZ_NONTERM_IMMUNE_REXW_EOSZ(_rexw, _osz, _mode);
_imm_width = (xed_bits_t)xed_lookup_function_UIMMv_IMM_WIDTH_l3(_eosz);
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed_bits_t _imm_width;
_imm_width = (xed_bits_t)xed_lookup_function_UIMM8_IMM_WIDTH_l3();
xed3_operand_set_imm_width(x, _imm_width);
}
static XED_INLINE void xed_lookup_function_0_IMM_WIDTH_CONST_l2(xed_decoded_inst_t* x)
{
xed3_operand_set_imm_width(x, 0);
}
#endif
