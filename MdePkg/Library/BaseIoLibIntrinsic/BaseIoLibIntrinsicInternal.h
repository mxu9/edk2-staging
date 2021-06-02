/** @file
  Common header file shared by all source files.

  This file includes package header files, dependent library classes.

  Copyright (c) 2007 - 2008, Intel Corporation. All rights reserved.<BR>
   SPDX-License-Identifier: BSD-2-Clause-Patent
**/

#ifndef __BASEIOLIB_INTRINSIC_INTERNAL_H_
#define __BASEIOLIB_INTRINSIC_INTERNAL_H_

#include <Base.h>

#include <Library/IoLib.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>

#define TD_PROBE_TD_GUEST             0
#define TD_PROBE_NOT_INTEL            1
#define TD_PROBE_NOT_PARA_VIRTUALIZED 2
#define TD_PROBE_LEGACY_GUEST         3
#define TD_PROBE_NON_TD_GUEST         4
#define TD_PROBE_NOT_AVAILABLE        -1

UINTN
EFIAPI
ProbeTd (
  VOID
  );

BOOLEAN
EFIAPI
IsTdGuest (
  VOID
  );

#endif
