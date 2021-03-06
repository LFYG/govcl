
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function TaskDialogButtons_Create(AOwner: TPersistent; ItemClass: TCollectionItemClass): TTaskDialogButtons; extdecl;
begin
  Result :=  TTaskDialogButtons.Create(AOwner, ItemClass);
end;

procedure TaskDialogButtons_Free(AObj: TTaskDialogButtons); extdecl;
begin
  AObj.Free;
end;

function TaskDialogButtons_Add(AObj: TTaskDialogButtons): TTaskDialogBaseButtonItem; extdecl;
begin
  Result :=  AObj.Add;
end;

function TaskDialogButtons_FindButton(AObj: TTaskDialogButtons; AModalResult: TModalResult): TTaskDialogBaseButtonItem; extdecl;
begin
  Result :=  AObj.FindButton(AModalResult);
end;

function TaskDialogButtons_Owner(AObj: TTaskDialogButtons): TPersistent; extdecl;
begin
  Result :=  AObj.Owner;
end;

procedure TaskDialogButtons_Assign(AObj: TTaskDialogButtons; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

procedure TaskDialogButtons_BeginUpdate(AObj: TTaskDialogButtons); extdecl;
begin
  AObj.BeginUpdate;
end;

procedure TaskDialogButtons_Clear(AObj: TTaskDialogButtons); extdecl;
begin
  AObj.Clear;
end;

procedure TaskDialogButtons_Delete(AObj: TTaskDialogButtons; Index: Integer); extdecl;
begin
  AObj.Delete(Index);
end;

procedure TaskDialogButtons_EndUpdate(AObj: TTaskDialogButtons); extdecl;
begin
  AObj.EndUpdate;
end;

function TaskDialogButtons_FindItemID(AObj: TTaskDialogButtons; ID: Integer): TCollectionItem; extdecl;
begin
  Result :=  AObj.FindItemID(ID);
end;

function TaskDialogButtons_GetNamePath(AObj: TTaskDialogButtons): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function TaskDialogButtons_Insert(AObj: TTaskDialogButtons; Index: Integer): TCollectionItem; extdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function TaskDialogButtons_ClassType(AObj: TTaskDialogButtons): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function TaskDialogButtons_ClassName(AObj: TTaskDialogButtons): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function TaskDialogButtons_InstanceSize(AObj: TTaskDialogButtons): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function TaskDialogButtons_InheritsFrom(AObj: TTaskDialogButtons; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function TaskDialogButtons_Equals(AObj: TTaskDialogButtons; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function TaskDialogButtons_GetHashCode(AObj: TTaskDialogButtons): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function TaskDialogButtons_ToString(AObj: TTaskDialogButtons): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function TaskDialogButtons_GetDefaultButton(AObj: TTaskDialogButtons): TTaskDialogBaseButtonItem; extdecl;
begin
  Result :=  AObj.DefaultButton;
end;

procedure TaskDialogButtons_SetDefaultButton(AObj: TTaskDialogButtons; AValue: TTaskDialogBaseButtonItem); extdecl;
begin
  AObj.DefaultButton := AValue;
end;

function TaskDialogButtons_GetCount(AObj: TTaskDialogButtons): Integer; extdecl;
begin
  Result :=  AObj.Count;
end;

function TaskDialogButtons_GetItems(AObj: TTaskDialogButtons; Index: Integer): TTaskDialogBaseButtonItem; extdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure TaskDialogButtons_SetItems(AObj: TTaskDialogButtons; Index: Integer; AValue: TTaskDialogBaseButtonItem); extdecl;
begin
  AObj.Items[Index] := AValue;
end;

function TaskDialogButtons_StaticClassType: TClass; extdecl;
begin
  Result := TTaskDialogButtons;
end;

exports
  TaskDialogButtons_Create,
  TaskDialogButtons_Free,
  TaskDialogButtons_Add,
  TaskDialogButtons_FindButton,
  TaskDialogButtons_Owner,
  TaskDialogButtons_Assign,
  TaskDialogButtons_BeginUpdate,
  TaskDialogButtons_Clear,
  TaskDialogButtons_Delete,
  TaskDialogButtons_EndUpdate,
  TaskDialogButtons_FindItemID,
  TaskDialogButtons_GetNamePath,
  TaskDialogButtons_Insert,
  TaskDialogButtons_ClassType,
  TaskDialogButtons_ClassName,
  TaskDialogButtons_InstanceSize,
  TaskDialogButtons_InheritsFrom,
  TaskDialogButtons_Equals,
  TaskDialogButtons_GetHashCode,
  TaskDialogButtons_ToString,
  TaskDialogButtons_GetDefaultButton,
  TaskDialogButtons_SetDefaultButton,
  TaskDialogButtons_GetCount,
  TaskDialogButtons_GetItems,
  TaskDialogButtons_SetItems,
  TaskDialogButtons_StaticClassType;

