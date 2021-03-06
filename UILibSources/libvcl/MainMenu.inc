
//----------------------------------------
// The code is automatically generated by the GenlibVcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function MainMenu_Create(AOwner: TComponent): TMainMenu; stdcall;
begin
  Result :=  TMainMenu.Create(AOwner);
end;

procedure MainMenu_Free(AObj: TMainMenu); stdcall;
begin
  AObj.Free;
end;

function MainMenu_FindComponent(AObj: TMainMenu; AName: PChar): TComponent; stdcall;
begin
  Result :=  AObj.FindComponent(AName);
end;

function MainMenu_GetNamePath(AObj: TMainMenu): PChar; stdcall;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function MainMenu_HasParent(AObj: TMainMenu): LongBool; stdcall;
begin
  Result :=  AObj.HasParent;
end;

procedure MainMenu_Assign(AObj: TMainMenu; Source: TPersistent); stdcall;
begin
  AObj.Assign(Source);
end;

procedure MainMenu_DisposeOf(AObj: TMainMenu); stdcall;
begin
  AObj.DisposeOf;
end;

function MainMenu_ClassType(AObj: TMainMenu): TClass; stdcall;
begin
  Result :=  AObj.ClassType;
end;

function MainMenu_ClassName(AObj: TMainMenu): PChar; stdcall;
begin
  Result :=  PChar(AObj.ClassName);
end;

function MainMenu_InstanceSize(AObj: TMainMenu): Integer; stdcall;
begin
  Result :=  AObj.InstanceSize;
end;

function MainMenu_InheritsFrom(AObj: TMainMenu; AClass: TClass): LongBool; stdcall;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function MainMenu_Equals(AObj: TMainMenu; Obj: TObject): LongBool; stdcall;
begin
  Result :=  AObj.Equals(Obj);
end;

function MainMenu_GetHashCode(AObj: TMainMenu): Integer; stdcall;
begin
  Result :=  AObj.GetHashCode;
end;

function MainMenu_ToString(AObj: TMainMenu): PChar; stdcall;
begin
  Result :=  PChar(AObj.ToString);
end;

function MainMenu_GetAutoHotkeys(AObj: TMainMenu): TMenuAutoFlag; stdcall;
begin
  Result :=  AObj.AutoHotkeys;
end;

procedure MainMenu_SetAutoHotkeys(AObj: TMainMenu; AValue: TMenuAutoFlag); stdcall;
begin
  AObj.AutoHotkeys := AValue;
end;

function MainMenu_GetBiDiMode(AObj: TMainMenu): TBiDiMode; stdcall;
begin
  Result :=  AObj.BiDiMode;
end;

procedure MainMenu_SetBiDiMode(AObj: TMainMenu; AValue: TBiDiMode); stdcall;
begin
  AObj.BiDiMode := AValue;
end;

function MainMenu_GetImages(AObj: TMainMenu): TCustomImageList; stdcall;
begin
  Result :=  AObj.Images;
end;

procedure MainMenu_SetImages(AObj: TMainMenu; AValue: TCustomImageList); stdcall;
begin
  AObj.Images := AValue;
end;

function MainMenu_GetOwnerDraw(AObj: TMainMenu): LongBool; stdcall;
begin
  Result :=  AObj.OwnerDraw;
end;

procedure MainMenu_SetOwnerDraw(AObj: TMainMenu; AValue: LongBool); stdcall;
begin
  AObj.OwnerDraw := AValue;
end;

procedure MainMenu_SetOnChange(AObj: TMainMenu; AEventId: NativeUInt); stdcall;
begin
  if AEventId = 0 then
  begin
    AObj.OnChange := nil;
    TEventClass.Remove(AObj, @TEventClass.MenuOnChange);
    Exit;
  end;
  AObj.OnChange := TEventClass.MenuOnChange;
  TEventClass.Add(AObj, @TEventClass.MenuOnChange, AEventId);
end;

function MainMenu_GetHandle(AObj: TMainMenu): HMENU; stdcall;
begin
  Result :=  AObj.Handle;
end;

function MainMenu_GetWindowHandle(AObj: TMainMenu): HWND; stdcall;
begin
  Result :=  AObj.WindowHandle;
end;

procedure MainMenu_SetWindowHandle(AObj: TMainMenu; AValue: HWND); stdcall;
begin
  AObj.WindowHandle := AValue;
end;

function MainMenu_GetItems(AObj: TMainMenu): TMenuItem; stdcall;
begin
  Result :=  AObj.Items;
end;

function MainMenu_GetComponentCount(AObj: TMainMenu): Integer; stdcall;
begin
  Result :=  AObj.ComponentCount;
end;

function MainMenu_GetComponentIndex(AObj: TMainMenu): Integer; stdcall;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure MainMenu_SetComponentIndex(AObj: TMainMenu; AValue: Integer); stdcall;
begin
  AObj.ComponentIndex := AValue;
end;

function MainMenu_GetOwner(AObj: TMainMenu): TComponent; stdcall;
begin
  Result :=  AObj.Owner;
end;

function MainMenu_GetName(AObj: TMainMenu): PChar; stdcall;
begin
  Result :=  PChar(AObj.Name);
end;

procedure MainMenu_SetName(AObj: TMainMenu; AValue: PChar); stdcall;
begin
  AObj.Name := AValue;
end;

function MainMenu_GetTag(AObj: TMainMenu): NativeInt; stdcall;
begin
  Result :=  AObj.Tag;
end;

procedure MainMenu_SetTag(AObj: TMainMenu; AValue: NativeInt); stdcall;
begin
  AObj.Tag := AValue;
end;

function MainMenu_GetComponents(AObj: TMainMenu; AIndex: Integer): TComponent; stdcall;
begin
  Result :=  AObj.Components[AIndex];
end;

function MainMenu_StaticClassType: TClass; stdcall;
begin
  Result := TMainMenu;
end;

exports
  MainMenu_Create,
  MainMenu_Free,
  MainMenu_FindComponent,
  MainMenu_GetNamePath,
  MainMenu_HasParent,
  MainMenu_Assign,
  MainMenu_DisposeOf,
  MainMenu_ClassType,
  MainMenu_ClassName,
  MainMenu_InstanceSize,
  MainMenu_InheritsFrom,
  MainMenu_Equals,
  MainMenu_GetHashCode,
  MainMenu_ToString,
  MainMenu_GetAutoHotkeys,
  MainMenu_SetAutoHotkeys,
  MainMenu_GetBiDiMode,
  MainMenu_SetBiDiMode,
  MainMenu_GetImages,
  MainMenu_SetImages,
  MainMenu_GetOwnerDraw,
  MainMenu_SetOwnerDraw,
  MainMenu_SetOnChange,
  MainMenu_GetHandle,
  MainMenu_GetWindowHandle,
  MainMenu_SetWindowHandle,
  MainMenu_GetItems,
  MainMenu_GetComponentCount,
  MainMenu_GetComponentIndex,
  MainMenu_SetComponentIndex,
  MainMenu_GetOwner,
  MainMenu_GetName,
  MainMenu_SetName,
  MainMenu_GetTag,
  MainMenu_SetTag,
  MainMenu_GetComponents,
  MainMenu_StaticClassType;

