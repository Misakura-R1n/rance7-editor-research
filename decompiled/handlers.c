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



//==================== FUN_004053b0 @ 0x004053B0 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_004053b0(int param_1)

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
  uStack_10 = 0x4053c8;
  ExceptionList = &local_c;
  FUN_004056f0(local_1258,4);
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
    *(undefined4 *)(param_1 + 0x368) = uStack_938;
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



//==================== FUN_004062e0 @ 0x004062E0 ====================

void __fastcall FUN_004062e0(int *param_1)

{
  wchar_t *_Str;
  CStringData *pCVar1;
  CStringData *pCVar2;
  CStringData *pCVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  CStringData *pCVar11;
  CStringData *pCStack_1c;
  wchar_t *pwStack_18;
  int *local_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_0045ed68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar9 = 0;
  piVar10 = param_1 + 0x3e;
  while ((local_14 = param_1, piVar10[1] == 0 || (*piVar10 == 0))) {
    iVar9 = iVar9 + 1;
    piVar10 = piVar10 + 0x25;
    if (0xe < iVar9) {
LAB_0040632b:
      FID_conflict_MessageBoxW
                ((HWND)&DAT_0046a310,L"战国兰斯修改器",(LPCWSTR)0x40,
                 DAT_0047b94c ^ (uint)&stack0xffffffd4);
      ExceptionList = local_c;
      return;
    }
  }
  if (iVar9 != -1) {
    pvVar5 = (void *)param_1[param_1[0x249] * 0xf + iVar9 + 0x27a];
    piVar10 = (int *)((int)pvVar5 + -0x10);
    puVar6 = (undefined4 *)(**(code **)(**(int **)((int)pvVar5 + -0x10) + 0x10))();
    if ((*(int *)((int)pvVar5 + -4) < 0) || (puVar6 != (undefined4 *)*piVar10)) {
      piVar10 = (int *)(**(code **)*puVar6)(*(undefined4 *)((int)pvVar5 + -0xc),2);
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0040ab50();
      }
      piVar10[1] = *(int *)((int)pvVar5 + -0xc);
      _memcpy_s(piVar10 + 4,*(int *)((int)pvVar5 + -0xc) * 2 + 2,pvVar5,
                *(int *)((int)pvVar5 + -0xc) * 2 + 2);
    }
    else {
      LOCK();
      *(int *)((int)pvVar5 + -4) = *(int *)((int)pvVar5 + -4) + 1;
      UNLOCK();
    }
    _Str = (wchar_t *)(piVar10 + 4);
    iStack_4 = 0;
    iVar9 = piVar10[1];
    pwStack_18 = _Str;
    pwVar7 = _wcsrchr(_Str,L'\\');
    if (pwVar7 == (wchar_t *)0x0) {
      iVar8 = -1;
    }
    else {
      iVar8 = (int)pwVar7 - (int)_Str >> 1;
    }
    FUN_00406590(&pwStack_18,(CSimpleStringT<wchar_t,0> *)&pCStack_1c,(iVar9 - iVar8) + -3);
    pCVar11 = pCStack_1c;
    iStack_4._0_1_ = 1;
    if (0 < *(int *)(pCStack_1c + -0xc)) {
      _wcschr((wchar_t *)pCStack_1c,L'.');
    }
    puVar6 = (undefined4 *)
             ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
                       ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                        &pCStack_1c,(int)&iStack_10);
    iStack_4._0_1_ = 2;
    pvVar5 = (void *)*puVar6;
    pCVar1 = (CStringData *)((int)pvVar5 + -0x10);
    pCVar2 = pCVar11 + -0x10;
    if (pCVar1 != pCVar2) {
      pCVar3 = pCVar11 + -4;
      if ((*(int *)(pCVar11 + -4) < 0) || (*(int *)pCVar1 != *(int *)pCVar2)) {
        FUN_00401640(&pCStack_1c,pvVar5,*(int *)((int)pvVar5 + -0xc));
        pCVar11 = pCStack_1c;
      }
      else {
        pCStack_1c = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar1);
        LOCK();
        iVar9 = *(int *)pCVar3;
        *(int *)pCVar3 = *(int *)pCVar3 + -1;
        UNLOCK();
        if (iVar9 == 1 || iVar9 + -1 < 0) {
          (**(code **)(**(int **)pCVar2 + 4))(pCVar2);
        }
        pCStack_1c = pCStack_1c + 0x10;
        param_1 = local_14;
        pCVar11 = pCStack_1c;
      }
    }
    iStack_4._0_1_ = 1;
    piVar4 = (int *)(iStack_10 + -4);
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(**(int **)(iStack_10 + -0x10) + 4))((undefined4 *)(iStack_10 + -0x10));
    }
    iVar9 = FUN_00446845((wchar_t *)pCVar11);
    param_1[0x248] = iVar9;
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    pCVar1 = pCVar11 + -4;
    LOCK();
    iVar9 = *(int *)pCVar1;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    UNLOCK();
    if (iVar9 + -1 < 1) {
      (**(code **)(**(int **)(pCVar11 + -0x10) + 4))(pCVar11 + -0x10);
    }
    iStack_4 = 0xffffffff;
    piVar4 = piVar10 + 3;
    LOCK();
    iVar9 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar9 == 1 || iVar9 + -1 < 0) {
      (**(code **)(*(int *)*piVar10 + 4))(piVar10);
    }
    (**(code **)(*param_1 + 0x158))();
    ExceptionList = local_c;
    return;
  }
  goto LAB_0040632b;
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



//==================== FUN_00408890 @ 0x00408890 ====================

void __fastcall FUN_00408890(CWnd *param_1)

{
  FUN_00426aa8((int)param_1);
  FUN_00417c80();
  CWnd::Default(param_1);
  return;
}



//==================== FUN_004088b0 @ 0x004088B0 ====================

void __fastcall FUN_004088b0(CFrameWnd *param_1)

{
  KillTimer(*(HWND *)(param_1 + 0x20),*(UINT_PTR *)(param_1 + 0xe8));
  CFrameWnd::OnClose(param_1);
  return;
}



//==================== FUN_00409350 @ 0x00409350 ====================

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00409350(int param_1)

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
  uStack_10 = 0x409368;
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
    iVar1 = iStack_1260;
    puStack_125c = &stack0xffffed8c;
    pCVar4 = (CStringData *)(iStack_1260 + -0x10);
    pCVar3 = ATL::CSimpleStringT<wchar_t,0>::CloneData(pCVar4);
    FUN_00414010((LPCWSTR)(pCVar3 + 0x10));
    *(undefined4 *)(param_1 + 0xd4) = uStack_938;
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



//==================== Handler_0040D170 @ 0x0040D170 ====================

void Handler_0040D170(void)

{
  LRESULT LVar1;
  int *in_ECX;
  int iVar2;
  WPARAM *lParam;
  
  LVar1 = SendMessageW((HWND)in_ECX[0x25],400,0,0);
  in_ECX[0x96] = LVar1;
  if (100 < LVar1) {
    in_ECX[0x96] = 100;
  }
  lParam = (WPARAM *)(in_ECX + 0x98);
  SendMessageW((HWND)in_ECX[0x25],0x191,100,(LPARAM)lParam);
  iVar2 = 0;
  if (0 < in_ECX[0x96]) {
    do {
      FID_conflict_GetLBText(in_ECX + 0x1d,*lParam,(CSimpleStringT<wchar_t,0> *)(lParam + -0x66));
      iVar2 = iVar2 + 1;
      lParam = lParam + 1;
    } while (iVar2 < in_ECX[0x96]);
  }
                    /* WARNING: Could not recover jumptable at 0x0040d1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x158))();
  return;
}



//==================== FUN_0040f970 @ 0x0040F970 ====================

void __fastcall FUN_0040f970(CWnd *param_1)

{
  int iVar1;
  CDialog local_378 [856];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0045ef9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00404c90(local_378);
  local_4 = 0;
  local_20 = *(undefined4 *)(param_1 + 0x620);
  local_1c = *(undefined4 *)(param_1 + 0x624);
  local_18 = *(undefined4 *)(param_1 + 0x628);
  local_14 = *(undefined4 *)(param_1 + 0x62c);
  local_10 = *(undefined4 *)(param_1 + 0x630);
  iVar1 = FUN_0041bafa(local_378);
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x624) = local_1c;
    *(undefined4 *)(param_1 + 0x620) = local_20;
    *(undefined4 *)(param_1 + 0x630) = local_10;
    *(undefined4 *)(param_1 + 0x628) = local_18;
    *(undefined4 *)(param_1 + 0x62c) = local_14;
    CWnd::UpdateData(param_1,0);
  }
  local_4 = 0xffffffff;
  FUN_00404d20(local_378);
  ExceptionList = local_c;
  return;
}



//==================== FUN_00413e40 @ 0x00413E40 ====================

void __fastcall FUN_00413e40(CWnd *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CBrush *pCVar4;
  CGdiObject *pCVar5;
  int extraout_ECX;
  int iVar6;
  int iVar7;
  undefined4 extraout_EDX;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_9c [4];
  int local_98;
  tagRECT local_94;
  CWnd *local_84;
  int local_80;
  int local_7c;
  CPaintDC local_78 [4];
  HDC local_74;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0045e5c8;
  local_14 = ExceptionList;
  local_1c = DAT_0047b94c ^ (uint)auStack_9c;
  ExceptionList = &local_14;
  local_84 = param_1;
  CPaintDC::CPaintDC(local_78,param_1);
  local_c = 0;
  GetClientRect(*(HWND *)(param_1 + 0x20),&local_94);
  if (*(int *)(param_1 + 0x84) == 0) goto LAB_00413f75;
  local_7c = *(int *)(param_1 + 0x60);
  local_80 = *(int *)(param_1 + 100);
  iVar8 = local_94.right - local_94.left;
  iVar6 = extraout_ECX;
  if (local_7c < iVar8) {
    iVar6 = local_94.bottom - local_94.top;
    if (iVar6 <= local_80) goto LAB_00413efb;
    iVar7 = (iVar8 - local_7c) / 2;
    iVar1 = (iVar6 - local_80) / 2;
    iVar3 = local_7c;
    iVar2 = local_80;
    local_98 = iVar6;
  }
  else {
LAB_00413efb:
    if (local_80 < local_7c) {
      local_98 = iVar8;
      uVar9 = FUN_0044a4b0(iVar6,extraout_EDX);
      iVar2 = (int)uVar9;
      iVar7 = 0;
      iVar1 = ((local_94.bottom - local_94.top) - iVar2) / 2;
      iVar3 = iVar8;
    }
    else {
      iVar2 = local_94.bottom - local_94.top;
      local_98 = iVar2;
      uVar9 = FUN_0044a4b0(iVar6,extraout_EDX);
      iVar3 = (int)uVar9;
      iVar7 = (iVar8 - iVar3) / 2;
      iVar1 = 0;
    }
  }
  FUN_004149d0(local_74,iVar7,iVar1,iVar3,iVar2,*(RGBQUAD *)(local_84 + 0x60));
  param_1 = local_84;
LAB_00413f75:
  if (*(int *)(param_1 + 0x88) != 0) {
    pCVar4 = CDC::SelectObject((CDC *)local_78,(CBrush *)(param_1 + 0x8c));
    pCVar5 = CDC::SelectStockObject((CDC *)local_78,5);
    Rectangle(local_74,local_94.left,local_94.top,local_94.right,local_94.bottom);
    CDC::SelectObject((CDC *)local_78,pCVar4);
    CDC::SelectObject((CDC *)local_78,(CBrush *)pCVar5);
  }
  local_c = 0xffffffff;
  CPaintDC::~CPaintDC(local_78);
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_9c);
  return;
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



//==================== Handler_004154E0 @ 0x004154E0 ====================

int Handler_004154E0(int *param_1)

{
  int iVar1;
  void *in_ECX;
  
  param_1[8] = param_1[8] & 0xfffffffdU | 5;
  iVar1 = OnCreate(in_ECX,param_1);
  return (iVar1 != -1) - 1;
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



//==================== Handler_00417B90 @ 0x00417B90 ====================

void Handler_00417B90(int *param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xb0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00417baa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 4))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00417bb4. Too many branches */
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



//==================== Handler_0041B3CC @ 0x0041B3CC ====================

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void Handler_0041B3CC(void)

{
  int iVar1;
  CWnd *in_ECX;
  CPaintDC aCStack_68 [96];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  uStack_8 = 0x41b3d8;
  CPaintDC::CPaintDC(aCStack_68,in_ECX);
  uStack_8 = 0;
  iVar1 = FUN_00422c2e((int)in_ECX);
  if (iVar1 == 0) {
    CWnd::Default(in_ECX);
  }
  uStack_8 = 0xffffffff;
  CPaintDC::~CPaintDC(aCStack_68);
  FUN_00447e7f();
  return;
}



//==================== Handler_0041B4AF @ 0x0041B4AF ====================

int Handler_0041B4AF(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x54) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x54) + 0x20000;
  }
  return iVar1;
}



//==================== Handler_0041B4C8 @ 0x0041B4C8 ====================

void Handler_0041B4C8(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0041b4ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x15c))();
  return;
}



//==================== HandleSetFont @ 0x0041B6EF ====================

/* Library Function - Single Match
    protected: long __thiscall CDialog::HandleSetFont(unsigned int,long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

long __thiscall CDialog::HandleSetFont(CDialog *this,uint param_1,long param_2)

{
  CGdiObject *pCVar1;
  long lVar2;
  
  pCVar1 = CGdiObject::FromHandle((void *)param_1);
  (**(code **)(*(int *)this + 0x154))(pCVar1);
  lVar2 = CWnd::Default((CWnd *)this);
  return lVar2;
}



//==================== Handler_0041B716 @ 0x0041B716 ====================

long Handler_0041B716(void)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  long lVar4;
  CWnd *this;
  CDialog *in_ECX;
  BOOL unaff_EDI;
  
  (**(code **)(*(int *)in_ECX + 0x160))();
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar2 + 0x3c);
  if ((piVar1 != (int *)0x0) && (*(int *)(in_ECX + 0x70) != 0)) {
    if (*(int *)(in_ECX + 100) == 0) {
      iVar3 = (**(code **)(*piVar1 + 0x24))();
    }
    else {
      iVar3 = (**(code **)(*piVar1 + 0x20))();
    }
    if (iVar3 == 0) {
      CDialog::EndDialog(in_ECX,-1);
      return 0;
    }
  }
  lVar4 = CWnd::Default((CWnd *)in_ECX);
  if ((lVar4 != 0) && ((*(uint *)(in_ECX + 0x3c) & 0x100) != 0)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x4c) + 0x70) = 0;
    this = (CWnd *)FID_conflict_GetNextDlgGroupItem((HWND)0x0,(HWND)0x0,unaff_EDI);
    if (this != (CWnd *)0x0) {
      CWnd::SetFocus(this);
      lVar4 = 0;
    }
  }
  return lVar4;
}



//==================== OnCommandHelp @ 0x0041B8F6 ====================

/* Library Function - Single Match
    protected: long __thiscall CDialog::OnCommandHelp(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CDialog::OnCommandHelp(CDialog *this,uint param_1,long param_2)

{
  AFX_MODULE_STATE *pAVar1;
  long lVar2;
  
  if ((param_2 == 0) &&
     ((*(int *)(this + 0x54) == 0 || (param_2 = *(int *)(this + 0x54) + 0x20000, param_2 == 0)))) {
    lVar2 = 0;
  }
  else {
    pAVar1 = AfxGetModuleState();
    if (*(int **)(pAVar1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(pAVar1 + 4) + 0xac))(param_2,1);
    }
    lVar2 = 1;
  }
  return lVar2;
}



//==================== Handler_0042683C @ 0x0042683C ====================

int Handler_0042683C(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0xa4) + 0x20000;
  }
  return iVar1;
}



//==================== OnNcActivate @ 0x00426A4F ====================

/* Library Function - Single Match
    protected: int __thiscall CFrameWnd::OnNcActivate(int)
   
   Library: Visual Studio 2008 Release */

int __thiscall CFrameWnd::OnNcActivate(CFrameWnd *this,int param_1)

{
  int iVar1;
  
  if (((byte)this[0x3c] & 0x20) != 0) {
    param_1 = 1;
  }
  iVar1 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x118))(0x86,param_1,0);
  return iVar1;
}



//==================== FUN_00426a89 @ 0x00426A89 ====================

undefined4 __thiscall FUN_00426a89(void *this,HWND param_1,LPARAM param_2)

{
  PostMessageW(param_1,0x3e1,*(WPARAM *)((int)this + 0x20),param_2);
  return 0;
}



//==================== OnSetFocus @ 0x00426B0D ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSetFocus(class CWnd *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnSetFocus(CFrameWnd *this,CWnd *param_1)

{
  if (*(CWnd **)(this + 0xb0) != (CWnd *)0x0) {
    CWnd::SetFocus(*(CWnd **)(this + 0xb0));
    return;
  }
  CWnd::OnSetFocus((CWnd *)this,param_1);
  return;
}



//==================== OnInitMenu @ 0x00426B2D ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnInitMenu(class CMenu *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnInitMenu(CFrameWnd *this,CMenu *param_1)

{
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(**(int **)(this + 0x80) + 0x78))(param_1);
  }
  CWnd::Default((CWnd *)this);
  return;
}



//==================== Handler_00426B58 @ 0x00426B58 ====================

int Handler_00426B58(void)

{
  int in_ECX;
  
  return in_ECX + 100;
}



//==================== Handler_00426F17 @ 0x00426F17 ====================

void Handler_00426F17(void)

{
  CWnd *in_ECX;
  
  CWnd::Default(in_ECX);
  return;
}



//==================== OnPaletteChanged @ 0x00427047 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnPaletteChanged(class CWnd *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnPaletteChanged(CFrameWnd *this,CWnd *param_1)

{
  CWnd::Default((CWnd *)this);
  if (*(int *)(this + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00427067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(this + 0x80) + 0x6c))();
    return;
  }
  return;
}



//==================== Handler_0042706E @ 0x0042706E ====================

undefined4 Handler_0042706E(void)

{
  CNoTrackObject *pCVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_ESI;
  
  if (in_ECX[0x20] != 0) {
    iVar3 = (**(code **)(*(int *)in_ECX[0x20] + 0x70))();
    if (iVar3 != 0) {
      return 1;
    }
  }
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_0047ee04,(_func_CNoTrackObject_ptr *)&LAB_0041b294)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  uVar2 = (**(code **)(*in_ECX + 0x118))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100),unaff_ESI);
  return uVar2;
}



//==================== Handler_0042710F @ 0x0042710F ====================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long Handler_0042710F(void)

{
  CFrameWnd *pCVar1;
  long lVar2;
  CWnd *in_ECX;
  
  pCVar1 = CWnd::GetTopLevelFrame(in_ECX);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  if (*(int *)(pCVar1 + 0x68) == 0) {
    lVar2 = CWnd::Default(in_ECX);
  }
  else {
    SetCursor(_DAT_0047ee54);
    lVar2 = 1;
  }
  return lVar2;
}



//==================== OnCommandHelp @ 0x00427144 ====================

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnCommandHelp(unsigned int,long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall CFrameWnd::OnCommandHelp(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  
  if (param_2 == 0) {
    iVar1 = IsTracking(this);
    if (iVar1 == 0) {
      param_2 = *(int *)(this + 0xa4) + 0x20000;
    }
    else {
      param_2 = *(int *)(this + 0xa8) + 0x10000;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  pAVar2 = AfxGetModuleState();
  if (*(int **)(pAVar2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(pAVar2 + 4) + 0xac))(param_2,1);
  }
  return 1;
}



//==================== OnClose @ 0x00427527 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnClose(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnClose(CFrameWnd *this)

{
  CWinApp *this_00;
  int *piVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  CWnd *this_01;
  CFrameWnd *pCVar4;
  CFrameWnd *local_8;
  
  local_8 = this;
  if (*(code **)(this + 0xb4) != (code *)0x0) {
    (**(code **)(this + 0xb4))(this);
  }
  piVar1 = (int *)(**(code **)(*(int *)this + 0x144))();
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x8c))(this), iVar2 == 0)) {
    return;
  }
  pAVar3 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar3 + 4);
  if ((this_00 != (CWinApp *)0x0) && (*(CFrameWnd **)(this_00 + 0x20) == this)) {
    if ((piVar1 == (int *)0x0) && (iVar2 = (**(code **)(*(int *)this_00 + 0x94))(), iVar2 == 0)) {
      return;
    }
    CWinApp::HideApplication(this_00);
    CWinApp::CloseAllDocuments(this_00,0);
    iVar2 = AfxOleCanExitApp();
    if (iVar2 == 0) {
      AfxOleSetUserCtrl(0);
      return;
    }
    pAVar3 = AfxGetModuleState();
    if ((pAVar3[0x14] == (AFX_MODULE_STATE)0x0) && (*(int *)(this_00 + 0x20) == 0)) {
      AfxPostQuitMessage(0);
      return;
    }
  }
  if ((piVar1 != (int *)0x0) && (piVar1[0x13] != 0)) {
    local_8 = (CFrameWnd *)(**(code **)(*piVar1 + 0x60))();
    do {
      if (local_8 == (CFrameWnd *)0x0) {
        (**(code **)(*piVar1 + 0x7c))();
        return;
      }
      this_01 = (CWnd *)(**(code **)(*piVar1 + 100))(&local_8);
      if (this_01 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0041b278();
      }
      pCVar4 = CWnd::GetParentFrame(this_01);
    } while (pCVar4 == this);
    (**(code **)(*piVar1 + 0x94))(this);
  }
  (**(code **)(*(int *)this + 0x60))();
  return;
}



//==================== Handler_004276BB @ 0x004276BB ====================

void Handler_004276BB(void)

{
  int iVar1;
  tagMSG *ptVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xb0);
  if (iVar1 != 0) {
    ptVar2 = CWnd::GetCurrentMessage();
    SendMessageW(*(HWND *)(iVar1 + 0x20),0x114,ptVar2->wParam,ptVar2->lParam);
  }
  return;
}



//==================== Handler_004276E5 @ 0x004276E5 ====================

void Handler_004276E5(void)

{
  int iVar1;
  tagMSG *ptVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xb0);
  if (iVar1 != 0) {
    ptVar2 = CWnd::GetCurrentMessage();
    SendMessageW(*(HWND *)(iVar1 + 0x20),0x115,ptVar2->wParam,ptVar2->lParam);
  }
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



//==================== OnActivate @ 0x004277A5 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnActivate(unsigned int,class CWnd *,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this,uint param_1,CWnd *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  CFrameWnd *pCVar3;
  CFrameWnd *pCVar4;
  LRESULT LVar5;
  int iVar6;
  int *piVar7;
  
  CWnd::Default((CWnd *)this);
  if ((param_1 == 0) && (((byte)this[0xd0] & 1) == 0)) {
    (**(code **)(*(int *)this + 0x160))(2);
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  pCVar3 = this;
  if ((uVar2 & 0x40000000) == 0) {
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  if (pCVar3 != (CFrameWnd *)0x0) {
    if (param_1 != 0) {
      param_2 = (CWnd *)this;
    }
    if ((param_2 == (CWnd *)0x0) ||
       ((pCVar3 != (CFrameWnd *)param_2 &&
        ((pCVar4 = CWnd::GetTopLevelFrame(param_2), pCVar3 != pCVar4 ||
         (LVar5 = SendMessageW(*(HWND *)(param_2 + 0x20),0x36d,0x40,0), LVar5 == 0)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    *(uint *)(pCVar3 + 0x3c) = *(uint *)(pCVar3 + 0x3c) & 0xffffffdf;
    if (bVar1) {
      *(uint *)(pCVar3 + 0x3c) = *(uint *)(pCVar3 + 0x3c) | 0x20;
    }
    NotifyFloatingWindows(this,(uint)!bVar1 * 4 + 4);
    piVar7 = *(int **)(this + 0xb0);
    if (piVar7 == (int *)0x0) {
      iVar6 = (**(code **)(*(int *)this + 0x148))();
      piVar7 = *(int **)(iVar6 + 0xb0);
      if (piVar7 == (int *)0x0) {
        return;
      }
    }
    if ((param_1 != 0) && (param_3 == 0)) {
      (**(code **)(*piVar7 + 0x168))(1,piVar7,piVar7);
    }
    (**(code **)(*piVar7 + 0x16c))(param_1,this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0041b278();
}



//==================== OnSysCommand @ 0x004278A2 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSysCommand(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnSysCommand(CFrameWnd *this,uint param_1,long param_2)

{
  CFrameWnd *pCVar1;
  int iVar2;
  LRESULT LVar3;
  uint uVar4;
  
  pCVar1 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar1 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  uVar4 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x68) == 0) {
LAB_004278eb:
    CWnd::Default((CWnd *)this);
  }
  else {
    if (uVar4 < 0xf041) {
      if (((uVar4 != 0xf040) && (uVar4 != 0xf000)) && (uVar4 != 0xf010)) {
        iVar2 = uVar4 - 0xf020;
LAB_004278e4:
        if ((iVar2 != 0) && (iVar2 != 0x10)) goto LAB_004278eb;
      }
    }
    else if ((uVar4 != 0xf050) && (uVar4 != 0xf060)) {
      iVar2 = uVar4 - 0xf120;
      goto LAB_004278e4;
    }
    LVar3 = SendMessageW(*(HWND *)(this + 0x20),0x365,0,(uVar4 - 0xf000 >> 4) + 0x1ef00);
    if (LVar3 == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
    }
  }
  return;
}



//==================== OnDropFiles @ 0x00427945 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnDropFiles(struct HDROP__ *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnDropFiles(CFrameWnd *this,HDROP__ *param_1)

{
  int *piVar1;
  HWND pHVar2;
  UINT UVar3;
  AFX_MODULE_STATE *pAVar4;
  UINT local_214;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0047b94c ^ (uint)&stack0xfffffffc;
  pHVar2 = SetActiveWindow(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar2);
  UVar3 = DragQueryFileW(param_1,0xffffffff,(LPWSTR)0x0,0);
  pAVar4 = AfxGetModuleState();
  local_214 = 0;
  piVar1 = *(int **)(pAVar4 + 4);
  if (UVar3 != 0) {
    do {
      DragQueryFileW(param_1,local_214,local_210,0x104);
      (**(code **)(*piVar1 + 0x88))(local_210);
      local_214 = local_214 + 1;
    } while (local_214 < UVar3);
  }
  DragFinish(param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}



//==================== Handler_004279F0 @ 0x004279F0 ====================

undefined4 Handler_004279F0(void)

{
  int *piVar1;
  AFX_MODULE_STATE *pAVar2;
  undefined4 uVar3;
  int in_ECX;
  
  pAVar2 = AfxGetModuleState();
  piVar1 = *(int **)(pAVar2 + 4);
  if ((piVar1 != (int *)0x0) && (piVar1[8] == in_ECX)) {
                    /* WARNING: Could not recover jumptable at 0x00427a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar1 + 0x94))();
    return uVar3;
  }
  return 1;
}



//==================== OnEndSession @ 0x00427A16 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEndSession(int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnEndSession(CFrameWnd *this,int param_1)

{
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar1;
  
  if (param_1 != 0) {
    pAVar1 = AfxGetModuleState();
    this_00 = *(CWinApp **)(pAVar1 + 4);
    if ((this_00 != (CWinApp *)0x0) && (*(CFrameWnd **)(this_00 + 0x20) == this)) {
      AfxOleSetUserCtrl(1);
      CWinApp::CloseAllDocuments(this_00,1);
      (**(code **)(*(int *)this_00 + 0x68))();
    }
  }
  return;
}



//==================== OnDDEInitiate @ 0x00427A53 ====================

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnDDEInitiate(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall CFrameWnd::OnDDEInitiate(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  long lVar3;
  short sVar4;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_0047b94c ^ (uint)&stack0xfffffffc;
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  if ((((iVar1 != 0) && ((ATOM)param_2 != 0)) &&
      (sVar4 = (short)((uint)param_2 >> 0x10), sVar4 != 0)) &&
     (((ATOM)param_2 == *(ATOM *)(iVar1 + 0x90) && (sVar4 == *(short *)(iVar1 + 0x92))))) {
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x90),local_210,0x103);
    GlobalAddAtomW(local_210);
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x92),local_210,0x103);
    GlobalAddAtomW(local_210);
    SendMessageW((HWND)param_1,0x3e4,*(WPARAM *)(this + 0x20),*(LPARAM *)(iVar1 + 0x90));
  }
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}



//==================== OnInitMenuPopup @ 0x00427C54 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnInitMenuPopup(class CMenu *,unsigned int,int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnInitMenuPopup(CFrameWnd *this,CMenu *param_1,uint param_2,int param_3)

{
  int iVar1;
  _AFX_THREAD_STATE *p_Var2;
  HMENU pHVar3;
  CWnd *pCVar4;
  HMENU pHVar5;
  uint uVar6;
  uint uVar7;
  int nPos;
  CCmdUI local_30 [4];
  uint local_2c;
  uint local_28;
  CMenu *local_24;
  int local_20;
  uint local_10;
  CMenu *local_c;
  CFrameWnd *local_8;
  
  local_8 = this;
  AfxCancelModes(*(HWND__ **)(this + 0x20));
  if ((param_3 == 0) &&
     ((*(int *)(this + 0x80) == 0 ||
      (iVar1 = (**(code **)(**(int **)(this + 0x80) + 0x74))(param_1,param_2,0), iVar1 == 0)))) {
    if (param_1 == (CMenu *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0041b278();
    }
    CCmdUI::CCmdUI(local_30);
    local_24 = param_1;
    p_Var2 = AfxGetThreadState();
    if (*(int *)(p_Var2 + 0x78) == *(int *)(param_1 + 4)) {
      local_c = param_1;
    }
    else {
      if (*(int *)(this + 0xd4) == 1) {
        pHVar3 = ::GetMenu(*(HWND *)(this + 0x20));
      }
      else {
        pHVar3 = *(HMENU *)(this + 0xd8);
      }
      if ((((pHVar3 != (HMENU)0x0) &&
           (pCVar4 = CWnd::GetTopLevelParent((CWnd *)this), pCVar4 != (CWnd *)0x0)) &&
          (iVar1 = (**(code **)(*(int *)pCVar4 + 0x6c))(), iVar1 != 0)) &&
         (pHVar3 = *(HMENU *)(iVar1 + 4), this = local_8, pHVar3 != (HMENU)0x0)) {
        iVar1 = GetMenuItemCount(pHVar3);
        nPos = 0;
        this = local_8;
        if (0 < iVar1) {
          do {
            pHVar5 = GetSubMenu(pHVar3,nPos);
            if (pHVar5 == *(HMENU *)(param_1 + 4)) {
              local_c = CMenu::FromHandle(pHVar3);
              this = local_8;
              break;
            }
            nPos = nPos + 1;
            this = local_8;
          } while (nPos < iVar1);
        }
      }
    }
    local_10 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_28 = 0;
    if (local_10 != 0) {
      do {
        local_2c = CMenu::GetMenuItemID(param_1,local_28);
        uVar6 = local_10;
        if (local_2c != 0) {
          if (local_2c == 0xffffffff) {
            local_20 = FUN_00418b20(param_1,local_28);
            uVar6 = local_10;
            if (((local_20 == 0) ||
                (local_2c = GetMenuItemID(*(HMENU *)(local_20 + 4),0), uVar6 = local_10,
                local_2c == 0)) || (local_2c == 0xffffffff)) goto LAB_00427ddf;
            iVar1 = 0;
          }
          else {
            local_20 = 0;
            if ((*(int *)(this + 0x54) == 0) || (0xefff < local_2c)) {
              iVar1 = 0;
            }
            else {
              iVar1 = 1;
            }
          }
          CCmdUI::DoUpdate(local_30,(CCmdTarget *)this,iVar1);
          uVar6 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
          this = local_8;
          if (uVar6 < local_10) {
            local_28 = local_28 + (uVar6 - local_10);
            while ((this = local_8, local_28 < uVar6 &&
                   (uVar7 = CMenu::GetMenuItemID(param_1,local_28), this = local_8,
                   uVar7 == local_2c))) {
              local_28 = local_28 + 1;
            }
          }
        }
LAB_00427ddf:
        local_10 = uVar6;
        local_28 = local_28 + 1;
      } while (local_28 < local_10);
    }
  }
  return;
}



//==================== OnMenuSelect @ 0x00427DF5 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnMenuSelect(unsigned int,unsigned int,struct HMENU__ *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnMenuSelect(CFrameWnd *this,uint param_1,uint param_2,HMENU__ *param_3)

{
  SHORT SVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  
  pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
  if (pCVar2 == (CFrameWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  if ((*(int **)(this + 0x80) != (int *)0x0) &&
     (iVar3 = (**(code **)(**(int **)(this + 0x80) + 0x7c))(param_1,param_2,param_3), iVar3 != 0)) {
    return;
  }
  if (param_2 == 0xffff) {
    *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffbf;
    if (*(int *)(pCVar2 + 0x68) == 0) {
      *(undefined4 *)(this + 0xa8) = 0xe001;
    }
    else {
      *(undefined4 *)(this + 0xa8) = 0xe002;
    }
    SendMessageW(*(HWND *)(this + 0x20),0x362,*(WPARAM *)(this + 0xa8),0);
    iVar3 = (**(code **)(*(int *)this + 0x16c))();
    if (iVar3 != 0) {
      UpdateWindow(*(HWND *)(iVar3 + 0x20));
    }
    if (((param_3 == (HMENU__ *)0x0) && (((byte)this[0xd0] & 1) == 0)) &&
       ((SVar1 = GetKeyState(0x79), -1 < SVar1 &&
        ((SVar1 = GetKeyState(0x12), -1 < SVar1 && (*(int *)(this + 0xe0) == 0)))))) {
      (**(code **)(*(int *)this + 0x160))(2);
    }
    goto LAB_00427f60;
  }
  if (((*(int *)(this + 0xdc) != 0) && (*(int *)(this + 0xdc) = 0, (param_2 & 0x2000) != 0)) &&
     (((byte)this[0xd0] & 1) == 0)) {
    (**(code **)(*(int *)this + 0x160))(2);
  }
  if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
    *(undefined4 *)(this + 0xa8) = 0;
  }
  else {
    if (param_1 - 0xf000 < 0x1f0) {
      param_1 = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    else if (0xfeff < param_1) {
      *(undefined4 *)(this + 0xa8) = 0xef1f;
      goto LAB_00427f5c;
    }
    *(uint *)(this + 0xa8) = param_1;
  }
LAB_00427f5c:
  *(uint *)(pCVar2 + 0x3c) = *(uint *)(pCVar2 + 0x3c) | 0x40;
LAB_00427f60:
  if (*(int *)(this + 0xa8) != *(int *)(this + 0xac)) {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)0x0) {
      PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
    }
  }
  return;
}



//==================== OnPopMessageString @ 0x00427F9A ====================

/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnPopMessageString(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CFrameWnd::OnPopMessageString(CFrameWnd *this,uint param_1,long param_2)

{
  long lVar1;
  
  if (((byte)this[0x3c] & 0x40) == 0) {
    lVar1 = SendMessageW(*(HWND *)(this + 0x20),0x362,param_1,param_2);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
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



//==================== Handler_004283BC @ 0x004283BC ====================

void Handler_004283BC(void)

{
  CFrameWnd *in_ECX;
  
  if ((*(uint *)(in_ECX + 0xe4) & 1) != 0) {
    *(uint *)(in_ECX + 0xe4) = *(uint *)(in_ECX + 0xe4) & 0xfffffffe;
    (**(code **)(*(int *)in_ECX + 0x17c))(*(undefined4 *)(in_ECX + 0xc0));
  }
  if (((byte)in_ECX[0xe4] & 2) != 0) {
    (**(code **)(*(int *)in_ECX + 0x178))(1);
  }
  if ((*(uint *)(in_ECX + 0xe4) & 8) != 0) {
    (**(code **)(*(int *)in_ECX + 0x150))(*(uint *)(in_ECX + 0xe4) & 4);
    UpdateWindow(*(HWND *)(in_ECX + 0x20));
  }
  if (*(uint *)(in_ECX + 0xa8) != *(uint *)(in_ECX + 0xac)) {
    CFrameWnd::SetMessageText(in_ECX,*(uint *)(in_ECX + 0xa8));
  }
  *(undefined4 *)(in_ECX + 0xe4) = 0;
  return;
}



//==================== OnSize @ 0x00428591 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnSize(unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release */

void __thiscall CFrameWnd::OnSize(CFrameWnd *this,uint param_1,int param_2,int param_3)

{
  CWnd::Default((CWnd *)this);
  if (param_1 != 1) {
    (**(code **)(*(int *)this + 0x150))(1);
  }
  return;
}



//==================== Handler_004285B5 @ 0x004285B5 ====================

long Handler_004285B5(void)

{
  long lVar1;
  CWnd *in_ECX;
  
  if (*(int *)(in_ECX + 0xb0) == 0) {
    lVar1 = CWnd::Default(in_ECX);
  }
  else {
    lVar1 = 1;
  }
  return lVar1;
}



//==================== Handler_00428642 @ 0x00428642 ====================

void Handler_00428642(void)

{
  CWnd *in_ECX;
  
  if ((*(int *)(in_ECX + 0xdc) != 0) && (*(int *)(in_ECX + 0xdc) = 0, ((byte)in_ECX[0xd0] & 1) == 0)
     ) {
    (**(code **)(*(int *)in_ECX + 0x160))(2);
  }
  CWnd::Default(in_ECX);
  return;
}



//==================== OnEnable @ 0x00428B02 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnable(int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnEnable(CFrameWnd *this,int param_1)

{
  int iVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  DWORD DVar4;
  
  iVar1 = param_1;
  if ((param_1 == 0) || (((byte)this[0x3c] & 4) == 0)) {
    pHVar2 = GetParent(*(HWND *)(this + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    if (pCVar3 != (CWnd *)0x0) {
      param_1 = 0;
      GetWindowThreadProcessId(*(HWND *)(pCVar3 + 0x20),(LPDWORD)&param_1);
      DVar4 = GetCurrentProcessId();
      if (DVar4 == param_1) {
        return;
      }
    }
    if (iVar1 == 0) {
      if (*(int *)(this + 0xb8) == 0) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x80;
        (**(code **)(*(int *)this + 0x100))();
      }
    }
    else {
      if ((char)*(uint *)(this + 0x3c) < '\0') {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffff7f;
        (**(code **)(*(int *)this + 0x104))();
        param_1 = *(int *)(this + 0x20);
        pHVar2 = GetActiveWindow();
        if (pHVar2 == (HWND)param_1) {
          SendMessageW((HWND)param_1,6,1,0);
        }
      }
      if (((byte)this[0x3c] & 0x20) != 0) {
        SendMessageW(*(HWND *)(this + 0x20),0x86,1,0);
      }
    }
    NotifyFloatingWindows(this,(-(uint)(iVar1 != 0) & 0xfffffff0) + 0x20);
  }
  else {
    CWnd::EnableWindow((CWnd *)this,0);
    SetFocus((HWND)0x0);
  }
  return;
}



//==================== OnCreate @ 0x00428BE7 ====================

/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CFrameWnd::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CFrameWnd::OnCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall OnCreate(void *this,undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  OnCreateHelper(this,param_1,*param_1);
  return;
}



//==================== OnEnterIdle @ 0x00428C04 ====================

/* Library Function - Single Match
    protected: void __thiscall CFrameWnd::OnEnterIdle(unsigned int,class CWnd *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CFrameWnd::OnEnterIdle(CFrameWnd *this,uint param_1,CWnd *param_2)

{
  CWnd::OnEnterIdle((CWnd *)this,param_1,param_2);
  if ((param_1 == 2) && (*(uint *)(this + 0xa8) != *(uint *)(this + 0xac))) {
    SetMessageText(this,*(uint *)(this + 0xa8));
  }
  return;
}



//==================== Handler_00428D1C @ 0x00428D1C ====================

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int Handler_00428D1C(int param_1,HWND param_2)

{
  int iVar1;
  CWnd *this;
  CFrameWnd *pCVar2;
  int *in_ECX;
  LPCWSTR in_stack_ffffffd4;
  HWND apHStack_14 [3];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  uStack_8 = 0x428d28;
  iVar1 = in_ECX[0x2b];
  in_ECX[0xf] = in_ECX[0xf] & 0xffffffbf;
  this = (CWnd *)(**(code **)(*in_ECX + 0x16c))();
  if (this != (CWnd *)0x0) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
    CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)apHStack_14);
    uStack_8 = 0;
    if ((param_2 == (HWND)0x0) && (param_2 = (HWND)0x0, param_1 != 0)) {
      if ((param_1 == 0xef06) && (in_ECX[0x2d] != 0)) {
        param_1 = 0xf005;
      }
      (**(code **)(*in_ECX + 0x14c))(param_1,apHStack_14);
      param_2 = apHStack_14[0];
    }
    FID_conflict_SetWindowTextW(param_2,in_stack_ffffffd4);
    pCVar2 = CWnd::GetParentFrame(this);
    if (pCVar2 != (CFrameWnd *)0x0) {
      *(int *)(pCVar2 + 0xac) = param_1;
      *(int *)(pCVar2 + 0xa8) = param_1;
    }
    FUN_00401810(apHStack_14[0] + -4);
  }
  in_ECX[0x2b] = param_1;
  in_ECX[0x2a] = param_1;
  return iVar1;
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



//==================== Handler_004290DD @ 0x004290DD ====================

void Handler_004290DD(void)

{
  int *piVar1;
  HMENU hMenu;
  int iVar2;
  CNoTrackObject *pCVar3;
  HMENU pHVar4;
  AFX_MODULE_STATE *pAVar5;
  int *in_ECX;
  undefined4 unaff_ESI;
  
  func_0x00428dd4();
  if (in_ECX[0x17] != 0) {
    hMenu = (HMENU)in_ECX[0x17];
    pHVar4 = GetMenu((HWND)in_ECX[8]);
    if (pHVar4 != hMenu) {
      SetMenu((HWND)in_ECX[8],hMenu);
    }
  }
  pAVar5 = AfxGetModuleState();
  iVar2 = *(int *)(pAVar5 + 4);
  if (((iVar2 != 0) && (*(int **)(iVar2 + 0x20) == in_ECX)) && (*(int *)(iVar2 + 0x6c) == 0)) {
    WinHelpW((HWND)in_ECX[8],(LPCWSTR)0x0,2,0);
  }
  if ((int *)in_ECX[0x13] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x13] + 4))(1,unaff_ESI);
  }
  piVar1 = (int *)in_ECX[0xb];
  in_ECX[0x13] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,0,0);
  }
  piVar1 = (int *)in_ECX[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  pCVar3 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_0047ee04,(_func_CNoTrackObject_ptr *)&LAB_0041b294)
  ;
  if (pCVar3 != (CNoTrackObject *)0x0) {
    (**(code **)(*in_ECX + 0x118))
              (*(undefined4 *)(pCVar3 + 0x5c),*(undefined4 *)(pCVar3 + 0x60),
               *(undefined4 *)(pCVar3 + 100),unaff_ESI);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0041b278();
}



//==================== Handler_00429523 @ 0x00429523 ====================

/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 Handler_00429523(HWND param_1,LPARAM param_2)

{
  short *psVar1;
  LPARAM lParam;
  int iVar2;
  wchar_t *pwVar3;
  AFX_MODULE_STATE *pAVar4;
  undefined1 auStack_24 [4];
  CWnd *pCStack_20;
  HGLOBAL pvStack_1c;
  int aiStack_18 [4];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  uStack_8 = 0x42952f;
  func_0x0045bb78(1000,param_2,auStack_24,&pvStack_1c);
  psVar1 = GlobalLock(pvStack_1c);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)aiStack_18);
  uStack_8 = 1;
  FUN_00401710(aiStack_18,psVar1);
  GlobalUnlock(pvStack_1c);
  uStack_8 = 0;
  lParam = ReuseDDElParam(param_2,1000,0x3e4,0x8000,(UINT_PTR)pvStack_1c);
  PostMessageW(param_1,0x3e4,*(WPARAM *)(pCStack_20 + 0x20),lParam);
  iVar2 = CWnd::IsWindowEnabled(pCStack_20);
  if (iVar2 != 0) {
    pwVar3 = ATL::CSimpleStringT<wchar_t,0>::GetBuffer((CSimpleStringT<wchar_t,0> *)aiStack_18);
    pAVar4 = AfxGetModuleState();
    (**(code **)(**(int **)(pAVar4 + 4) + 0xa0))(pwVar3);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)aiStack_18,-1);
  }
  FUN_00401810((undefined4 *)(aiStack_18[0] + -0x10));
  return 0;
}



//==================== Handler_0042960A @ 0x0042960A ====================

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 Handler_0042960A(wchar_t *param_1,LPWSTR param_2,undefined4 *param_3)

{
  LPWSTR pWVar1;
  int iVar2;
  LPWSTR pWVar3;
  CFrameWnd *pCVar4;
  undefined4 uVar5;
  CWnd *this;
  CObject *pCVar6;
  BOOL BVar7;
  HMENU pHVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  CBitmap *pCVar11;
  DWORD DVar12;
  ULONG_PTR *pUVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uStack_184;
  undefined4 uStack_180;
  HWND pHStack_164;
  _IMAGEINFO a_Stack_120 [16];
  RECT RStack_110;
  tagRECT tStack_100;
  RECT RStack_f0;
  MENUITEMINFOW MStack_e0;
  CClientDC aCStack_b0 [20];
  tagRECT tStack_9c;
  tagRECT tStack_8c;
  CMenu aCStack_7c [4];
  HMENU pHStack_78;
  tagRECT tStack_6c;
  CWnd *pCStack_5c;
  tagRECT *ptStack_58;
  byte abStack_54 [4];
  CDC aCStack_50 [16];
  undefined **appuStack_40 [5];
  CImageList *pCStack_2c;
  CObject *pCStack_28;
  uint uStack_24;
  int iStack_20;
  CFrameWnd *pCStack_1c;
  CObject *pCStack_18;
  int aiStack_14 [3];
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x174;
  iStack_8 = 0x429619;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)aiStack_14);
  iStack_8 = 0;
  iVar2 = lstrlenW(L"ReBarWindow32");
  pWVar3 = (LPWSTR)FID_conflict_PrepareWrite(aiStack_14,iVar2 + 1);
  pWVar1 = param_2;
  GetClassNameW(*(HWND *)param_2,pWVar3,iVar2 + 1);
  ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)aiStack_14,-1);
  pCStack_18 = (CObject *)CWnd::FromHandlePermanent(*(HWND__ **)pWVar1);
  iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)aiStack_14
                     ,L"ReBarWindow32");
  pCVar6 = pCStack_18;
  if ((iVar2 == 0) && (pCStack_18 != (CObject *)0x0)) {
    iVar2 = CObject::IsKindOf(pCStack_18,(CRuntimeClass *)&UNK_004652fc);
    if (iVar2 != 0) {
      pCVar4 = CWnd::GetParentFrame((CWnd *)pCVar6);
      if ((pCVar4 != (CFrameWnd *)0x0) && (pCStack_1c != pCVar4)) {
        uVar5 = Handler_0042960A(param_1,pWVar1,param_3);
        goto LAB_004296b3;
      }
      func_0x0042fed8();
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&param_1);
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::
      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)&param_2);
      iStack_8._0_1_ = 3;
      FUN_00425661((undefined4 *)aCStack_50);
      iStack_8._0_1_ = 4;
      CClientDC::CClientDC(aCStack_b0,(CWnd *)pCStack_1c);
      uStack_184 = *(undefined4 *)(pCVar6 + 0x98);
      iStack_8 = CONCAT31(iStack_8._1_3_,5);
      uStack_180 = 0x10;
      FUN_00426fe2(pCVar6,*(WPARAM *)(pWVar1 + 6),(LPARAM)&uStack_184);
      FUN_00426fff(pCVar6,*(WPARAM *)(pWVar1 + 6),(LPARAM)&tStack_8c);
      iVar2 = lstrlenW(L"ToolbarWindow32");
      pWVar3 = (LPWSTR)FID_conflict_PrepareWrite(aiStack_14,iVar2 + 1);
      GetClassNameW(pHStack_164,pWVar3,iVar2 + 1);
      ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)aiStack_14,-1);
      this = CWnd::FromHandlePermanent(pHStack_164);
      pCStack_5c = this;
      iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Compare
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)
                         aiStack_14,L"ToolbarWindow32");
      if ((iVar2 == 0) && (this != (CWnd *)0x0)) {
        iVar2 = CObject::IsKindOf((CObject *)this,(CRuntimeClass *)&PTR_s_CToolBar_004652c8);
        if (iVar2 != 0) {
          ptStack_58 = (tagRECT *)(pWVar1 + 0xc);
          tStack_8c.right = ptStack_58->left;
          CWnd::ClientToScreen((CWnd *)pCStack_18,&tStack_8c);
          CWnd::ScreenToClient(this,&tStack_8c);
          pCVar6 = (CObject *)func_0x00426f99();
          pCStack_18 = pCVar6;
          do {
            pCVar6 = pCVar6 + -1;
            pCStack_28 = pCVar6;
            FUN_00426fac(this,(WPARAM)pCVar6,(LPARAM)&RStack_f0);
            BVar7 = IntersectRect(&tStack_100,&tStack_8c,&RStack_f0);
            if (BVar7 != 0) break;
          } while (pCVar6 != (CObject *)0x0);
          _memset(&MStack_e0,0,0x30);
          MStack_e0.cbSize = 0x30;
          pCStack_2c = (CImageList *)func_0x00426fc9();
          func_0x00434c22();
          appuStack_40[0] = CTypedPtrArray<CObArray,CBitmap*>::vftable;
          iStack_8 = CONCAT31(iStack_8._1_3_,6);
          CPtrArray::SetSize((CPtrArray *)appuStack_40,(int)pCStack_18 - (int)pCVar6,-1);
          pHVar8 = CreatePopupMenu();
          Attach(aCStack_7c,(int)pHVar8);
          CDC::CreateCompatibleDC(aCStack_50,(CDC *)aCStack_b0);
          uVar16 = 0;
          while (pCVar6 < pCStack_18) {
            CToolBar::GetButtonInfo
                      ((CToolBar *)this,(int)pCVar6,&uStack_24,(uint *)abStack_54,&iStack_20);
            if ((abStack_54[0] & 1) == 0) {
              MStack_e0.fMask = 0x162;
              iVar2 = FUN_004069a0(&param_1,uStack_24);
              if (iVar2 == 0) {
                ATL::CSimpleStringT<wchar_t,0>::Empty((CSimpleStringT<wchar_t,0> *)&param_2);
              }
              else {
                AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                     *)&param_2,param_1,1,L'\n');
              }
              puVar9 = FUN_0041ade6(8);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9[1] = 0;
                *puVar9 = CBitmap::vftable;
              }
              SetAtGrow(appuStack_40,uVar16,puVar9);
              if (pCStack_2c == (CImageList *)0x0) {
LAB_004299df:
                MStack_e0.dwItemData = 0;
              }
              else {
                iVar2 = AfxImageList_GetImageInfo
                                  (*(_IMAGELIST **)(pCStack_2c + 4),iStack_20,a_Stack_120);
                if (iVar2 == 0) goto LAB_004299df;
                CopyRect(&tStack_6c,&RStack_110);
                OffsetRect(&tStack_6c,-tStack_6c.left,-tStack_6c.top);
                puVar9 = (undefined4 *)FUN_00429e6b(appuStack_40,uVar16);
                CBitmap::CreateCompatibleBitmap
                          ((CBitmap *)*puVar9,(CDC *)aCStack_b0,tStack_6c.right,tStack_6c.bottom);
                puVar9 = (undefined4 *)FUN_00429e6b(appuStack_40,uVar16);
                puVar10 = (undefined4 *)FUN_00429e6b(appuStack_40,uVar16);
                pCVar11 = CDC::SelectObject(aCStack_50,(CBitmap *)*puVar9);
                *puVar10 = pCVar11;
                DVar12 = GetSysColor(4);
                CDC::FillSolidRect(aCStack_50,&tStack_6c,DVar12);
                CImageList::Draw(pCStack_2c,aCStack_50,iStack_20,(tagPOINT)0x0,1);
                puVar9 = (undefined4 *)FUN_00429e6b(appuStack_40,uVar16);
                puVar10 = (undefined4 *)FUN_00429e6b(appuStack_40,uVar16);
                pCVar11 = CDC::SelectObject(aCStack_50,(CBitmap *)*puVar9);
                *puVar10 = pCVar11;
                pUVar13 = (ULONG_PTR *)FUN_00429e6b(appuStack_40,uVar16);
                MStack_e0.dwItemData = *pUVar13;
                pCVar6 = pCStack_28;
                this = pCStack_5c;
              }
              MStack_e0.dwTypeData = param_2;
              MStack_e0.wID = uStack_24;
              MStack_e0.fType = 0x100;
              uVar16 = uVar16 + 1;
LAB_00429a1d:
              InsertMenuItemW(pHStack_78,(UINT)pCVar6,1,&MStack_e0);
            }
            else if (uVar16 != 0) {
              MStack_e0.fMask = 0x100;
              MStack_e0.fType = 0x800;
              goto LAB_00429a1d;
            }
            pCVar6 = pCVar6 + 1;
            pCStack_28 = pCVar6;
          }
          CRect::CRect((CRect *)&tStack_9c,ptStack_58);
          CWnd::ClientToScreen((CWnd *)pCStack_1c,&tStack_9c);
          CMenu::TrackPopupMenu
                    (aCStack_7c,0,tStack_9c.left,tStack_9c.bottom,(CWnd *)pCStack_1c,(tagRECT *)0x0)
          ;
          uVar15 = 0;
          *param_3 = 0;
          if (uVar16 != 0) {
            do {
              piVar14 = (int *)FUN_00429e6b(appuStack_40,uVar15);
              if ((int *)*piVar14 != (int *)0x0) {
                (**(code **)(*(int *)*piVar14 + 4))(1);
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          iStack_8._0_1_ = 5;
          FUN_00434c39(appuStack_40);
          iStack_8._0_1_ = 4;
          CClientDC::~CClientDC(aCStack_b0);
          iStack_8._0_1_ = 3;
          CDC::~CDC(aCStack_50);
          FUN_00401810((undefined4 *)(param_2 + -8));
          FUN_00401810((undefined4 *)(param_1 + -8));
          iStack_8 = (uint)iStack_8._1_3_ << 8;
          CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu((CChevronOwnerDrawMenu *)aCStack_7c);
          uVar5 = 1;
          goto LAB_004296b3;
        }
      }
      iStack_8._0_1_ = 4;
      CClientDC::~CClientDC(aCStack_b0);
      iStack_8._0_1_ = 3;
      CDC::~CDC(aCStack_50);
      FUN_00401810((undefined4 *)(param_2 + -8));
      FUN_00401810((undefined4 *)(param_1 + -8));
      iStack_8 = (uint)iStack_8._1_3_ << 8;
      CChevronOwnerDrawMenu::~CChevronOwnerDrawMenu((CChevronOwnerDrawMenu *)aCStack_7c);
    }
  }
  uVar5 = 0;
LAB_004296b3:
  FUN_00401810((undefined4 *)(aiStack_14[0] + -0x10));
  return uVar5;
}



//==================== Handler_00429DBB @ 0x00429DBB ====================

int Handler_00429DBB(void)

{
  long lVar1;
  CWnd *in_ECX;
  
  lVar1 = CWnd::Default(in_ECX);
  return (-(uint)(lVar1 != 0x11) & 0xfffffff0) + 0x11;
}



//==================== thunk_FUN_004357db @ 0x00429DFA ====================

/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void thunk_FUN_004357db(void)

{
  CWnd *in_ECX;
  CWindowDC *left;
  tagRECT *top;
  int in_stack_ffffffac;
  int in_stack_ffffffb0;
  int in_stack_ffffffb4;
  int in_stack_ffffffb8;
  CWindowDC aCStack_44 [4];
  WPARAM WStack_40;
  tagRECT tStack_30;
  tagRECT tStack_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  uStack_8 = 0x4357e7;
  CWindowDC::CWindowDC(aCStack_44,in_ECX);
  uStack_8 = 0;
  GetClientRect(*(HWND *)(in_ECX + 0x20),&tStack_30);
  GetWindowRect(*(HWND *)(in_ECX + 0x20),&tStack_20);
  CWnd::ScreenToClient(in_ECX,&tStack_20);
  OffsetRect(&tStack_30,-tStack_20.left,-tStack_20.top);
  FID_conflict_ExcludeClipRect
            ((HDC)&tStack_30,in_stack_ffffffac,in_stack_ffffffb0,in_stack_ffffffb4,in_stack_ffffffb8
            );
  OffsetRect(&tStack_20,-tStack_20.left,-tStack_20.top);
  top = &tStack_20;
  left = aCStack_44;
  (**(code **)(*(int *)in_ECX + 0x150))();
  FID_conflict_ExcludeClipRect
            ((HDC)&tStack_20,(int)left,(int)top,in_stack_ffffffac,in_stack_ffffffb0);
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x14,WStack_40,0);
  (**(code **)(*(int *)in_ECX + 0x158))(aCStack_44,&tStack_20);
  uStack_8 = 0xffffffff;
  CWindowDC::~CWindowDC(aCStack_44);
  return;
}



//==================== OnWindowPosChanging @ 0x00429E22 ====================

/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CDockBar::OnWindowPosChanging(struct tagWINDOWPOS *)
    protected: void __thiscall CStatusBar::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2008 Release */

void __thiscall OnWindowPosChanging(void *this,tagWINDOWPOS *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0x84);
  uVar2 = *puVar1;
  *puVar1 = uVar2 & 0xfffff0ff;
  CControlBar::OnWindowPosChanging(this,param_1);
  *puVar1 = uVar2;
  return;
}



//==================== FUN_00429e4a @ 0x00429E4A ====================

void __thiscall FUN_00429e4a(void *this,undefined4 param_1)

{
  CWnd::Default(this);
  *(undefined4 *)((int)this + 0x98) = param_1;
  return;
}



//==================== OnNcCalcSize @ 0x00429FE6 ====================

/* Library Function - Single Match
    protected: void __thiscall CStatusBar::OnNcCalcSize(int,struct tagNCCALCSIZE_PARAMS *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CStatusBar::OnNcCalcSize(CStatusBar *this,int param_1,tagNCCALCSIZE_PARAMS *param_2)

{
  tagRECT local_14;
  
  SetRectEmpty(&local_14);
  CControlBar::CalcInsideRect((CControlBar *)this,(CRect *)&local_14,1);
  *(int *)param_2 = *(int *)param_2 + local_14.left;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + local_14.top + -2;
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_14.right;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + local_14.bottom;
  return;
}



//==================== OnGetText @ 0x0042A0D6 ====================

/* Library Function - Single Match
    protected: long __thiscall CStatusBar::OnGetText(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CStatusBar::OnGetText(CStatusBar *this,uint param_1,long param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = CommandToIndex(this,0);
    if (-1 < iVar2) {
      pvVar1 = *(void **)(iVar2 * 0x14 + *(int *)(this + 0x78) + 0x10);
      iVar3 = *(int *)((int)pvVar1 + -0xc);
      if ((int)param_1 < iVar3) {
        iVar3 = param_1 - 1;
      }
      FUN_00414460((void *)param_2,param_1 * 2,pvVar1,iVar3 * 2);
    }
    *(undefined2 *)(param_2 + iVar3 * 2) = 0;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}



//==================== Handler_0042A131 @ 0x0042A131 ====================

undefined4 Handler_0042A131(void)

{
  int iVar1;
  CStatusBar *in_ECX;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = CStatusBar::CommandToIndex(in_ECX,0);
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x78) + 0x10 + iVar1 * 0x14) + -0xc);
  }
  return uVar2;
}



//==================== OnSetText @ 0x0042A338 ====================

/* Library Function - Single Match
    protected: long __thiscall CStatusBar::OnSetText(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CStatusBar::OnSetText(CStatusBar *this,uint param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = CommandToIndex(this,0);
  if (iVar1 < 0) {
    lVar2 = -1;
  }
  else {
    iVar1 = SetPaneText(this,iVar1,(char *)param_2,1);
    lVar2 = (iVar1 != 0) - 1;
  }
  return lVar2;
}



//==================== Handler_0042A5B6 @ 0x0042A5B6 ====================

void Handler_0042A5B6(void)

{
  CNoTrackObject *pCVar1;
  CStatusBar *in_ECX;
  undefined4 unaff_ESI;
  
  CStatusBar::UpdateAllPanes(in_ECX,0,1);
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_0047ee04,(_func_CNoTrackObject_ptr *)&LAB_0041b294)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  (**(code **)(*(int *)in_ECX + 0x118))
            (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
             *(undefined4 *)(pCVar1 + 100),unaff_ESI);
  return;
}



//==================== Handler_0042A5CC @ 0x0042A5CC ====================

void Handler_0042A5CC(void)

{
  CWnd *in_ECX;
  
  CWnd::Default(in_ECX);
  CStatusBar::UpdateAllPanes((CStatusBar *)in_ECX,1,0);
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



//==================== Handler_0042AA82 @ 0x0042AA82 ====================

void Handler_0042AA82(void)

{
  int in_ECX;
  undefined **ppuStack_8;
  
  if (*(int *)(in_ECX + 0x58) == 0) {
    ppuStack_8 = &PTR_vftable_0047a408;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&ppuStack_8,&DAT_00471750);
  }
                    /* WARNING: Could not recover jumptable at 0x0042aa92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x38))();
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



//==================== OnOpenRecentFile @ 0x0042E103 ====================

/* Library Function - Single Match
    protected: int __thiscall CWinApp::OnOpenRecentFile(unsigned int)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWinApp::OnOpenRecentFile(CWinApp *this,uint param_1)

{
  CRecentFileList *this_00;
  CStringT<char,StrTraitMFC<char,ATL::ChTraitsCRT<char>_>_> *pCVar1;
  int iVar2;
  
  this_00 = *(CRecentFileList **)(this + 0x88);
  if (((this_00 != (CRecentFileList *)0x0) && (0xe10f < param_1)) &&
     (param_1 < *(int *)(this_00 + 4) + 0xe110U)) {
    pCVar1 = CRecentFileList::operator[](this_00,param_1 - 0xe110);
    iVar2 = (**(code **)(*(int *)this + 0x88))(*(undefined4 *)pCVar1);
    if (iVar2 == 0) {
      (**(code **)**(undefined4 **)(this + 0x88))(param_1 - 0xe110);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0041b278();
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



//==================== Handler_0042E1D8 @ 0x0042E1D8 ====================

void Handler_0042E1D8(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x98))(0,1);
  return;
}



//==================== Handler_0042F3C1 @ 0x0042F3C1 ====================

void Handler_0042F3C1(void)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  CWnd *in_ECX;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_c;
  
  uStack_c = 0x42f3cd;
  RemoveImageList(in_ECX,0);
  uStack_c = 0x42f3d6;
  RemoveImageList(in_ECX,1);
  uStack_c = 0x42f3df;
  RemoveImageList(in_ECX,2);
  iVar1 = FUN_0042d831();
  if (iVar1 == 0) goto LAB_0041f437;
  if (*(CWnd **)(iVar1 + 0x20) == in_ECX) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar2 = AfxGetModuleState();
      if (iVar1 == *(int *)(pAVar2 + 4)) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_0041f42c;
      }
      AfxPostQuitMessage(0);
    }
LAB_0041f42c:
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar1 + 0x24) == in_ECX) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
LAB_0041f437:
  if (*(int **)(in_ECX + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x48) + 0x50))();
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  if (*(int **)(in_ECX + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x4c) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (((byte)in_ECX[0x3c] & 1) != 0) {
    pAVar4 = AfxGetModuleThreadState();
    iVar1 = *(int *)(pAVar4 + 0x3c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      _memset(&uStack_34,0,0x30);
      uStack_2c = *(undefined4 *)(in_ECX + 0x20);
      uStack_34 = 0x2c;
      uStack_30 = 1;
      uStack_28 = uStack_2c;
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x433,0,(LPARAM)&uStack_34);
    }
  }
  LVar5 = GetWindowLongW(*(HWND *)(in_ECX + 0x20),-4);
  CWnd::Default(in_ECX);
  LVar6 = GetWindowLongW(*(HWND *)(in_ECX + 0x20),-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)in_ECX + 0xf8))();
    if (*piVar7 != 0) {
      SetWindowLongW(*(HWND *)(in_ECX + 0x20),-4,*piVar7);
    }
  }
  CWnd::Detach(in_ECX);
  (**(code **)(*(int *)in_ECX + 0x11c))();
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



//==================== Handler_0042F50C @ 0x0042F50C ====================

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void Handler_0042F50C(void)

{
  CWnd *in_ECX;
  CPaintDC aCStack_68 [96];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  uStack_8 = 0x42f518;
  CPaintDC::CPaintDC(aCStack_68,in_ECX);
  uStack_8 = 0;
  (**(code **)(*(int *)in_ECX + 0x160))(aCStack_68,0);
  (**(code **)(*(int *)in_ECX + 0x174))(aCStack_68);
  uStack_8 = 0xffffffff;
  CPaintDC::~CPaintDC(aCStack_68);
  FUN_00447e7f();
  return;
}



//==================== Handler_0042F5B7 @ 0x0042F5B7 ====================

void Handler_0042F5B7(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0042f5b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x164))();
  return;
}



//==================== OnCreate @ 0x0042F614 ====================

/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CView::OnCreate(struct tagCREATESTRUCTW *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

undefined4 __thiscall OnCreate(void *this,int *param_1)

{
  CDocument *this_00;
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = CWnd::Default(this);
  if (lVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*param_1 != 0) && (this_00 = *(CDocument **)(*param_1 + 4), this_00 != (CDocument *)0x0)) {
      CDocument::AddView(this_00,this);
    }
    uVar2 = 0;
  }
  return uVar2;
}



//==================== OnMouseActivate @ 0x0042F6C0 ====================

/* Library Function - Single Match
    protected: int __thiscall CView::OnMouseActivate(class CWnd *,unsigned int,unsigned int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CView::OnMouseActivate(CView *this,CWnd *param_1,uint param_2,uint param_3)

{
  long lVar1;
  CFrameWnd *this_00;
  CView *pCVar2;
  HWND hWnd;
  BOOL BVar3;
  
  lVar1 = CWnd::Default((CWnd *)this);
  if (((lVar1 != 3) && (lVar1 != 4)) &&
     (this_00 = CWnd::GetParentFrame((CWnd *)this), this_00 != (CFrameWnd *)0x0)) {
    pCVar2 = (CView *)FUN_00426aa8((int)this_00);
    hWnd = GetFocus();
    if (((pCVar2 == this) && (*(HWND *)(this + 0x20) != hWnd)) &&
       (BVar3 = IsChild(*(HWND *)(this + 0x20),hWnd), BVar3 == 0)) {
      (**(code **)(*(int *)this + 0x168))(1,this,this);
    }
    else {
      CFrameWnd::SetActiveView(this_00,this,1);
    }
  }
  return lVar1;
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



//==================== Handler_0043501C @ 0x0043501C ====================

undefined4 Handler_0043501C(void)

{
  int iVar1;
  undefined4 uVar2;
  CObject *in_ECX;
  
  iVar1 = CObject::IsKindOf(in_ECX,(CRuntimeClass *)&PTR_s_CToolBar_004652c8);
  if ((iVar1 == 0) && (iVar1 = CObject::IsKindOf(in_ECX,(CRuntimeClass *)&UNK_004652a0), iVar1 == 0)
     ) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x7c) != 0) {
    func_0x004424dc(*(int *)(in_ECX + 0x7c));
  }
  uVar2 = func_0x00442490(*(undefined4 *)(in_ECX + 0x20),L"REBAR");
  *(undefined4 *)(in_ECX + 0x7c) = uVar2;
  return 1;
}



//==================== Handler_00435064 @ 0x00435064 ====================

void Handler_00435064(void)

{
  int *piVar1;
  CFrameWnd *this;
  CNoTrackObject *pCVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  CObject *in_ECX;
  undefined4 unaff_ESI;
  
  iVar3 = CObject::IsKindOf(in_ECX,(CRuntimeClass *)&PTR_s_CToolBar_004652c8);
  if (iVar3 == 0) {
    iVar3 = CObject::IsKindOf(in_ECX,(CRuntimeClass *)&UNK_004652a0);
    if (iVar3 == 0) goto LAB_0043509a;
  }
  iVar3 = func_0x0044244a();
  if (iVar3 != 0) {
    func_0x004424dc(*(undefined4 *)(in_ECX + 0x7c));
  }
LAB_0043509a:
  pAVar4 = AfxGetModuleThreadState();
  if (*(CObject **)(pAVar4 + 0x50) == in_ECX) {
    (**(code **)(*(int *)in_ECX + 0x178))(0xffffffff);
  }
  this = *(CFrameWnd **)(in_ECX + 0x8c);
  if (this != (CFrameWnd *)0x0) {
    CFrameWnd::RemoveControlBar(this,(CControlBar *)in_ECX);
    *(undefined4 *)(in_ECX + 0x8c) = 0;
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



//==================== Handler_004350F9 @ 0x004350F9 ====================

/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void Handler_004350F9(void)

{
  int iVar1;
  CWnd *in_ECX;
  CPaintDC aCStack_68 [96];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  uStack_8 = 0x435105;
  CPaintDC::CPaintDC(aCStack_68,in_ECX);
  uStack_8 = 0;
  iVar1 = (**(code **)(*(int *)in_ECX + 0x168))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)in_ECX + 0x14c))(aCStack_68);
  }
  uStack_8 = 0xffffffff;
  CPaintDC::~CPaintDC(aCStack_68);
  FUN_00447e7f();
  return;
}



//==================== FUN_004353a0 @ 0x004353A0 ====================

void __fastcall FUN_004353a0(CWnd *param_1)

{
  CWnd::Default(param_1);
  return;
}



//==================== OnTimer @ 0x00435457 ====================

/* Library Function - Single Match
    public: void __thiscall CControlBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2008 Release */

void __thiscall CControlBar::OnTimer(CControlBar *this,uint param_1)

{
  POINT Point;
  SHORT SVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  CWnd *this_00;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  HWND pHVar7;
  int iVar8;
  tagPOINT local_14;
  AFX_MODULE_THREAD_STATE *local_c;
  int local_8;
  
  SVar1 = GetKeyState(1);
  if (SVar1 < 0) {
    return;
  }
  pAVar2 = AfxGetModuleThreadState();
  local_c = pAVar2;
  GetCursorPos(&local_14);
  ScreenToClient(*(HWND *)(this + 0x20),&local_14);
  local_8 = (**(code **)(*(int *)this + 0x74))(local_14.x,local_14.y,0);
  if (local_8 < 0) {
    *(undefined4 *)(pAVar2 + 0x4c) = 0xffffffff;
  }
  else {
    this_00 = CWnd::GetTopLevelParent((CWnd *)this);
    iVar3 = CWnd::IsTopParentActive((CWnd *)this);
    if (iVar3 == 0) {
LAB_004354d4:
      local_8 = -1;
    }
    else {
      if (this_00 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0041b278();
      }
      iVar3 = CWnd::IsWindowEnabled(this_00);
      if (iVar3 == 0) goto LAB_004354d4;
    }
    if (*(int *)(pAVar2 + 0x3c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(pAVar2 + 0x3c) + 0x20);
    }
    pHVar4 = GetCapture();
    pCVar5 = CWnd::FromHandle(pHVar4);
    if (pCVar5 != (CWnd *)this) {
      if (pCVar5 == (CWnd *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(pCVar5 + 0x20);
      }
      if ((iVar8 != iVar3) && (pCVar5 = CWnd::GetTopLevelParent(pCVar5), pCVar5 == this_00)) {
        local_8 = -1;
      }
    }
  }
  if (-1 < local_8) {
    ClientToScreen(*(HWND *)(this + 0x20),&local_14);
    Point.y = local_14.y;
    Point.x = local_14.x;
    pHVar4 = WindowFromPoint(Point);
    if (pHVar4 == (HWND)0x0) {
LAB_00435569:
      local_8 = -1;
      *(undefined4 *)(local_c + 0x4c) = 0xffffffff;
    }
    else if ((pHVar4 != *(HWND *)(this + 0x20)) &&
            (BVar6 = IsChild(*(HWND *)(this + 0x20),pHVar4), BVar6 == 0)) {
      pHVar7 = (HWND)0x0;
      if (*(int *)(local_c + 0x3c) != 0) {
        pHVar7 = *(HWND *)(*(int *)(local_c + 0x3c) + 0x20);
      }
      if (pHVar7 != pHVar4) goto LAB_00435569;
    }
    if (-1 < local_8) goto LAB_00435599;
  }
  if (*(int *)(local_c + 0x4c) == -1) {
    KillTimer(*(HWND *)(this + 0x20),0xe001);
  }
  (**(code **)(*(int *)this + 0x178))(0xffffffff);
LAB_00435599:
  if ((param_1 == 0xe000) && (KillTimer(*(HWND *)(this + 0x20),0xe000), -1 < local_8)) {
    (**(code **)(*(int *)this + 0x178))(local_8);
  }
  return;
}



//==================== OnHelpHitTest @ 0x004355C3 ====================

/* Library Function - Single Match
    public: long __thiscall CControlBar::OnHelpHitTest(unsigned int,long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

long __thiscall CControlBar::OnHelpHitTest(CControlBar *this,uint param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*(int *)this + 0x74))
                    ((int)(short)param_2,(int)(short)((uint)param_2 >> 0x10),0);
  if (iVar1 == -1) {
    iVar1 = GetDlgCtrlID(*(HWND *)(this + 0x20));
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0x50000U;
  }
  else {
    uVar2 = iVar1 + 0x10000;
  }
  return uVar2;
}



//==================== OnWindowPosChanging @ 0x0043560D ====================

/* Library Function - Single Match
    public: void __thiscall CControlBar::OnWindowPosChanging(struct tagWINDOWPOS *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CControlBar::OnWindowPosChanging(CControlBar *this,tagWINDOWPOS *param_1)

{
  int yBottom;
  int yBottom_00;
  int xRight;
  tagRECT local_18;
  int local_8;
  
  DefWindowProcW(*(HWND *)(this + 0x20),0x46,0,(LPARAM)param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    GetWindowRect(*(HWND *)(this + 0x20),&local_18);
    local_8 = *(int *)(param_1 + 0x10);
    xRight = local_18.right - local_18.left;
    yBottom_00 = local_18.bottom - local_18.top;
    yBottom = *(int *)(param_1 + 0x14);
    if ((local_8 != xRight) && ((*(uint *)(this + 0x84) & 0x400) != 0)) {
      SetRect(&local_18,local_8 - DAT_0047ee20,0,local_8,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      SetRect(&local_18,xRight - DAT_0047ee20,0,xRight,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
    if ((yBottom != yBottom_00) && ((*(uint *)(this + 0x84) & 0x800) != 0)) {
      SetRect(&local_18,0,yBottom - DAT_0047ee24,local_8,yBottom);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
      SetRect(&local_18,0,yBottom_00 - DAT_0047ee24,local_8,yBottom_00);
      InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    }
  }
  return;
}



//==================== Handler_0043571C @ 0x0043571C ====================

undefined4 Handler_0043571C(void)

{
  long lVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CWnd *in_ECX;
  
  lVar1 = CWnd::Default(in_ECX);
  if (lVar1 != -1) {
    if (((byte)in_ECX[0x84] & 0x10) != 0) {
      CWnd::EnableToolTips(in_ECX,1);
    }
    pHVar2 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    iVar4 = (**(code **)(*(int *)pCVar3 + 0x128))();
    if (iVar4 != 0) {
      *(CWnd **)(in_ECX + 0x8c) = pCVar3;
      CPtrList::AddTail((CPtrList *)(pCVar3 + 0x84),in_ECX);
    }
    iVar4 = CObject::IsKindOf((CObject *)in_ECX,(CRuntimeClass *)&PTR_s_CToolBar_004652c8);
    if (((iVar4 != 0) ||
        (iVar4 = CObject::IsKindOf((CObject *)in_ECX,(CRuntimeClass *)&UNK_004652a0), iVar4 != 0))
       && (iVar4 = func_0x0044244a(), iVar4 != 0)) {
      uVar5 = func_0x00442490(*(undefined4 *)(in_ECX + 0x20),L"REBAR");
      *(undefined4 *)(in_ECX + 0x7c) = uVar5;
    }
    return 0;
  }
  return 0xffffffff;
}



//==================== Handler_004357B8 @ 0x004357B8 ====================

long Handler_004357B8(void)

{
  int iVar1;
  long lVar2;
  CControlBar *in_ECX;
  
  iVar1 = CControlBar::IsFloating(in_ECX);
  if (iVar1 == 0) {
    lVar2 = CWnd::Default((CWnd *)in_ECX);
  }
  else {
    func_0x004219ee();
    lVar2 = 3;
  }
  return lVar2;
}



//==================== OnCtlColor @ 0x004358A3 ====================

/* Library Function - Single Match
    public: struct HBRUSH__ * __thiscall CControlBar::OnCtlColor(class CDC *,class CWnd *,unsigned
   int)
   
   Library: Visual Studio 2008 Release */

HBRUSH__ * __thiscall
CControlBar::OnCtlColor(CControlBar *this,CDC *param_1,CWnd *param_2,uint param_3)

{
  CWnd *pCVar1;
  int iVar2;
  CWnd *pCVar3;
  HWND__ *pHVar4;
  
  pCVar1 = param_2;
  iVar2 = CWnd::SendChildNotifyLastMsg(param_2,(long *)&param_2);
  pCVar3 = param_2;
  if (iVar2 == 0) {
    pHVar4 = (HWND__ *)0x0;
    if (pCVar1 != (CWnd *)0x0) {
      pHVar4 = *(HWND__ **)(pCVar1 + 0x20);
    }
    iVar2 = CWnd::GrayCtlColor(*(HDC__ **)(param_1 + 4),pHVar4,param_3,(HBRUSH__ *)DAT_0047ee34,
                               DAT_0047ee44);
    pCVar3 = DAT_0047ee34;
    if (iVar2 == 0) {
      pCVar3 = (CWnd *)CWnd::Default((CWnd *)this);
    }
  }
  return (HBRUSH__ *)pCVar3;
}



//==================== OnLButtonDown @ 0x004358FD ====================

/* Library Function - Single Match
    public: void __thiscall CControlBar::OnLButtonDown(unsigned int,class CPoint)
   
   Library: Visual Studio 2008 Release */

void __thiscall
CControlBar::OnLButtonDown(CControlBar *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  int iVar1;
  
  if ((*(int *)(this + 0x90) != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0x74))(param_3,param_4,0), iVar1 == -1)) {
    ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
    (**(code **)**(undefined4 **)(this + 0x94))(param_3,param_4);
    return;
  }
  CWnd::Default((CWnd *)this);
  return;
}



//==================== OnLButtonDblClk @ 0x0043594B ====================

/* Library Function - Single Match
    public: void __thiscall CControlBar::OnLButtonDblClk(unsigned int,class CPoint)
   
   Library: Visual Studio 2008 Release */

void __thiscall
CControlBar::OnLButtonDblClk
          (CControlBar *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((*(int *)(this + 0x90) != 0) &&
     (iVar1 = (**(code **)(*(int *)this + 0x74))(param_3,param_4,0), iVar1 == -1)) {
    (**(code **)(**(int **)(this + 0x94) + 8))();
    return;
  }
  CWnd::Default((CWnd *)this);
  return;
}



//==================== OnSizeParent @ 0x00435987 ====================

/* Library Function - Single Match
    public: long __thiscall CControlBar::OnSizeParent(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CControlBar::OnSizeParent(CControlBar *this,uint param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  tagRECT local_20;
  int local_10;
  int local_c;
  CControlBar *local_8;
  
  local_8 = this;
  uVar1 = (**(code **)(*(int *)this + 0x16c))(param_2);
  if (((uVar1 & 0x10000000) != 0) && ((uVar1 & 0xf000) != 0)) {
    CopyRect(&local_20,(RECT *)(param_2 + 4));
    iVar4 = local_20.right - local_20.left;
    iVar3 = local_20.bottom - local_20.top;
    bVar5 = *(int *)(param_2 + 0x1c) != 0;
    if (((*(uint *)(local_8 + 0x84) & 4) == 0) || ((*(uint *)(local_8 + 0x84) & 1) == 0)) {
      if ((uVar1 & 0xa000) == 0) {
        bVar2 = bVar5 | 0x10;
      }
      else {
        bVar2 = bVar5 | 10;
      }
    }
    else {
      bVar2 = bVar5 | 6;
    }
    (**(code **)(*(int *)local_8 + 0x140))(&local_10,0xffffffff,bVar2);
    if (iVar4 <= local_10) {
      local_10 = iVar4;
    }
    if (iVar3 <= local_c) {
      local_c = iVar3;
    }
    if ((uVar1 & 0xa000) == 0) {
      if ((uVar1 & 0x5000) != 0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_10;
        iVar3 = *(int *)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x18) <= local_c) {
          iVar3 = local_c;
        }
        *(int *)(param_2 + 0x18) = iVar3;
        if ((uVar1 & 0x1000) == 0) {
          if ((uVar1 & 0x4000) != 0) {
            local_20.left = local_20.right - local_10;
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - local_10;
          }
        }
        else {
          *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + local_10;
        }
      }
    }
    else {
      *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + local_c;
      iVar3 = *(int *)(param_2 + 0x14);
      if (*(int *)(param_2 + 0x14) <= local_10) {
        iVar3 = local_10;
      }
      *(int *)(param_2 + 0x14) = iVar3;
      if ((uVar1 & 0x2000) == 0) {
        if ((uVar1 & 0x8000) != 0) {
          local_20.top = local_20.bottom - local_c;
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - local_c;
        }
      }
      else {
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + local_c;
      }
    }
    local_20.right = local_20.left + local_10;
    local_20.bottom = local_20.top + local_c;
    if (*(int *)param_2 != 0) {
      AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)param_2,*(HWND__ **)(local_8 + 0x20),&local_20);
    }
  }
  return 0;
}



//==================== OnIdleUpdateCmdUI @ 0x004362E1 ====================

/* Library Function - Single Match
    public: long __thiscall CControlBar::OnIdleUpdateCmdUI(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CControlBar::OnIdleUpdateCmdUI(CControlBar *this,uint param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  CWnd *pCVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  uVar1 = *(uint *)(this + 0x80);
  uVar5 = 0;
  if (((uVar1 & 1) == 0) || ((uVar2 & 0x10000000) == 0)) {
    if (((uVar1 & 2) != 0) && ((uVar2 & 0x10000000) == 0)) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = 0x80;
  }
  *(uint *)(this + 0x80) = uVar1 & 0xfffffffc;
  if (uVar5 != 0) {
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,uVar5 | 0x17);
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x10000000) != 0) {
    if ((*(CWnd **)(this + 0x90) != (CWnd *)0x0) &&
       (uVar2 = CWnd::GetExStyle(*(CWnd **)(this + 0x90)), (uVar2 & 0x10000000) == 0)) {
      return 0;
    }
    pCVar3 = CWnd::GetOwner((CWnd *)this);
    if ((pCVar3 == (CWnd *)0x0) || (iVar4 = (**(code **)(*(int *)pCVar3 + 0x128))(), iVar4 == 0)) {
      pCVar3 = (CWnd *)CWnd::GetParentFrame((CWnd *)this);
    }
    if (pCVar3 != (CWnd *)0x0) {
      (**(code **)(*(int *)this + 0x144))(pCVar3,param_1);
    }
    return 0;
  }
  return 0;
}



//==================== Handler_00436397 @ 0x00436397 ====================

void Handler_00436397(void)

{
  CControlBar *in_ECX;
  
  CControlBar::OnIdleUpdateCmdUI(in_ECX,1,0);
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



//==================== OnAddTool @ 0x00442A76 ====================

/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnAddTool(unsigned int,long)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

long __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this,uint param_1,long param_2)

{
  CToolTipCtrl *this_00;
  bool bVar1;
  undefined3 extraout_var;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_38 [8];
  int local_18;
  wchar_t *local_14;
  undefined4 local_8;
  
  puVar2 = (undefined4 *)param_2;
  puVar5 = local_38;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  if (((local_18 == 0) && (local_14 != (wchar_t *)0xffffffff)) && (local_14 != (wchar_t *)0x0)) {
    this_00 = this + 0x54;
    bVar1 = Lookup(this_00,local_14,&local_8);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      puVar2 = CMapStringToPtr__operator__(this_00,local_14);
      *puVar2 = 0;
    }
    param_2 = 0;
    LookupKey(this_00,local_14,&param_2);
    local_14 = (wchar_t *)param_2;
  }
  lVar3 = (**(code **)(*(int *)this + 0x118))(0x432,param_1,local_38);
  return lVar3;
}



//==================== Handler_00442AF5 @ 0x00442AF5 ====================

undefined4 Handler_00442AF5(void)

{
  int in_ECX;
  
  SendMessageW(*(HWND *)(in_ECX + 0x20),0x401,0,0);
  return 0;
}



//==================== FUN_00442b0c @ 0x00442B0C ====================

void __thiscall FUN_00442b0c(void *this,WPARAM param_1)

{
  SendMessageW(*(HWND *)((int)this + 0x20),0x401,param_1,0);
  return;
}



//==================== OnWindowFromPoint @ 0x00442B28 ====================

/* Library Function - Single Match
    protected: long __thiscall CToolTipCtrl::OnWindowFromPoint(unsigned int,long)
   
   Library: Visual Studio 2008 Release */

long __thiscall CToolTipCtrl::OnWindowFromPoint(CToolTipCtrl *this,uint param_1,long param_2)

{
  tagPOINT tVar1;
  HWND hWnd;
  HWND hWnd_00;
  int iVar2;
  BOOL BVar3;
  tagPOINT local_c;
  
  local_c.x = *(LONG *)param_2;
  local_c.y = *(LONG *)(param_2 + 4);
  hWnd = WindowFromPoint(*(POINT *)param_2);
  hWnd_00 = hWnd;
  if ((hWnd != (HWND)0x0) &&
     ((hWnd_00 = GetParent(hWnd), hWnd_00 == (HWND)0x0 ||
      (iVar2 = _AfxIsComboBoxControl(hWnd_00,2), iVar2 == 0)))) {
    ScreenToClient(hWnd,&local_c);
    tVar1.y = local_c.y;
    tVar1.x = local_c.x;
    hWnd_00 = _AfxChildWindowFromPoint(hWnd,tVar1);
    if ((hWnd_00 == (HWND__ *)0x0) || (BVar3 = IsWindowEnabled(hWnd_00), BVar3 != 0)) {
      hWnd_00 = hWnd;
    }
  }
  return (long)hWnd_00;
}



//==================== Default @ 0x00446298 ====================

long __thiscall CWnd::Default(CWnd *this)

{
  CNoTrackObject *pCVar1;
  long lVar2;
  
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_0047ee04,(_func_CNoTrackObject_ptr *)&LAB_0041b294)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0041b278();
  }
  lVar2 = (**(code **)(*(int *)this + 0x118))
                    (*(undefined4 *)(pCVar1 + 0x5c),*(undefined4 *)(pCVar1 + 0x60),
                     *(undefined4 *)(pCVar1 + 100));
  return lVar2;
}



//==================== Handler_0044629D @ 0x0044629D ====================

bool Handler_0044629D(void)

{
  long lVar1;
  CWnd *in_ECX;
  
  lVar1 = CWnd::Default(in_ECX);
  return lVar1 != 0;
}



