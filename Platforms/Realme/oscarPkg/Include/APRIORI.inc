APRIORI DXE {
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/oscar/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/oscar/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf

  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

  INF FatPkg/EnhancedFatDxe/Fat.inf


  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf

  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/FontDxe/FontDxe.inf
 
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/oscar/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/oscar/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/TsensDxe/TsensDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/oscar/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/oscar/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/oscar/QcomPkg/SocPkg/StraitPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/oscar/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf

  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}
