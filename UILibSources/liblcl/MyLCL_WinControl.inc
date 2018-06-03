
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function WinControl_Create(AOwner: TComponent): TWinControl; extdecl;
begin
  Result :=  TWinControl.Create(AOwner);
end;

procedure WinControl_Free(AObj: TWinControl); extdecl;
begin
  AObj.Free;
end;

function WinControl_CanFocus(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

procedure WinControl_FlipChildren(AObj: TWinControl; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function WinControl_Focused(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function WinControl_HandleAllocated(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure WinControl_Invalidate(AObj: TWinControl); extdecl;
begin
  AObj.Invalidate;
end;

procedure WinControl_Realign(AObj: TWinControl); extdecl;
begin
  AObj.Realign;
end;

procedure WinControl_Repaint(AObj: TWinControl); extdecl;
begin
  AObj.Repaint;
end;

procedure WinControl_ScaleBy(AObj: TWinControl; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure WinControl_SetBounds(AObj: TWinControl; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure WinControl_SetFocus(AObj: TWinControl); extdecl;
begin
  AObj.SetFocus;
end;

procedure WinControl_Update(AObj: TWinControl); extdecl;
begin
  AObj.Update;
end;

procedure WinControl_BringToFront(AObj: TWinControl); extdecl;
begin
  AObj.BringToFront;
end;

procedure WinControl_ClientToScreen(AObj: TWinControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure WinControl_ClientToParent(AObj: TWinControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function WinControl_Dragging(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function WinControl_HasParent(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure WinControl_Hide(AObj: TWinControl); extdecl;
begin
  AObj.Hide;
end;

function WinControl_Perform(AObj: TWinControl; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure WinControl_Refresh(AObj: TWinControl); extdecl;
begin
  AObj.Refresh;
end;

procedure WinControl_ScreenToClient(AObj: TWinControl; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure WinControl_ParentToClient(AObj: TWinControl; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure WinControl_SendToBack(AObj: TWinControl); extdecl;
begin
  AObj.SendToBack;
end;

procedure WinControl_Show(AObj: TWinControl); extdecl;
begin
  AObj.Show;
end;

function WinControl_GetTextBuf(AObj: TWinControl; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function WinControl_GetTextLen(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

function WinControl_FindComponent(AObj: TWinControl; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function WinControl_GetNamePath(AObj: TWinControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure WinControl_Assign(AObj: TWinControl; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function WinControl_ClassType(AObj: TWinControl): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function WinControl_ClassName(AObj: TWinControl): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function WinControl_InstanceSize(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function WinControl_InheritsFrom(AObj: TWinControl; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function WinControl_Equals(AObj: TWinControl; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function WinControl_GetHashCode(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function WinControl_ToString(AObj: TWinControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function WinControl_GetDockSite(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure WinControl_SetDockSite(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function WinControl_GetDoubleBuffered(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure WinControl_SetDoubleBuffered(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function WinControl_GetBrush(AObj: TWinControl): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function WinControl_GetControlCount(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function WinControl_GetHandle(AObj: TWinControl): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function WinControl_GetParentWindow(AObj: TWinControl): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure WinControl_SetParentWindow(AObj: TWinControl; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function WinControl_GetTabOrder(AObj: TWinControl): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure WinControl_SetTabOrder(AObj: TWinControl; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function WinControl_GetTabStop(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure WinControl_SetTabStop(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function WinControl_GetUseDockManager(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure WinControl_SetUseDockManager(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function WinControl_GetEnabled(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure WinControl_SetEnabled(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function WinControl_GetAction(AObj: TWinControl): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure WinControl_SetAction(AObj: TWinControl; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function WinControl_GetAlign(AObj: TWinControl): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure WinControl_SetAlign(AObj: TWinControl; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function WinControl_GetAnchors(AObj: TWinControl): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure WinControl_SetAnchors(AObj: TWinControl; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function WinControl_GetBiDiMode(AObj: TWinControl): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure WinControl_SetBiDiMode(AObj: TWinControl; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

procedure WinControl_GetBoundsRect(AObj: TWinControl; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure WinControl_SetBoundsRect(AObj: TWinControl; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function WinControl_GetClientHeight(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure WinControl_SetClientHeight(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure WinControl_GetClientRect(AObj: TWinControl; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function WinControl_GetClientWidth(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure WinControl_SetClientWidth(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function WinControl_GetFloating(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function WinControl_GetShowHint(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure WinControl_SetShowHint(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function WinControl_GetVisible(AObj: TWinControl): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure WinControl_SetVisible(AObj: TWinControl; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function WinControl_GetParent(AObj: TWinControl): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure WinControl_SetParent(AObj: TWinControl; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function WinControl_GetLeft(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure WinControl_SetLeft(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function WinControl_GetTop(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure WinControl_SetTop(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function WinControl_GetWidth(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure WinControl_SetWidth(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function WinControl_GetHeight(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure WinControl_SetHeight(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function WinControl_GetCursor(AObj: TWinControl): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure WinControl_SetCursor(AObj: TWinControl; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function WinControl_GetHint(AObj: TWinControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure WinControl_SetHint(AObj: TWinControl; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function WinControl_GetComponentCount(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function WinControl_GetComponentIndex(AObj: TWinControl): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure WinControl_SetComponentIndex(AObj: TWinControl; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function WinControl_GetOwner(AObj: TWinControl): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function WinControl_GetName(AObj: TWinControl): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure WinControl_SetName(AObj: TWinControl; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function WinControl_GetTag(AObj: TWinControl): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure WinControl_SetTag(AObj: TWinControl; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function WinControl_GetControls(AObj: TWinControl; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function WinControl_GetComponents(AObj: TWinControl; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function WinControl_StaticClassType: TClass; extdecl;
begin
  Result := TWinControl;
end;

exports
  WinControl_Create,
  WinControl_Free,
  WinControl_CanFocus,
  WinControl_FlipChildren,
  WinControl_Focused,
  WinControl_HandleAllocated,
  WinControl_Invalidate,
  WinControl_Realign,
  WinControl_Repaint,
  WinControl_ScaleBy,
  WinControl_SetBounds,
  WinControl_SetFocus,
  WinControl_Update,
  WinControl_BringToFront,
  WinControl_ClientToScreen,
  WinControl_ClientToParent,
  WinControl_Dragging,
  WinControl_HasParent,
  WinControl_Hide,
  WinControl_Perform,
  WinControl_Refresh,
  WinControl_ScreenToClient,
  WinControl_ParentToClient,
  WinControl_SendToBack,
  WinControl_Show,
  WinControl_GetTextBuf,
  WinControl_GetTextLen,
  WinControl_FindComponent,
  WinControl_GetNamePath,
  WinControl_Assign,
  WinControl_ClassType,
  WinControl_ClassName,
  WinControl_InstanceSize,
  WinControl_InheritsFrom,
  WinControl_Equals,
  WinControl_GetHashCode,
  WinControl_ToString,
  WinControl_GetDockSite,
  WinControl_SetDockSite,
  WinControl_GetDoubleBuffered,
  WinControl_SetDoubleBuffered,
  WinControl_GetBrush,
  WinControl_GetControlCount,
  WinControl_GetHandle,
  WinControl_GetParentWindow,
  WinControl_SetParentWindow,
  WinControl_GetTabOrder,
  WinControl_SetTabOrder,
  WinControl_GetTabStop,
  WinControl_SetTabStop,
  WinControl_GetUseDockManager,
  WinControl_SetUseDockManager,
  WinControl_GetEnabled,
  WinControl_SetEnabled,
  WinControl_GetAction,
  WinControl_SetAction,
  WinControl_GetAlign,
  WinControl_SetAlign,
  WinControl_GetAnchors,
  WinControl_SetAnchors,
  WinControl_GetBiDiMode,
  WinControl_SetBiDiMode,
  WinControl_GetBoundsRect,
  WinControl_SetBoundsRect,
  WinControl_GetClientHeight,
  WinControl_SetClientHeight,
  WinControl_GetClientRect,
  WinControl_GetClientWidth,
  WinControl_SetClientWidth,
  WinControl_GetFloating,
  WinControl_GetShowHint,
  WinControl_SetShowHint,
  WinControl_GetVisible,
  WinControl_SetVisible,
  WinControl_GetParent,
  WinControl_SetParent,
  WinControl_GetLeft,
  WinControl_SetLeft,
  WinControl_GetTop,
  WinControl_SetTop,
  WinControl_GetWidth,
  WinControl_SetWidth,
  WinControl_GetHeight,
  WinControl_SetHeight,
  WinControl_GetCursor,
  WinControl_SetCursor,
  WinControl_GetHint,
  WinControl_SetHint,
  WinControl_GetComponentCount,
  WinControl_GetComponentIndex,
  WinControl_SetComponentIndex,
  WinControl_GetOwner,
  WinControl_GetName,
  WinControl_SetName,
  WinControl_GetTag,
  WinControl_SetTag,
  WinControl_GetControls,
  WinControl_GetComponents,
  WinControl_StaticClassType;
