#ifndef __TDVF_PLATFORM_LIB_H__
#define __TDVF_PLATFORM_LIB_H__

#include <Uefi/UefiBaseType.h>
#include <Uefi/UefiMultiPhase.h>
#include <Pi/PiBootMode.h>
#include <Pi/PiHob.h>
#include <Library/HobLib.h>

#pragma pack(1)
typedef struct {
  ///
  EFI_HOB_GUID_TYPE       GuidHeader;
  UINT64                  RelocatedMailBox;
  UINT16                  HostBridgePciDevId;
  BOOLEAN                 SetNxForStack;
  UINT8                   SystemStates[6];
} EFI_HOB_PLATFORM_INFO;
#pragma pack()
VOID
EFIAPI
TdvfPlatformInitialize (
  IN OUT EFI_HOB_PLATFORM_INFO *
  );

#endif
