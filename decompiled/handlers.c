//==================== FUN_00404e10 @ 0x00404E10 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00404e10(int param_1)

{
  int iVar1;
  int *piVar2;
  CStringData *pCVar3;
  CStringData *pCVar4;
  int iStack_1260;
  undefined1 *puStack_125c;
  CDialog local_1258 [2336];
  undefined4 uStack_938;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f166;
  local_c = ExceptionList;
  uStack_10 = 0x404e28;
  ExceptionList = &local_c;
  FUN_004056f0(local_1258,0);
  local_4 = 0;
  iVar1 = FUN_0041bafa(local_1258);
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_0041ae20();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401790((undefined4 *)0x80004005);
    }
    iStack_1260 = (**(code **)(*piVar2 + 0xc))();
    iStack_1260 = iStack_1260 + 0x10;
    local_4._0_1_ = 1;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\大头像\\cg%05d.jpg");
    iVar1 = iStack_1260;
    puStack_125c = &stack0xffffed8c;
    pCVar4 = (CStringData *)(iStack_1260 + -0x10);
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    *(undefined4 *)(param_1 + 0x358) = uStack_938;
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    local_4 = (uint)local_4._1_3_ << 8;
    piVar2 = (int *)(iVar1 + -4);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)pCVar4 + 4))();
    }
  }
  local_4 = 0xffffffff;
  FUN_00405810(local_1258);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00404f50 @ 0x00404F50 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00404f50(int param_1)

{
  int iVar1;
  int *piVar2;
  CStringData *pCVar3;
  CStringData *pCVar4;
  int iStack_1260;
  undefined1 *puStack_125c;
  CDialog local_1258 [2336];
  int iStack_938;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f166;
  local_c = ExceptionList;
  uStack_10 = 0x404f68;
  ExceptionList = &local_c;
  FUN_004056f0(local_1258,1);
  local_4 = 0;
  iVar1 = FUN_0041bafa(local_1258);
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_0041ae20();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401790((undefined4 *)0x80004005);
    }
    iStack_1260 = (**(code **)(*piVar2 + 0xc))();
    iStack_1260 = iStack_1260 + 0x10;
    local_4._0_1_ = 1;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\中头像\\cg%05d.jpg");
    puStack_125c = &stack0xffffed8c;
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_1260 + -0x10));
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    *(int *)(param_1 + 0x35c) = iStack_938;
    if ((iStack_938 < 0x11f9) && (0x11a8 < iStack_938)) {
      iStack_938 = iStack_938 + 1;
    }
    else {
      iStack_938 = iStack_938 + 50000;
    }
    *(int *)(param_1 + 0x360) = iStack_938;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\小头像\\cg%05d.jpg");
    iVar1 = iStack_1260;
    puStack_125c = &stack0xffffed8c;
    pCVar4 = (CStringData *)(iStack_1260 + -0x10);
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    local_4 = (uint)local_4._1_3_ << 8;
    piVar2 = (int *)(iVar1 + -4);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)pCVar4 + 4))();
    }
  }
  local_4 = 0xffffffff;
  FUN_00405810(local_1258);
  ExceptionList = local_c;
  return;
}



//==================== FUN_004050e0 @ 0x004050E0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004050e0(int param_1)

{
  int iVar1;
  int *piVar2;
  CStringData *pCVar3;
  CStringData *pCVar4;
  int iStack_1260;
  undefined1 *puStack_125c;
  CDialog local_1258 [2336];
  int iStack_938;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f166;
  local_c = ExceptionList;
  uStack_10 = 0x4050f8;
  ExceptionList = &local_c;
  FUN_004056f0(local_1258,2);
  local_4 = 0;
  iVar1 = FUN_0041bafa(local_1258);
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_0041ae20();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401790((undefined4 *)0x80004005);
    }
    iStack_1260 = (**(code **)(*piVar2 + 0xc))();
    iStack_1260 = iStack_1260 + 0x10;
    local_4._0_1_ = 1;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\小头像\\cg%05d.jpg");
    puStack_125c = &stack0xffffed8c;
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_1260 + -0x10));
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    *(int *)(param_1 + 0x360) = iStack_938;
    if ((iStack_938 < 60000) && (50000 < iStack_938)) {
      iStack_938 = iStack_938 + -50000;
    }
    else {
      iStack_938 = iStack_938 + -1;
    }
    *(int *)(param_1 + 0x35c) = iStack_938;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\中头像\\cg%05d.jpg");
    iVar1 = iStack_1260;
    puStack_125c = &stack0xffffed8c;
    pCVar4 = (CStringData *)(iStack_1260 + -0x10);
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    local_4 = (uint)local_4._1_3_ << 8;
    piVar2 = (int *)(iVar1 + -4);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)pCVar4 + 4))();
    }
  }
  local_4 = 0xffffffff;
  FUN_00405810(local_1258);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00405270 @ 0x00405270 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00405270(int param_1)

{
  int iVar1;
  int *piVar2;
  CStringData *pCVar3;
  CStringData *pCVar4;
  int iStack_1260;
  undefined1 *puStack_125c;
  CDialog local_1258 [2336];
  undefined4 uStack_938;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f166;
  local_c = ExceptionList;
  uStack_10 = 0x405288;
  ExceptionList = &local_c;
  FUN_004056f0(local_1258,3);
  local_4 = 0;
  iVar1 = FUN_0041bafa(local_1258);
  if (iVar1 == 1) {
    piVar2 = (int *)FUN_0041ae20();
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00401790((undefined4 *)0x80004005);
    }
    iStack_1260 = (**(code **)(*piVar2 + 0xc))();
    iStack_1260 = iStack_1260 + 0x10;
    local_4._0_1_ = 1;
    FUN_00401e70(&iStack_1260,L"新武将\\pic\\战斗头像\\cg%05d.jpg");
    iVar1 = iStack_1260;
    puStack_125c = &stack0xffffed8c;
    pCVar4 = (CStringData *)(iStack_1260 + -0x10);
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    *(undefined4 *)(param_1 + 0x364) = uStack_938;
    InvalidateRect(*(HWND *)(param_1 + 0x20),(RECT *)0x0,1);
    local_4 = (uint)local_4._1_3_ << 8;
    piVar2 = (int *)(iVar1 + -4);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1 || iVar1 + -1 < 0) {
      (**(code **)(**(int **)pCVar4 + 4))();
    }
  }
  local_4 = 0xffffffff;
  FUN_00405810(local_1258);
  ExceptionList = local_c;
  return;
}



//==================== Handler_00405A50 @ 0x00405A50 ====================

void Handler_00405A50(void)

{
  int *piVar1;
  rsize_t _DstSize;
  void *_Src;
  HGDIOBJ ho;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  LPCWSTR unaff_EDI;
  int *piVar5;
  RECT *lpRect;
  int iStack_4;
  
  if (*(int *)(in_ECX + 0x924) == 1) {
    iVar2 = *(int *)(in_ECX + 0x928);
  }
  else {
    iVar2 = *(int *)(in_ECX + 0x924) + -1;
  }
  *(int *)(in_ECX + 0x924) = iVar2;
  FUN_00401e70((undefined4 *)(in_ECX + 0x1248),L"页号:%d/%d");
  FID_conflict_SetWindowTextW(*(HWND *)(in_ECX + 0x1248),unaff_EDI);
  iStack_4 = 0;
  piVar5 = (int *)(in_ECX + 0xcc);
  do {
    _Src = *(void **)(in_ECX + 0x9e8 + (*(int *)(in_ECX + 0x924) * 0xf + iStack_4) * 4);
    piVar4 = (int *)((int)_Src + -0x10);
    puVar3 = (undefined4 *)(**(code **)(**(int **)((int)_Src + -0x10) + 0x10))();
    if ((*(int *)((int)_Src + -4) < 0) || (puVar3 != (undefined4 *)*piVar4)) {
      piVar4 = (int *)(**(code **)*puVar3)(*(undefined4 *)((int)_Src + -0xc),2);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ab50();
      }
      piVar4[1] = *(int *)((int)_Src + -0xc);
      _DstSize = *(int *)((int)_Src + -0xc) * 2 + 2;
      _memcpy_s(piVar4 + 4,_DstSize,_Src,_DstSize);
    }
    else {
      LOCK();
      *(int *)((int)_Src + -4) = *(int *)((int)_Src + -4) + 1;
      UNLOCK();
    }
    if ((*piVar5 != 0) && (ho = (HGDIOBJ)*piVar5, ho != (HGDIOBJ)0x0)) {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[5] = 0;
      piVar5[4] = 0;
      piVar5[7] = -1;
      *(undefined1 *)((int)piVar5 + 0x19) = 0;
      *(undefined1 *)(piVar5 + 6) = 0;
      DeleteObject(ho);
    }
    iVar2 = FUN_00414860(piVar5 + -1,(LPCWSTR)(piVar4 + 4));
    piVar1 = piVar4 + 3;
    piVar5[0xb] = (uint)(-1 < iVar2);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1 || iVar2 + -1 < 0) {
      (**(code **)(*(int *)*piVar4 + 4))(piVar4);
    }
    iStack_4 = iStack_4 + 1;
    piVar5 = piVar5 + 0x25;
  } while (iStack_4 < 0xf);
  lpRect = (RECT *)(in_ECX + 0x92c);
  puVar3 = (undefined4 *)(in_ECX + 0xfc);
  iVar2 = 0xf;
  do {
    *puVar3 = 0;
    InvalidateRect(*(HWND *)(in_ECX + 0x20),lpRect,1);
    puVar3 = puVar3 + 0x25;
    lpRect = lpRect + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



//==================== Handler_00405BF0 @ 0x00405BF0 ====================

void Handler_00405BF0(void)

{
  int *piVar1;
  rsize_t _DstSize;
  void *_Src;
  HGDIOBJ ho;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  LPCWSTR unaff_EDI;
  int *piVar5;
  RECT *lpRect;
  int iStack_4;
  
  if (*(int *)(in_ECX + 0x924) < *(int *)(in_ECX + 0x928)) {
    *(int *)(in_ECX + 0x924) = *(int *)(in_ECX + 0x924) + 1;
  }
  else {
    *(undefined4 *)(in_ECX + 0x924) = 1;
  }
  FUN_00401e70((undefined4 *)(in_ECX + 0x1248),L"页号:%d/%d");
  FID_conflict_SetWindowTextW(*(HWND *)(in_ECX + 0x1248),unaff_EDI);
  iStack_4 = 0;
  piVar5 = (int *)(in_ECX + 0xcc);
  do {
    _Src = *(void **)(in_ECX + 0x9e8 + (*(int *)(in_ECX + 0x924) * 0xf + iStack_4) * 4);
    piVar4 = (int *)((int)_Src + -0x10);
    puVar2 = (undefined4 *)(**(code **)(**(int **)((int)_Src + -0x10) + 0x10))();
    if ((*(int *)((int)_Src + -4) < 0) || (puVar2 != (undefined4 *)*piVar4)) {
      piVar4 = (int *)(**(code **)*puVar2)(*(undefined4 *)((int)_Src + -0xc),2);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ab50();
      }
      piVar4[1] = *(int *)((int)_Src + -0xc);
      _DstSize = *(int *)((int)_Src + -0xc) * 2 + 2;
      _memcpy_s(piVar4 + 4,_DstSize,_Src,_DstSize);
    }
    else {
      LOCK();
      *(int *)((int)_Src + -4) = *(int *)((int)_Src + -4) + 1;
      UNLOCK();
    }
    if ((*piVar5 != 0) && (ho = (HGDIOBJ)*piVar5, ho != (HGDIOBJ)0x0)) {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      piVar5[3] = 0;
      piVar5[5] = 0;
      piVar5[4] = 0;
      piVar5[7] = -1;
      *(undefined1 *)((int)piVar5 + 0x19) = 0;
      *(undefined1 *)(piVar5 + 6) = 0;
      DeleteObject(ho);
    }
    iVar3 = FUN_00414860(piVar5 + -1,(LPCWSTR)(piVar4 + 4));
    piVar1 = piVar4 + 3;
    piVar5[0xb] = (uint)(-1 < iVar3);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(*(int *)*piVar4 + 4))(piVar4);
    }
    iStack_4 = iStack_4 + 1;
    piVar5 = piVar5 + 0x25;
  } while (iStack_4 < 0xf);
  lpRect = (RECT *)(in_ECX + 0x92c);
  puVar2 = (undefined4 *)(in_ECX + 0xfc);
  iVar3 = 0xf;
  do {
    *puVar2 = 0;
    InvalidateRect(*(HWND *)(in_ECX + 0x20),lpRect,1);
    puVar2 = puVar2 + 0x25;
    lpRect = lpRect + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



//==================== FUN_00406220 @ 0x00406220 ====================

void __thiscall FUN_00406220(void *this,undefined4 param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  RECT *lprc;
  int iVar4;
  
  iVar4 = 0;
  lprc = (RECT *)((int)this + 0x92c);
  while (pt.y = param_3, pt.x = param_2, BVar1 = PtInRect(lprc,pt), BVar1 == 0) {
    iVar4 = iVar4 + 1;
    lprc = lprc + 1;
    if (0xe < iVar4) {
      CWnd::Default(this);
      return;
    }
  }
  iVar2 = 0;
  piVar3 = (int *)((int)this + 0xfc);
  do {
    if (*piVar3 != 0) {
      *(undefined4 *)(iVar2 * 0x94 + 0xfc + (int)this) = 0;
      InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(iVar2 * 0x10 + 0x92c + (int)this),1);
      break;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x25;
  } while (iVar2 < 0xf);
  *(undefined4 *)(iVar4 * 0x94 + 0xfc + (int)this) = 1;
  InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)(iVar4 * 0x10 + 0x92c + (int)this),1);
  CWnd::Default(this);
  return;
}



//==================== Handler_004087B0 @ 0x004087B0 ====================

undefined4 Handler_004087B0(undefined4 *param_1)

{
  int iVar1;
  UINT_PTR UVar2;
  void *in_ECX;
  uint unaff_EDI;
  int aiStack_1c [3];
  
  aiStack_1c[2] = 0x4087c0;
  iVar1 = OnCreate(in_ECX,param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  aiStack_1c[2] = 0xe801;
  aiStack_1c[1] = 0x50008200;
  iVar1 = (**(code **)(*(int *)((int)in_ECX + 0xec) + 0x17c))();
  if (iVar1 != 0) {
    iVar1 = func_0x0042a658(0x47ce9c,2);
    if (iVar1 != 0) {
      CStatusBar::GetPaneInfo
                ((CStatusBar *)((int)in_ECX + 0xec),1,(uint *)&stack0xfffffff0,
                 (uint *)(aiStack_1c + 1),aiStack_1c);
      CStatusBar::SetPaneInfo((CStatusBar *)((int)in_ECX + 0xec),1,unaff_EDI,0,500);
      UVar2 = SetTimer(*(HWND *)((int)in_ECX + 0x20),1000,200,(TIMERPROC)0x0);
      *(UINT_PTR *)((int)in_ECX + 0xe8) = UVar2;
      return 0;
    }
  }
  return 0xffffffff;
}



//==================== FUN_004151a0 @ 0x004151A0 ====================

void FUN_004151a0(void)

{
  undefined **local_80 [29];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045e278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CDialog::CDialog((CDialog *)local_80,100,(CWnd *)0x0);
  local_80[0] = CAboutDlg::vftable;
  local_4 = 0;
  FUN_0041bafa((CDialog *)local_80);
  local_4 = 0xffffffff;
  CDialog::~CDialog((CDialog *)local_80);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00416490 @ 0x00416490 ====================

void __fastcall FUN_00416490(CListCtrl *param_1)

{
  FUN_00415c30(param_1);
  CWnd::Default((CWnd *)param_1);
  return;
}



//==================== FUN_004164b0 @ 0x004164B0 ====================

void __fastcall FUN_004164b0(int param_1)

{
  BOOL BVar1;
  UINT unaff_EDI;
  DWORD local_34 [10];
  int local_c;
  
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),local_34);
  if ((BVar1 != 0) && (local_34[0] == 0x103)) {
    *(undefined4 *)(param_1 + 0x60) = 1;
    local_c = param_1 + 100;
    FUN_004020e0();
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_EDI);
  return;
}



//==================== FUN_00416510 @ 0x00416510 ====================

void __fastcall FUN_00416510(int param_1)

{
  uint uType;
  BOOL BVar1;
  DWORD local_204;
  wchar_t local_200 [250];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f4db;
  local_c = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xfffffdf4;
  ExceptionList = &local_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_204);
  if ((BVar1 != 0) && (local_204 == 0x103)) {
    *(undefined4 *)(param_1 + 0x60) = 3;
    FUN_00402a60(local_200,param_1 + 100);
    local_4 = 0;
    FUN_00402e70(local_200);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_200,0x10,0x1f,FUN_004195d0);
    ExceptionList = local_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_c;
  return;
}



//==================== Handler_004165F0 @ 0x004165F0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004165F0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416600 @ 0x00416600 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416600(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x65;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416610 @ 0x00416610 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416610(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x66;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416620 @ 0x00416620 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416620(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x67;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416630 @ 0x00416630 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416630(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x68;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416640 @ 0x00416640 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416640(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x69;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416650 @ 0x00416650 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416650(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6a;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416660 @ 0x00416660 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416660(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6b;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416670 @ 0x00416670 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416670(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6c;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416680 @ 0x00416680 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416680(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6d;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416690 @ 0x00416690 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416690(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6e;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166A0 @ 0x004166A0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166A0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x6f;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166B0 @ 0x004166B0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166B0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x70;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166C0 @ 0x004166C0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166C0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x71;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166D0 @ 0x004166D0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166D0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x72;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166E0 @ 0x004166E0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166E0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x73;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_004166F0 @ 0x004166F0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_004166F0(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x74;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416700 @ 0x00416700 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416700(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x75;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416710 @ 0x00416710 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416710(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x76;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416720 @ 0x00416720 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416720(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x77;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416730 @ 0x00416730 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416730(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x78;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== Handler_00416740 @ 0x00416740 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void Handler_00416740(void)

{
  uint uType;
  BOOL BVar1;
  void *this;
  CListCtrl *in_ECX;
  DWORD DStack_32b4;
  int aiStack_32b0 [3240];
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(in_ECX + 0x60) = 0x79;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fe6b;
  pvStack_c = ExceptionList;
  uStack_10 = 0x415708;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcd44;
  ExceptionList = &pvStack_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_32b4);
  if ((BVar1 != 0) && (DStack_32b4 == 0x103)) {
    FUN_0040faa0(aiStack_32b0,(int)(in_ECX + 100));
    uStack_4 = 0;
    this = (void *)FUN_00415510((int)in_ECX);
    SendMessageW(*(HWND *)(in_ECX + 0x20),0x1009,0,0);
    FUN_0040fc10(this,(int)aiStack_32b0);
    FUN_0040ffa0();
    FUN_00410410((int)aiStack_32b0,in_ECX);
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(aiStack_32b0,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
    ExceptionList = pvStack_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = pvStack_c;
  return;
}



//==================== FUN_00416750 @ 0x00416750 ====================

void __fastcall FUN_00416750(int param_1)

{
  uint uType;
  BOOL BVar1;
  DWORD local_2ec;
  wchar_t local_2e8 [366];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f4ab;
  local_c = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xfffffd0c;
  ExceptionList = &local_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_2ec);
  if ((BVar1 != 0) && (local_2ec == 0x103)) {
    *(undefined4 *)(param_1 + 0x60) = 4;
    FUN_00407810((int *)local_2e8,param_1 + 100);
    local_4 = 0;
    FUN_00407a30(local_2e8);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_2e8,8,0x5b,FUN_004195d0);
    ExceptionList = local_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00416830 @ 0x00416830 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00416830(CListCtrl *param_1)

{
  uint uType;
  BOOL BVar1;
  DWORD local_14cc;
  int local_14c8 [1326];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f47b;
  local_c = ExceptionList;
  uStack_10 = 0x416848;
  uType = DAT_0047b94c ^ (uint)&stack0xffffeb2c;
  ExceptionList = &local_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_14cc);
  if ((BVar1 != 0) && (local_14cc == 0x103)) {
    *(undefined4 *)(param_1 + 0x60) = 5;
    FUN_00419470(local_14c8,(int)(param_1 + 100));
    local_4 = 0;
    FUN_004199f0(local_14c8,param_1);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_14c8,0x18,0xdd,FUN_004195d0);
    ExceptionList = local_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00416910 @ 0x00416910 ====================

void __fastcall FUN_00416910(int param_1)

{
  uint uType;
  BOOL BVar1;
  DWORD local_1d4;
  undefined1 local_1d0 [452];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f44b;
  local_c = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xfffffe24;
  ExceptionList = &local_c;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_1d4);
  if ((BVar1 != 0) && (local_1d4 == 0x103)) {
    *(undefined4 *)(param_1 + 0x60) = 6;
    FUN_00406d50(local_1d0,param_1 + 100);
    local_4 = 0;
    FUN_004071d0((int)local_1d0);
    local_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_1d0,0x10,0x1c,FUN_00407120);
    ExceptionList = local_c;
    return;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_c;
  return;
}



//==================== FUN_004169f0 @ 0x004169F0 ====================

void __fastcall FUN_004169f0(int param_1)

{
  int iVar1;
  DWORD dwProcessId;
  HANDLE pvVar2;
  UINT unaff_ESI;
  
  if (*(HANDLE *)(param_1 + 100) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  iVar1 = FUN_00408a90();
  *(int *)(param_1 + 0x68) = iVar1;
  if (iVar1 != 0) {
    dwProcessId = FUN_004088d0();
    pvVar2 = OpenProcess(0x438,0,dwProcessId);
    *(HANDLE *)(param_1 + 100) = pvVar2;
    if (pvVar2 != (HANDLE)0x0) {
      FID_conflict_MessageBoxW((HWND)&DAT_0046cab0,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI)
      ;
      return;
    }
  }
  FID_conflict_MessageBoxW
            ((HWND)&DAT_0046ca40,L"战国兰斯修改器",(LPCWSTR)&DAT_00000030,unaff_ESI);
  return;
}



//==================== FUN_00416a60 @ 0x00416A60 ====================

void __fastcall FUN_00416a60(int param_1)

{
  UINT unaff_ESI;
  
  if (*(HANDLE *)(param_1 + 100) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 100));
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FID_conflict_MessageBoxW((HWND)&DAT_0046cac0,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416A90 @ 0x00416A90 ====================

void Handler_00416A90(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0x6c) = (uint)(*(int *)(in_ECX + 0x6c) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416AE0 @ 0x00416AE0 ====================

void Handler_00416AE0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0x70) = (uint)(*(int *)(in_ECX + 0x70) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416B30 @ 0x00416B30 ====================

void Handler_00416B30(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0x74) = (uint)(*(int *)(in_ECX + 0x74) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x74) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416B80 @ 0x00416B80 ====================

void Handler_00416B80(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0x78) = (uint)(*(int *)(in_ECX + 0x78) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x78) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== FUN_00416bd0 @ 0x00416BD0 ====================

void __fastcall FUN_00416bd0(int param_1)

{
  uint uType;
  BOOL BVar1;
  int iVar2;
  DWORD local_94;
  undefined **local_90 [29];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045e21b;
  local_14 = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xffffff68;
  ExceptionList = &local_14;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_94);
  if ((BVar1 != 0) && (local_94 == 0x103)) {
    CDialog::CDialog((CDialog *)local_90,0x6e,(CWnd *)0x0);
    local_90[0] = CCombatRoundDlg::vftable;
    local_c = 0;
    local_1c = *(undefined4 *)(param_1 + 0xc4);
    iVar2 = FUN_0041bafa((CDialog *)local_90);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x7c) = 1;
      *(undefined4 *)(param_1 + 0xc4) = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    local_c = 0xffffffff;
    local_90[0] = CCombatRoundDlg::vftable;
    CDialog::~CDialog((CDialog *)local_90);
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_14;
  return;
}



//==================== Handler_00416CE0 @ 0x00416CE0 ====================

void Handler_00416CE0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(uint *)(in_ECX + 0x80) = (uint)(*(int *)(in_ECX + 0x80) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x80) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416D50 @ 0x00416D50 ====================

void Handler_00416D50(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(uint *)(in_ECX + 0x84) = (uint)(*(int *)(in_ECX + 0x84) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416DC0 @ 0x00416DC0 ====================

void Handler_00416DC0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(uint *)(in_ECX + 0x88) = (uint)(*(int *)(in_ECX + 0x88) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x88) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00416E30 @ 0x00416E30 ====================

void Handler_00416E30(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x80) = 0;
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 0;
    *(uint *)(in_ECX + 0x8c) = (uint)(*(int *)(in_ECX + 0x8c) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== FUN_00416ea0 @ 0x00416EA0 ====================

void __fastcall FUN_00416ea0(int param_1)

{
  uint uType;
  BOOL BVar1;
  int iVar2;
  DWORD local_94;
  undefined **local_90 [29];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045e1eb;
  local_14 = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xffffff60;
  ExceptionList = &local_14;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_94);
  if ((BVar1 != 0) && (local_94 == 0x103)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    CDialog::CDialog((CDialog *)local_90,0x6d,(CWnd *)0x0);
    local_90[0] = CCombatEnemyProportionDlg::vftable;
    local_c = 0;
    local_1c = *(undefined4 *)(param_1 + 200);
    iVar2 = FUN_0041bafa((CDialog *)local_90);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x90) = 1;
      *(undefined4 *)(param_1 + 200) = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    local_c = 0xffffffff;
    local_90[0] = CCombatEnemyProportionDlg::vftable;
    CDialog::~CDialog((CDialog *)local_90);
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_14;
  return;
}



//==================== Handler_00416FD0 @ 0x00416FD0 ====================

void Handler_00416FD0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x98) = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    *(uint *)(in_ECX + 0x94) = (uint)(*(int *)(in_ECX + 0x94) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417040 @ 0x00417040 ====================

void Handler_00417040(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    *(uint *)(in_ECX + 0x98) = (uint)(*(int *)(in_ECX + 0x98) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x98) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_004170B0 @ 0x004170B0 ====================

void Handler_004170B0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(undefined4 *)(in_ECX + 0x98) = 0;
    *(undefined4 *)(in_ECX + 0xa0) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    *(uint *)(in_ECX + 0x9c) = (uint)(*(int *)(in_ECX + 0x9c) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417120 @ 0x00417120 ====================

void Handler_00417120(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0x94) = 0;
    *(undefined4 *)(in_ECX + 0x98) = 0;
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined4 *)(in_ECX + 0xa4) = 0;
    *(uint *)(in_ECX + 0xa0) = (uint)(*(int *)(in_ECX + 0xa0) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== FUN_00417190 @ 0x00417190 ====================

void __fastcall FUN_00417190(int param_1)

{
  uint uType;
  BOOL BVar1;
  int iVar2;
  DWORD local_94;
  undefined **local_90 [29];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045e1eb;
  local_14 = ExceptionList;
  uType = DAT_0047b94c ^ (uint)&stack0xffffff60;
  ExceptionList = &local_14;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(param_1 + 100),&local_94);
  if ((BVar1 != 0) && (local_94 == 0x103)) {
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    CDialog::CDialog((CDialog *)local_90,0x6d,(CWnd *)0x0);
    local_90[0] = CCombatEnemyProportionDlg::vftable;
    local_c = 0;
    local_1c = *(undefined4 *)(param_1 + 0xcc);
    iVar2 = FUN_0041bafa((CDialog *)local_90);
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0xa4) = 1;
      *(undefined4 *)(param_1 + 0xcc) = local_1c;
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    local_c = 0xffffffff;
    local_90[0] = CCombatEnemyProportionDlg::vftable;
    CDialog::~CDialog((CDialog *)local_90);
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
  ExceptionList = local_14;
  return;
}



//==================== Handler_004172C0 @ 0x004172C0 ====================

void Handler_004172C0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0xac) = 0;
    *(uint *)(in_ECX + 0xa8) = (uint)(*(int *)(in_ECX + 0xa8) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417320 @ 0x00417320 ====================

void Handler_00417320(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(undefined4 *)(in_ECX + 0xa8) = 0;
    *(uint *)(in_ECX + 0xac) = (uint)(*(int *)(in_ECX + 0xac) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417380 @ 0x00417380 ====================

void Handler_00417380(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0xb0) = (uint)(*(int *)(in_ECX + 0xb0) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_004173E0 @ 0x004173E0 ====================

void Handler_004173E0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0xb4) = (uint)(*(int *)(in_ECX + 0xb4) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417440 @ 0x00417440 ====================

void Handler_00417440(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0xb8) = (uint)(*(int *)(in_ECX + 0xb8) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_004174A0 @ 0x004174A0 ====================

void Handler_004174A0(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0xbc) = (uint)(*(int *)(in_ECX + 0xbc) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417500 @ 0x00417500 ====================

void Handler_00417500(void)

{
  BOOL BVar1;
  DWORD in_ECX;
  UINT unaff_ESI;
  DWORD DStack_4;
  
  DStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&DStack_4);
  if ((BVar1 != 0) && (DStack_4 == 0x103)) {
    *(uint *)(in_ECX + 0xc0) = (uint)(*(int *)(in_ECX + 0xc0) == 0);
    return;
  }
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  return;
}



//==================== Handler_00417560 @ 0x00417560 ====================

void Handler_00417560(void)

{
  LPCVOID lpBaseAddress;
  BOOL BVar1;
  int iVar2;
  SIZE_T in_ECX;
  undefined4 extraout_ECX;
  UINT unaff_EDI;
  bool bVar3;
  int iVar4;
  SIZE_T SStack_4;
  
  SStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&SStack_4);
  if ((BVar1 == 0) || (SStack_4 != 0x103)) {
    FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_EDI);
  }
  else {
    iVar4 = 0x24;
    iVar2 = FID_conflict_MessageBoxW
                      ((HWND)&UNK_0046cad0,L"战国兰斯修改器",(LPCWSTR)0x24,unaff_EDI);
    if (iVar2 == 6) {
      lpBaseAddress = (LPCVOID)FUN_00408c70(extraout_ECX,*(int *)(in_ECX + 0x68),0x948);
      iVar2 = 0x83;
      do {
        ReadProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,
                          (SIZE_T *)&stack0xfffffff8);
        bVar3 = iVar4 != 1;
        iVar4 = 1;
        if (bVar3) {
          iVar4 = 1;
          WriteProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,&SStack_4);
        }
        lpBaseAddress = (LPCVOID)((int)lpBaseAddress + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}



//==================== Handler_004175C0 @ 0x004175C0 ====================

void Handler_004175C0(void)

{
  LPCVOID lpBaseAddress;
  BOOL BVar1;
  int iVar2;
  SIZE_T in_ECX;
  undefined4 extraout_ECX;
  UINT unaff_EDI;
  bool bVar3;
  int iVar4;
  SIZE_T SStack_4;
  
  SStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&SStack_4);
  if ((BVar1 == 0) || (SStack_4 != 0x103)) {
    FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_EDI);
  }
  else {
    iVar4 = 0x24;
    iVar2 = FID_conflict_MessageBoxW
                      ((HWND)&UNK_0046cae8,L"战国兰斯修改器",(LPCWSTR)0x24,unaff_EDI);
    if (iVar2 == 6) {
      lpBaseAddress = (LPCVOID)FUN_00408c70(extraout_ECX,*(int *)(in_ECX + 0x68),0x94c);
      iVar2 = 0x2b;
      do {
        ReadProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,
                          (SIZE_T *)&stack0xfffffff8);
        bVar3 = iVar4 != 1;
        iVar4 = 1;
        if (bVar3) {
          iVar4 = 1;
          WriteProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,&SStack_4);
        }
        lpBaseAddress = (LPCVOID)((int)lpBaseAddress + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}



//==================== Handler_00417620 @ 0x00417620 ====================

void Handler_00417620(void)

{
  BOOL BVar1;
  int iVar2;
  SIZE_T in_ECX;
  undefined4 extraout_ECX;
  LPCVOID lpBaseAddress;
  UINT unaff_EDI;
  bool bVar3;
  int iVar4;
  SIZE_T SStack_4;
  
  SStack_4 = in_ECX;
  BVar1 = GetExitCodeProcess(*(HANDLE *)(in_ECX + 100),&SStack_4);
  if ((BVar1 == 0) || (SStack_4 != 0x103)) {
    FID_conflict_MessageBoxW((HWND)&DAT_0046ca60,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_EDI);
  }
  else {
    iVar4 = 0x24;
    iVar2 = FID_conflict_MessageBoxW
                      ((HWND)&UNK_0046cb00,L"战国兰斯修改器",(LPCWSTR)0x24,unaff_EDI);
    if (iVar2 == 6) {
      iVar2 = FUN_00408c70(extraout_ECX,*(int *)(in_ECX + 0x68),0x950);
      lpBaseAddress = (LPCVOID)(iVar2 + 0x28);
      iVar2 = 0x2f;
      do {
        ReadProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,
                          (SIZE_T *)&stack0xfffffff8);
        bVar3 = iVar4 != 1;
        iVar4 = 1;
        if (bVar3) {
          iVar4 = 1;
          WriteProcessMemory(*(HANDLE *)(in_ECX + 100),lpBaseAddress,&stack0xfffffff0,4,&SStack_4);
        }
        lpBaseAddress = (LPCVOID)((int)lpBaseAddress + 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}



//==================== FUN_00417680 @ 0x00417680 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00417680(int param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uStack_125f4;
  int iStack_125ec;
  int aiStack_125e8 [9399];
  int iStack_930c;
  uint uStack_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045f40b;
  local_14 = ExceptionList;
  pvVar3 = (void *)(DAT_0047b94c ^ (uint)&iStack_125ec);
  uStack_125f4 = DAT_0047b94c ^ (uint)&stack0xfffeda10;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x60) = 7;
  FUN_004094b0(aiStack_125e8);
  local_c = 0;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x1009,0,0);
  (**(code **)(aiStack_125e8[0] + 0x14))(param_1);
  (**(code **)(iStack_125ec + 0x18))(param_1);
  local_14 = (void *)0xffffffff;
  piVar1 = (int *)(iStack_930c + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(iStack_930c + -0x10) + 4))((undefined4 *)(iStack_930c + -0x10));
  }
  ExceptionList = pvVar3;
  __security_check_cookie(uStack_24 ^ (uint)&uStack_125f4);
  return;
}



//==================== FUN_00417770 @ 0x00417770 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00417770(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uStack_9314;
  int iStack_930c;
  int local_9308 [9399];
  int iStack_2c;
  uint uStack_24;
  void *local_1c;
  int iStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045f3cb;
  local_14 = ExceptionList;
  local_1c = (void *)(DAT_0047b94c ^ (uint)&iStack_930c);
  uStack_9314 = DAT_0047b94c ^ (uint)&stack0xffff6cf0;
  ExceptionList = &local_14;
  *(undefined4 *)(param_1 + 0x60) = 8;
  iStack_18 = param_1;
  FUN_00404560(local_9308);
  local_c = 0;
  SendMessageW(*(HWND *)(param_1 + 0x20),0x1009,0,0);
  (**(code **)(local_9308[0] + 0x14))(param_1);
  (**(code **)(iStack_930c + 0x18))(param_1);
  local_14 = (void *)0xffffffff;
  piVar1 = (int *)(iStack_2c + -4);
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1 || iVar2 + -1 < 0) {
    (**(code **)(**(int **)(iStack_2c + -0x10) + 4))((undefined4 *)(iStack_2c + -0x10));
  }
  ExceptionList = local_1c;
  __security_check_cookie(uStack_24 ^ (uint)&uStack_9314);
  return;
}



//==================== Handler_00417860 @ 0x00417860 ====================

void Handler_00417860(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417890 @ 0x00417890 ====================

void Handler_00417890(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004178a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004178b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_004178C0 @ 0x004178C0 ====================

void Handler_004178C0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x74) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004178d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004178e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_004178F0 @ 0x004178F0 ====================

void Handler_004178F0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x78) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417911. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417920 @ 0x00417920 ====================

void Handler_00417920(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417937. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417950 @ 0x00417950 ====================

void Handler_00417950(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041796a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417980 @ 0x00417980 ====================

void Handler_00417980(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x84) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0041799a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004179a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_004179B0 @ 0x004179B0 ====================

void Handler_004179B0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004179ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004179d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_004179E0 @ 0x004179E0 ====================

void Handler_004179E0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x004179fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417A10 @ 0x00417A10 ====================

void Handler_00417A10(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x90) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417a2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417A40 @ 0x00417A40 ====================

void Handler_00417A40(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x94) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417A70 @ 0x00417A70 ====================

void Handler_00417A70(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417a8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417AA0 @ 0x00417AA0 ====================

void Handler_00417AA0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x9c) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417AD0 @ 0x00417AD0 ====================

void Handler_00417AD0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417B00 @ 0x00417B00 ====================

void Handler_00417B00(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417b1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417B30 @ 0x00417B30 ====================

void Handler_00417B30(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417B60 @ 0x00417B60 ====================

void Handler_00417B60(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xac) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417BC0 @ 0x00417BC0 ====================

void Handler_00417BC0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417bda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417BF0 @ 0x00417BF0 ====================

void Handler_00417BF0(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417C20 @ 0x00417C20 ====================

void Handler_00417C20(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xbc) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== Handler_00417C50 @ 0x00417C50 ====================

void Handler_00417C50(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 4))();
  return;
}



//==================== FUN_00417f60 @ 0x00417F60 ====================

void __thiscall FUN_00417f60(void *this,undefined4 param_1,undefined4 *param_2)

{
  AFX_MODULE_STATE *pAVar1;
  HMENU pHVar2;
  CMenu *this_00;
  int iVar3;
  tagPOINT local_28;
  undefined **local_20;
  HMENU local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0045e1b8;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_2 = 0;
  local_20 = CMenu::vftable;
  local_1c = (HMENU)0x0;
  local_c = 0;
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadMenuW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)0x8b);
  Attach(&local_20,(int)pHVar2);
  iVar3 = *(int *)((int)this + 0x60);
  if (iVar3 == 1) {
    iVar3 = 0;
LAB_00417fd6:
    pHVar2 = GetSubMenu(local_1c,iVar3);
    this_00 = CMenu::FromHandle(pHVar2);
    GetCursorPos(&local_28);
  }
  else if (iVar3 == 2) {
    iVar3 = 1;
LAB_0041800d:
    pHVar2 = GetSubMenu(local_1c,iVar3);
    this_00 = CMenu::FromHandle(pHVar2);
    GetCursorPos(&local_28);
  }
  else {
    if ((iVar3 < 0x65) || (0x79 < iVar3)) {
      if (iVar3 == 4) {
        iVar3 = 3;
        goto LAB_00417fd6;
      }
      if (iVar3 == 6) {
        iVar3 = 4;
        goto LAB_0041800d;
      }
      if (iVar3 == 3) {
        iVar3 = 5;
      }
      else {
        if (iVar3 == 5) {
          iVar3 = 6;
          goto LAB_00417fd6;
        }
        if (iVar3 == 7) {
          iVar3 = 7;
          goto LAB_0041800d;
        }
        if (iVar3 != 8) goto LAB_004180b1;
        iVar3 = 8;
      }
    }
    else {
      iVar3 = 2;
    }
    pHVar2 = GetSubMenu(local_1c,iVar3);
    this_00 = CMenu::FromHandle(pHVar2);
    GetCursorPos(&local_28);
  }
  CMenu::TrackPopupMenu(this_00,0,local_28.x,local_28.y,this,(tagRECT *)0x0);
LAB_004180b1:
  local_c = 0xffffffff;
  local_20 = CMenu::vftable;
  CMenu::DestroyMenu((CMenu *)&local_20);
  ExceptionList = local_14;
  return;
}



//==================== FUN_004180e0 @ 0x004180E0 ====================

void __fastcall FUN_004180e0(int param_1)

{
  wchar_t local_2e8 [366];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f39b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00407810((int *)local_2e8,param_1 + 100);
  local_4 = 0;
  FUN_00407c20((int)local_2e8);
  FUN_00407a30(local_2e8);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_2e8,8,0x5b,FUN_004195d0);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00418170 @ 0x00418170 ====================

void __fastcall FUN_00418170(int param_1)

{
  undefined1 local_1d0 [452];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f36b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00406d50(local_1d0,param_1 + 100);
  local_4 = 0;
  FUN_00407400((int)local_1d0);
  FUN_004071d0((int)local_1d0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_1d0,0x10,0x1c,FUN_00407120);
  ExceptionList = local_c;
  return;
}



//==================== thunk_FUN_00415c30 @ 0x00418200 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall thunk_FUN_00415c30(CListCtrl *param_1)

{
  WPARAM WVar1;
  CListCtrl *pCVar2;
  uint uVar3;
  LRESULT LVar4;
  int iVar5;
  int extraout_ECX;
  WPARAM WStack_177d4;
  CListCtrl *pCStack_177d0;
  CListCtrl *pCStack_177cc;
  undefined **appuStack_177c8 [31];
  wchar_t *pwStack_1774c;
  CListCtrl *pCStack_176c4;
  ushort auStack_176c0 [368];
  CDialog aCStack_173e0 [304];
  undefined4 uStack_172b0;
  int aiStack_16d50 [3242];
  int aiStack_13aa8 [1328];
  undefined4 auStack_125e8 [18805];
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_0045ff6a;
  pvStack_14 = ExceptionList;
  uVar3 = DAT_0047b94c ^ (uint)&WStack_177d4;
  ExceptionList = &pvStack_14;
  pCStack_177d0 = param_1 + 100;
  pCStack_177cc = param_1;
  FUN_0040faa0(aiStack_16d50,(int)pCStack_177d0);
  uStack_c = 0;
  LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,0xffffffff,2);
  iVar5 = LVar4 + 1;
  if (iVar5 != 0) {
    do {
      WStack_177d4 = iVar5 - 1;
      LVar4 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,WStack_177d4,2);
      iVar5 = LVar4 + 1;
    } while (iVar5 != 0);
    iVar5 = *(int *)(param_1 + 0x60);
    if (iVar5 == 1) {
      FUN_00401840();
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      FUN_00401980();
      iVar5 = FUN_0041bafa((CDialog *)appuStack_177c8);
      if (iVar5 == 1) {
        FUN_00401bc0();
        pCStack_176c4 = pCStack_177d0;
        FUN_004023e0();
      }
      uStack_c = uStack_c & 0xffffff00;
      appuStack_177c8[0] = CBaseInfoDlg::vftable;
      CDialog::~CDialog((CDialog *)appuStack_177c8);
    }
    else if (iVar5 == 3) {
      FUN_00402620();
      uStack_c._0_1_ = 2;
      FUN_00402780();
      iVar5 = FUN_0041bafa((CDialog *)appuStack_177c8);
      pCVar2 = pCStack_177cc;
      if (iVar5 == 1) {
        FUN_004028c0();
        FUN_00402a60(auStack_176c0,pCStack_177d0);
        uStack_c._0_1_ = 3;
        FUN_00403040(pCVar2);
        uStack_c._0_1_ = 2;
        _eh_vector_destructor_iterator_(auStack_176c0,0x10,0x1f,FUN_004195d0);
      }
      uStack_c = (uint)uStack_c._1_3_ << 8;
      CHttpConnection::~CHttpConnection((CHttpConnection *)appuStack_177c8);
    }
    else if (iVar5 == 2) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00412a40((int)aiStack_16d50,&stack0xfffe8818);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x65) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e00);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x66) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e08);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x67) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e10);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x68) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e18);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x69) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e20);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6a) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e28);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6b) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e30);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6c) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e3c);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6d) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e48);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6e) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e54);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x6f) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e5c);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x70) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e64);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x71) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e6c);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x72) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e74);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x73) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e7c);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x74) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e84);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x75) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,&DAT_00469e90);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x76) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469e98);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x77) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469ea0);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x78) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469ea8);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 0x79) {
      pCStack_177d0 = (CListCtrl *)&stack0xfffe8818;
      iVar5 = extraout_ECX;
      FUN_00406a10(&stack0xfffe8818,(short *)&DAT_00469eb0);
      FUN_00415800((int)param_1,param_1,iVar5);
    }
    else if (iVar5 == 4) {
      FUN_00407530((CDialog *)appuStack_177c8);
      WVar1 = WStack_177d4;
      uStack_c._0_1_ = 4;
      FUN_00407690();
      iVar5 = FUN_0041bafa((CDialog *)appuStack_177c8);
      pCVar2 = pCStack_177cc;
      if (iVar5 == 1) {
        FUN_00407750((CDialog *)appuStack_177c8,pCStack_177cc,WVar1);
        FUN_00407810((int *)auStack_176c0,(int)pCStack_177d0);
        uStack_c._0_1_ = 5;
        FUN_00407ba0(pCVar2,(SIZE_T)auStack_176c0);
        uStack_c._0_1_ = 4;
        _eh_vector_destructor_iterator_(auStack_176c0,8,0x5b,FUN_004195d0);
      }
      uStack_c = (uint)uStack_c._1_3_ << 8;
      CHttpConnection::~CHttpConnection((CHttpConnection *)appuStack_177c8);
    }
    else if (iVar5 == 5) {
      FUN_00418ec0((CDialog *)appuStack_177c8);
      uStack_c._0_1_ = 6;
      FUN_004190c0();
      iVar5 = FUN_0041bafa((CDialog *)appuStack_177c8);
      pCVar2 = pCStack_177cc;
      if (iVar5 == 1) {
        FUN_00419280((wchar_t *)appuStack_177c8);
        FUN_00419470(aiStack_13aa8,(int)pCStack_177d0);
        uStack_c._0_1_ = 7;
        FUN_00419c90(aiStack_13aa8,pCVar2);
        uStack_c._0_1_ = 6;
        _eh_vector_destructor_iterator_(aiStack_13aa8,0x18,0xdd,FUN_004195d0);
      }
      uStack_c = (uint)uStack_c._1_3_ << 8;
      FUN_00418f80((CDialog *)appuStack_177c8);
    }
    else if (iVar5 == 6) {
      FUN_00406ae0((CDialog *)appuStack_177c8);
      WVar1 = WStack_177d4;
      uStack_c._0_1_ = 8;
      FUN_00406c50();
      iVar5 = FUN_0041bafa((CDialog *)appuStack_177c8);
      pCVar2 = pCStack_177cc;
      if (iVar5 == 1) {
        CListCtrl::SetItemText(pCStack_177cc,WVar1,2,pwStack_1774c);
        FUN_00406d50(auStack_176c0,pCStack_177d0);
        uStack_c._0_1_ = 9;
        FUN_00407340(pCVar2,auStack_176c0);
        uStack_c._0_1_ = 8;
        _eh_vector_destructor_iterator_(auStack_176c0,0x10,0x1c,FUN_00407120);
      }
      uStack_c = (uint)uStack_c._1_3_ << 8;
      FUN_00406b90((CDialog *)appuStack_177c8);
    }
    else {
      if (iVar5 == 7) {
        FUN_0040d250(aCStack_173e0);
        WVar1 = WStack_177d4;
        uStack_c._0_1_ = 10;
        FUN_0040e460();
        iVar5 = FUN_0041bafa(aCStack_173e0);
        pCVar2 = pCStack_177cc;
        if (iVar5 == 1) {
          FUN_0040f230((wchar_t *)aCStack_173e0);
          FUN_004094b0(auStack_125e8);
          uStack_c._0_1_ = 0xb;
          FUN_0040ada0(auStack_125e8,pCVar2,WVar1);
          FUN_0040ad30(auStack_125e8);
        }
      }
      else {
        if (iVar5 != 8) goto LAB_0041644e;
        FUN_0040d250(aCStack_173e0);
        WVar1 = WStack_177d4;
        uStack_c._0_1_ = 0xc;
        uStack_172b0 = 0;
        FUN_0040e460();
        iVar5 = FUN_0041bafa(aCStack_173e0);
        pCVar2 = pCStack_177cc;
        if (iVar5 == 1) {
          FUN_0040f230((wchar_t *)aCStack_173e0);
          FUN_00404560(auStack_125e8);
          uStack_c._0_1_ = 0xd;
          FUN_0040ada0(auStack_125e8,pCVar2,WVar1);
          FUN_0040ad30(auStack_125e8);
        }
      }
      uStack_c = (uint)uStack_c._1_3_ << 8;
      FUN_0040d6f0(aCStack_173e0);
    }
  }
LAB_0041644e:
  uStack_c = 0xffffffff;
  _eh_vector_destructor_iterator_(aiStack_16d50,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
  ExceptionList = pvStack_14;
  __security_check_cookie(uVar3 ^ (uint)&WStack_177d4);
  return;
}



//==================== FUN_00418210 @ 0x00418210 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00418210(CListCtrl *param_1)

{
  SIZE_T extraout_ECX;
  SIZE_T SVar1;
  SIZE_T extraout_ECX_00;
  int iVar2;
  undefined4 *puVar3;
  int local_14c8 [3];
  undefined4 local_14bc [1323];
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045f33b;
  local_c = ExceptionList;
  uStack_10 = 0x418228;
  ExceptionList = &local_c;
  FUN_00419470(local_14c8,(int)(param_1 + 100));
  iVar2 = 0;
  local_4 = 0;
  FUN_00419610();
  puVar3 = local_14bc;
  SVar1 = extraout_ECX;
  do {
    *puVar3 = 0;
    FUN_004198e0(SVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 6;
    SVar1 = extraout_ECX_00;
  } while (iVar2 < 0xdd);
  FUN_004199f0(local_14c8,param_1);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_14c8,0x18,0xdd,FUN_004195d0);
  ExceptionList = local_c;
  return;
}



//==================== Handler_004182D0 @ 0x004182D0 ====================

void Handler_004182D0(void)

{
  ushort *puVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = (ushort *)FUN_00415510(in_ECX);
  FUN_00415a00(puVar1,iVar2);
  return;
}



//==================== FUN_004182f0 @ 0x004182F0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004182f0(CListCtrl *param_1)

{
  WPARAM wParam;
  int *piVar1;
  uint uType;
  LRESULT LVar2;
  int iVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  void *this;
  undefined4 extraout_ECX;
  SIZE_T extraout_ECX_00;
  SIZE_T local_3440;
  SIZE_T SStack_343c;
  ushort *puStack_3438;
  SIZE_T SStack_3434;
  int local_3430 [3240];
  undefined4 *puStack_190;
  CListCtrl *pCStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 auStack_174 [356];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045fd7b;
  local_c = ExceptionList;
  local_10 = DAT_0047b94c ^ (uint)&local_3440;
  uType = DAT_0047b94c ^ (uint)&stack0xffffcbb0;
  ExceptionList = &local_c;
  LVar2 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,0xffffffff,2);
  iVar3 = LVar2 + 1;
  if (iVar3 != 0) {
    do {
      wParam = iVar3 - 1;
      LVar2 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,wParam,2);
      iVar3 = LVar2 + 1;
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)CListCtrl::GetItemText(param_1,(int)&local_3440,wParam);
    SVar5 = FUN_00446845((wchar_t *)*puVar4);
    piVar1 = (int *)(local_3440 - 4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(local_3440 - 0x10) + 4))((undefined4 *)(local_3440 - 0x10));
    }
    FUN_0040faa0(local_3430,(int)(param_1 + 100));
    uStack_4 = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_178 = 0;
    pCStack_18c = param_1 + 100;
    _memset(auStack_174,0,0x164);
    FUN_00415510((int)param_1);
    FUN_00413140(SVar5);
    iVar3 = FUN_00408c70(extraout_ECX,puStack_190[1],0);
    ReadProcessMemory((HANDLE)*puStack_190,(LPCVOID)(iVar3 + 0x128),&puStack_3438,4,&SStack_3434);
    iVar3 = FUN_004133d0(&SStack_343c,puStack_3438,(int *)&local_3440);
    if (iVar3 == 0) {
      FID_conflict_MessageBoxW((HWND)&DAT_0046cb50,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
    }
    else {
      SVar5 = local_3440;
      if (((byte)SStack_343c < 2) ||
         (iVar3 = FID_conflict_MessageBoxW
                            ((HWND)&DAT_0046cb68,L"战国兰斯修改器",(LPCWSTR)0x24,uType),
         SVar5 = extraout_ECX_00, iVar3 == 6)) {
        iVar3 = FUN_00412a00(SVar5);
        FUN_00413210(iVar3,local_3440,SStack_343c);
        FID_conflict_MessageBoxW((HWND)&DAT_0046cb88,L"战国兰斯修改器",(LPCWSTR)0x40,uType);
      }
      this = (void *)FUN_00415510((int)param_1);
      SendMessageW(*(HWND *)(param_1 + 0x20),0x1009,0,0);
      FUN_0040fc10(this,(int)local_3430);
      FUN_0040ffa0();
      FUN_00410410((int)local_3430,param_1);
    }
    uStack_4 = 0xffffffff;
    _eh_vector_destructor_iterator_(local_3430,0xd8,0x3c,(_func_void_void_ptr *)&LAB_0040fb60);
  }
  ExceptionList = local_c;
  __security_check_cookie(local_10 ^ (uint)&local_3440);
  return;
}



//==================== Handler_00418560 @ 0x00418560 ====================

void Handler_00418560(void)

{
  WPARAM wParam;
  int *piVar1;
  LRESULT LVar2;
  int iVar3;
  undefined4 *puVar4;
  SIZE_T SVar5;
  undefined4 uVar6;
  CListCtrl *in_ECX;
  UINT unaff_ESI;
  HWND hWnd;
  int iStack_184;
  CListCtrl *pCStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_168 [356];
  uint uStack_4;
  
  uStack_4 = DAT_0047b94c ^ (uint)&iStack_184;
  LVar2 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x100c,0xffffffff,2);
  iVar3 = LVar2 + 1;
  if (iVar3 != 0) {
    do {
      wParam = iVar3 - 1;
      LVar2 = SendMessageW(*(HWND *)(in_ECX + 0x20),0x100c,wParam,2);
      iVar3 = LVar2 + 1;
    } while (iVar3 != 0);
    puVar4 = (undefined4 *)CListCtrl::GetItemText(in_ECX,(int)&iStack_184,wParam);
    SVar5 = FUN_00446845((wchar_t *)*puVar4);
    piVar1 = (int *)(iStack_184 + -4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(iStack_184 + -0x10) + 4))((undefined4 *)(iStack_184 + -0x10));
    }
    pCStack_180 = in_ECX + 100;
    uStack_17c = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    _memset(auStack_168,0,0x164);
    uVar6 = FUN_00415510((int)in_ECX);
    iVar3 = FUN_004137e0(&pCStack_180,uVar6,SVar5);
    if (iVar3 == 0) {
      hWnd = (HWND)&UNK_0046cba4;
    }
    else {
      hWnd = (HWND)&UNK_0046cb94;
    }
    FID_conflict_MessageBoxW(hWnd,L"战国兰斯修改器",(LPCWSTR)0x40,unaff_ESI);
  }
  __security_check_cookie(uStack_4 ^ (uint)&iStack_184);
  return;
}



//==================== Handler_00418660 @ 0x00418660 ====================

void Handler_00418660(void)

{
  ushort *puVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = (ushort *)FUN_00415510(in_ECX);
  FUN_00415a00(puVar1,iVar2);
  return;
}



//==================== FUN_00418680 @ 0x00418680 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00418680(CListCtrl *param_1)

{
  WPARAM wParam;
  int *piVar1;
  uint uVar2;
  uint uType;
  LRESULT LVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  CSimpleStringT<char,0> *pCVar7;
  undefined1 auStack_125fc [7];
  char cStack_125f5;
  int iStack_125f4;
  int iStack_125f0;
  int iStack_125ec;
  undefined **ppuStack_125e8;
  undefined1 auStack_125e4 [24];
  undefined4 auStack_125cc [9394];
  int iStack_9304;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045f2fc;
  local_14 = ExceptionList;
  uVar2 = DAT_0047b94c ^ (uint)auStack_125fc;
  uType = DAT_0047b94c ^ (uint)&stack0xfffed9f8;
  ExceptionList = &local_14;
  LVar3 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,0xffffffff,2);
  iVar4 = LVar3 + 1;
  if (iVar4 != 0) {
    do {
      wParam = iVar4 - 1;
      LVar3 = SendMessageW(*(HWND *)(param_1 + 0x20),0x100c,wParam,2);
      iVar4 = LVar3 + 1;
    } while (iVar4 != 0);
    CListCtrl::GetItemText(param_1,(int)&iStack_125f0,wParam);
    local_c = 0;
    puVar5 = (undefined4 *)CListCtrl::GetItemText(param_1,(int)&iStack_125f4,wParam);
    iVar6 = FUN_00446845((wchar_t *)*puVar5);
    piVar1 = (int *)(iStack_125f4 + -4);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(iStack_125f4 + -0x10) + 4))((undefined4 *)(iStack_125f4 + -0x10));
    }
    pCVar7 = FUN_0040a5f0((CSimpleStringT<char,0> *)&iStack_125ec,(short *)&DAT_0046cbbc,
                          &iStack_125f0);
    local_c._0_1_ = 1;
    pCVar7 = FUN_00404a50((CSimpleStringT<char,0> *)&iStack_125f4,(int *)pCVar7,
                          (short *)&DAT_0046cbb4);
    local_c._0_1_ = 2;
    iVar4 = FID_conflict_MessageBoxW(*(HWND *)pCVar7,L"战国兰斯修改器",(LPCWSTR)0x24,uType);
    cStack_125f5 = iVar4 == 6;
    local_c._0_1_ = 1;
    piVar1 = (int *)(iStack_125f4 + -4);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 + -1 < 1) {
      (**(code **)(**(int **)(iStack_125f4 + -0x10) + 4))((undefined4 *)(iStack_125f4 + -0x10));
    }
    local_c._0_1_ = 0;
    piVar1 = (int *)(iStack_125ec + -4);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 + -1 < 1) {
      (**(code **)(**(int **)(iStack_125ec + -0x10) + 4))((undefined4 *)(iStack_125ec + -0x10));
    }
    if (cStack_125f5 != '\0') {
      FUN_004094b0(&ppuStack_125e8);
      local_c._0_1_ = 3;
      auStack_125e4[iVar6 * 0x178] = 0;
      auStack_125cc[iVar6 * 0x5e] = 0;
      (*(code *)ppuStack_125e8[3])(iVar6);
      SendMessageW(*(HWND *)(param_1 + 0x20),0x1009,0,0);
      (**(code **)(iStack_125ec + 0x14))(param_1);
      (**(code **)(iStack_125f0 + 0x18))(param_1);
      local_c = (uint)local_c._1_3_ << 8;
      ppuStack_125e8 = CPersonFileInfoOP::vftable;
      piVar1 = (int *)(iStack_9304 + -4);
      LOCK();
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 + -1 < 1) {
        (**(code **)(**(int **)(iStack_9304 + -0x10) + 4))((undefined4 *)(iStack_9304 + -0x10));
      }
    }
    local_c = 0xffffffff;
    piVar1 = (int *)(iStack_125f0 + -4);
    LOCK();
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1 || iVar4 + -1 < 0) {
      (**(code **)(**(int **)(iStack_125f0 + -0x10) + 4))((undefined4 *)(iStack_125f0 + -0x10));
    }
  }
  ExceptionList = local_14;
  __security_check_cookie(uVar2 ^ (uint)auStack_125fc);
  return;
}



//==================== FUN_004188f0 @ 0x004188F0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004188f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  CStringData *pCVar4;
  CStringData *pCVar5;
  CStringData *pCVar6;
  CStringData *pCVar7;
  undefined1 *puStack_127c0;
  undefined1 *puStack_127bc;
  undefined1 *puStack_127b8;
  undefined1 *puStack_127b4;
  CDialog aCStack_127b0 [200];
  int iStack_126e8;
  int iStack_126e4;
  int iStack_126e0;
  undefined1 *puStack_126dc;
  int iStack_12684;
  int iStack_125ec;
  undefined **appuStack_125e8 [9401];
  int iStack_9304;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045fd37;
  local_14 = ExceptionList;
  uVar2 = DAT_0047b94c ^ (uint)&puStack_127c0;
  ExceptionList = &local_14;
  FUN_00408cf0(aCStack_127b0);
  local_c = 0;
  iVar3 = FUN_0041bafa(aCStack_127b0);
  if (iVar3 == 1) {
    FUN_004094b0(appuStack_125e8);
    local_c._0_1_ = 1;
    puStack_127b4 = &stack0xfffed82c;
    pCVar4 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_12684 + -0x10));
    pCVar4 = pCVar4 + 0x10;
    local_c._0_1_ = 2;
    puStack_127b8 = &stack0xfffed828;
    pCVar5 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_126e4 + -0x10));
    pCVar5 = pCVar5 + 0x10;
    local_c._0_1_ = 3;
    puStack_127c0 = &stack0xfffed824;
    pCVar6 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_126e8 + -0x10));
    pCVar6 = pCVar6 + 0x10;
    local_c._0_1_ = 4;
    puStack_127bc = &stack0xfffed820;
    pCVar7 = ATL::CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iStack_126e0 + -0x10));
    local_c._0_1_ = 1;
    FUN_004098a0((int *)appuStack_125e8,(LPCWSTR)(pCVar7 + 0x10),(ushort *)pCVar6,(int)pCVar5,
                 (ushort *)pCVar4,puStack_126dc);
    SendMessageW(*(HWND *)(param_1 + 0x20),0x1009,0,0);
    (*(code *)appuStack_125e8[0][5])();
    (**(code **)(iStack_125ec + 0x18))();
    local_c = (uint)local_c._1_3_ << 8;
    appuStack_125e8[0] = CPersonFileInfoOP::vftable;
    piVar1 = (int *)(iStack_9304 + -4);
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 1 || iVar3 + -1 < 0) {
      (**(code **)(**(int **)(iStack_9304 + -0x10) + 4))();
    }
  }
  local_c = 0xffffffff;
  FUN_00408e00(aCStack_127b0);
  ExceptionList = local_14;
  __security_check_cookie(uVar2 ^ (uint)&puStack_127c0);
  return;
}



//==================== OnActivateTopLevel @ 0x0042770F ====================

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnActivateTopLevel(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CFrameWnd::OnActivateTopLevel(CFrameWnd *this,uint param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  CWnd::OnActivateTopLevel((CWnd *)this,param_1,param_2);
  (**(code **)(*(int *)this + 0x188))();
  if (*(int *)(this + 0x80) != 0) {
    if (((short)param_1 == 0) || ((short)(param_1 >> 0x10) != 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    (**(code **)(**(int **)(this + 0x80) + 0x58))(uVar1);
  }
  iVar2 = FUN_0042d831();
  if (*(CFrameWnd **)(iVar2 + 0x20) == this) {
    piVar3 = *(int **)(this + 0xb0);
    if (piVar3 == (int *)0x0) {
      iVar2 = (**(code **)(*(int *)this + 0x148))();
      piVar3 = *(int **)(iVar2 + 0xb0);
      if (piVar3 == (int *)0x0) goto LAB_0042778b;
    }
    (**(code **)(*piVar3 + 0x168))(0,piVar3,piVar3);
  }
LAB_0042778b:
  PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
  return 0;
}



//==================== OnUpdateControlBarMenu @ 0x0042803F ====================

/* Library Function - Single Match
    public: void __thiscall CFrameWnd::OnUpdateControlBarMenu(class CCmdUI *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnUpdateControlBarMenu(CFrameWnd *this,CCmdUI *param_1)

{
  int iVar1;
  CControlBar *this_00;
  ulong uVar2;
  
  if (param_1 == (CCmdUI *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  this_00 = GetControlBar(this,*(uint *)(param_1 + 4));
  if (this_00 == (CControlBar *)0x0) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  else {
    iVar1 = *(int *)param_1;
    uVar2 = CWnd::GetExStyle((CWnd *)this_00);
    (**(code **)(iVar1 + 4))(uVar2 >> 0x1c & 1);
  }
  return;
}



//==================== OnBarCheck @ 0x00428082 ====================

/* Library Function - Single Match
    public: int __thiscall CFrameWnd::OnBarCheck(unsigned int)
   
   Library: Visual Studio 2008 Release */

int __thiscall CFrameWnd::OnBarCheck(CFrameWnd *this,uint param_1)

{
  CControlBar *this_00;
  ulong uVar1;
  int iVar2;
  
  this_00 = GetControlBar(this,param_1);
  if (this_00 != (CControlBar *)0x0) {
    iVar2 = 0;
    uVar1 = CWnd::GetExStyle((CWnd *)this_00);
    ShowControlBar(this,this_00,~(uVar1 >> 0x1c) & 1,iVar2);
  }
  return (uint)(this_00 != (CControlBar *)0x0);
}



//==================== OnUpdateKeyIndicator @ 0x004280C0 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnUpdateKeyIndicator(class CCmdUI *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CFrameWnd::OnUpdateKeyIndicator(CFrameWnd *this,CCmdUI *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 == (CCmdUI *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0xe701) {
    iVar3 = 0x14;
  }
  else if (iVar3 == 0xe702) {
    iVar3 = 0x90;
  }
  else if (iVar3 == 0xe703) {
    iVar3 = 0x91;
  }
  else {
    if (iVar3 != 0xe706) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return;
    }
    iVar3 = 0x15;
  }
  puVar1 = *(undefined4 **)param_1;
  uVar2 = GetKeyState(iVar3);
  (*(code *)*puVar1)(uVar2 & 1);
  return;
}



//==================== OnUpdateContextHelp @ 0x0042811D ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnUpdateContextHelp(class CCmdUI *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnUpdateContextHelp(CFrameWnd *this,CCmdUI *param_1)

{
  CWnd *pCVar1;
  
  if (param_1 == (CCmdUI *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  pCVar1 = AfxGetMainWnd();
  if (pCVar1 == (CWnd *)this) {
    (**(code **)(*(int *)param_1 + 4))(*(int *)(this + 0x68) != 0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  return;
}



//==================== Handler_00428EE3 @ 0x00428EE3 ====================

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void Handler_00428EE3(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  HWND hWnd;
  uint uVar1;
  LPCWSTR pWStack_218;
  wchar_t awStack_214 [262];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20c;
  uStack_8 = 0x428ef2;
  if ((param_2 == (undefined4 *)0x0) || (param_3 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&pWStack_218);
  hWnd = (HWND)param_2[1];
  uStack_8 = 0;
  if (((param_2[2] == -0x208) && ((*(byte *)(param_2 + 0x19) & 1) != 0)) ||
     ((param_2[2] == -0x212 && ((*(byte *)(param_2 + 0x2d) & 1) != 0)))) {
    hWnd = (HWND)GetDlgCtrlID(hWnd);
  }
  if (hWnd != (HWND)0x0) {
    uVar1 = FUN_00424f77((uint)hWnd,awStack_214,0x100);
    if (uVar1 == 0) {
      FUN_00401810((undefined4 *)(pWStack_218 + -8));
      goto LAB_00428ff9;
    }
    AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &pWStack_218,awStack_214,1,L'\n');
  }
  if (param_2[2] == -0x208) {
    WideCharToMultiByte(3,0,pWStack_218,-1,(LPSTR)(param_2 + 4),0x50,(LPCSTR)0x0,(LPBOOL)0x0);
  }
  else {
    ATL::Checked::tcsncpy_s((wchar_t *)(param_2 + 4),0x50,pWStack_218,0xffffffff);
  }
  *param_3 = 0;
  SetWindowPos((HWND)*param_2,(HWND)0x0,0,0,0,0,0x213);
  FUN_00401810((undefined4 *)(pWStack_218 + -8));
LAB_00428ff9:
  FUN_00447e7f();
  return;
}



//==================== OnFileNew @ 0x0042AA73 ====================

/* Library Function - Single Match
    protected: void __thiscall CWinApp::OnFileNew(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CWinApp::OnFileNew(CWinApp *this)

{
  if (*(int *)(this + 0x58) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042aa7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x58) + 0x34))();
    return;
  }
  return;
}



//==================== OnUpdateRecentFileMenu @ 0x0042E04F ====================

/* Library Function - Single Match
    protected: void __thiscall CWinApp::OnUpdateRecentFileMenu(class CCmdUI *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CWinApp::OnUpdateRecentFileMenu(CWinApp *this,CCmdUI *param_1)

{
  if (param_1 == (CCmdUI *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  if (*(int *)(this + 0x88) == 0) {
    (*(code *)**(undefined4 **)param_1)(0);
  }
  else {
    (**(code **)(**(int **)(this + 0x88) + 0xc))(param_1);
  }
  return;
}



//==================== Handler_0042E0BC @ 0x0042E0BC ====================

void Handler_0042E0BC(void)

{
  int in_ECX;
  
  SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x20) + 0x20),0x10,0,0);
  return;
}



//==================== Handler_0042E1B5 @ 0x0042E1B5 ====================

void Handler_0042E1B5(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x90))();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0042e1cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x7c))();
    return;
  }
  return;
}



//==================== Handler_0042E1D0 @ 0x0042E1D0 ====================

void Handler_0042E1D0(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0042e1d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x9c))();
  return;
}



//==================== Handler_0042F46A @ 0x0042F46A ====================

void Handler_0042F46A(void)

{
  int *piVar1;
  CNoTrackObject *pCVar2;
  CFrameWnd *this;
  CWnd *pCVar3;
  CWnd *in_ECX;
  undefined4 unaff_ESI;
  
  this = CWnd::GetParentFrame(in_ECX);
  if (this != (CFrameWnd *)0x0) {
    pCVar3 = (CWnd *)FUN_00426aa8((int)this);
    if (pCVar3 == in_ECX) {
      CFrameWnd::SetActiveView(this,(CView *)0x0,1);
    }
  }
  if (*(int **)(in_ECX + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x4c) + 4))(1,unaff_ESI);
  }
  piVar1 = *(int **)(in_ECX + 0x2c);
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
  }
  piVar1 = *(int **)(in_ECX + 0x28);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pCVar2 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_0047ee04,(_func_CNoTrackObject_ptr *)&LAB_0041b294)
  ;
  if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  (**(code **)(*(int *)in_ECX + 0x118))
            (*(undefined4 *)(pCVar2 + 0x5c),*(undefined4 *)(pCVar2 + 0x60),
             *(undefined4 *)(pCVar2 + 100),unaff_ESI);
  return;
}



//==================== OnUpdateSplitCmd @ 0x0042F818 ====================

/* Library Function - Single Match
    protected: void __thiscall CView::OnUpdateSplitCmd(class CCmdUI *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CView::OnUpdateSplitCmd(CView *this,CCmdUI *param_1)

{
  CSplitterWnd *pCVar1;
  undefined4 uVar2;
  
  if (param_1 == (CCmdUI *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  pCVar1 = GetParentSplitter((CWnd *)this,0);
  if ((pCVar1 == (CSplitterWnd *)0x0) || (*(int *)(pCVar1 + 0x98) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  (*(code *)**(undefined4 **)param_1)(uVar2);
  return;
}



//==================== Handler_0042F852 @ 0x0042F852 ====================

bool Handler_0042F852(void)

{
  CSplitterWnd *pCVar1;
  CWnd *in_ECX;
  
  pCVar1 = CView::GetParentSplitter(in_ECX,0);
  if (pCVar1 != (CSplitterWnd *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x17c))();
  }
  return pCVar1 != (CSplitterWnd *)0x0;
}



//==================== OnUpdateNextPaneMenu @ 0x0042F86E ====================

/* Library Function - Single Match
    protected: void __thiscall CView::OnUpdateNextPaneMenu(class CCmdUI *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall CView::OnUpdateNextPaneMenu(CView *this,CCmdUI *param_1)

{
  CSplitterWnd *pCVar1;
  int iVar2;
  undefined4 uVar3;
  
  pCVar1 = GetParentSplitter((CWnd *)this,0);
  if (pCVar1 != (CSplitterWnd *)0x0) {
    iVar2 = (**(code **)(*(int *)pCVar1 + 0x174))(*(int *)(param_1 + 4) == 0xe151);
    if (iVar2 != 0) {
      uVar3 = 1;
      goto LAB_0042f8a5;
    }
  }
  uVar3 = 0;
LAB_0042f8a5:
  (*(code *)**(undefined4 **)param_1)(uVar3);
  return;
}



//==================== OnNextPaneCmd @ 0x0042F8B1 ====================

/* Library Function - Single Match
    protected: int __thiscall CView::OnNextPaneCmd(unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CView::OnNextPaneCmd(CView *this,uint param_1)

{
  CSplitterWnd *pCVar1;
  
  pCVar1 = GetParentSplitter((CWnd *)this,0);
  if (pCVar1 != (CSplitterWnd *)0x0) {
    (**(code **)(*(int *)pCVar1 + 0x178))(param_1 == 0xe151);
  }
  return (uint)(pCVar1 != (CSplitterWnd *)0x0);
}



//==================== FUN_004353a0 @ 0x004353A0 ====================

void __fastcall FUN_004353a0(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}



//==================== Handler_004400D4 @ 0x004400D4 ====================

void Handler_004400D4(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x004400d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x158))();
  return;
}



