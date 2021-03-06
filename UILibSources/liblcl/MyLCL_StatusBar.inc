
//----------------------------------------
// The code is automatically generated by the GenlibLcl tool.
// Copyright © ying32. All Rights Reserved.
// 
// Licensed under Apache License 2.0
//
//----------------------------------------

function StatusBar_Create(AOwner: TComponent): TStatusBar; extdecl;
begin
  Result :=  TStatusBar.Create(AOwner);
end;

procedure StatusBar_Free(AObj: TStatusBar); extdecl;
begin
  AObj.Free;
end;

procedure StatusBar_FlipChildren(AObj: TStatusBar; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

procedure StatusBar_SetBounds(AObj: TStatusBar; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

function StatusBar_CanFocus(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function StatusBar_ContainsControl(AObj: TStatusBar; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function StatusBar_ControlAtPos(AObj: TStatusBar; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure StatusBar_DisableAlign(AObj: TStatusBar); extdecl;
begin
  AObj.DisableAlign;
end;

procedure StatusBar_EnableAlign(AObj: TStatusBar); extdecl;
begin
  AObj.EnableAlign;
end;

function StatusBar_FindChildControl(AObj: TStatusBar; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

function StatusBar_Focused(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function StatusBar_HandleAllocated(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure StatusBar_InsertControl(AObj: TStatusBar; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure StatusBar_Invalidate(AObj: TStatusBar); extdecl;
begin
  AObj.Invalidate;
end;

procedure StatusBar_RemoveControl(AObj: TStatusBar; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure StatusBar_Realign(AObj: TStatusBar); extdecl;
begin
  AObj.Realign;
end;

procedure StatusBar_Repaint(AObj: TStatusBar); extdecl;
begin
  AObj.Repaint;
end;

procedure StatusBar_ScaleBy(AObj: TStatusBar; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure StatusBar_ScrollBy(AObj: TStatusBar; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure StatusBar_SetFocus(AObj: TStatusBar); extdecl;
begin
  AObj.SetFocus;
end;

procedure StatusBar_Update(AObj: TStatusBar); extdecl;
begin
  AObj.Update;
end;

procedure StatusBar_BringToFront(AObj: TStatusBar); extdecl;
begin
  AObj.BringToFront;
end;

procedure StatusBar_ClientToScreen(AObj: TStatusBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure StatusBar_ClientToParent(AObj: TStatusBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function StatusBar_Dragging(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function StatusBar_HasParent(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure StatusBar_Hide(AObj: TStatusBar); extdecl;
begin
  AObj.Hide;
end;

function StatusBar_Perform(AObj: TStatusBar; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure StatusBar_Refresh(AObj: TStatusBar); extdecl;
begin
  AObj.Refresh;
end;

procedure StatusBar_ScreenToClient(AObj: TStatusBar; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure StatusBar_ParentToClient(AObj: TStatusBar; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure StatusBar_SendToBack(AObj: TStatusBar); extdecl;
begin
  AObj.SendToBack;
end;

procedure StatusBar_Show(AObj: TStatusBar); extdecl;
begin
  AObj.Show;
end;

function StatusBar_GetTextBuf(AObj: TStatusBar; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function StatusBar_GetTextLen(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure StatusBar_SetTextBuf(AObj: TStatusBar; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function StatusBar_FindComponent(AObj: TStatusBar; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function StatusBar_GetNamePath(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure StatusBar_Assign(AObj: TStatusBar; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function StatusBar_ClassType(AObj: TStatusBar): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function StatusBar_ClassName(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function StatusBar_InstanceSize(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function StatusBar_InheritsFrom(AObj: TStatusBar; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function StatusBar_Equals(AObj: TStatusBar; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function StatusBar_GetHashCode(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function StatusBar_ToString(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function StatusBar_GetAction(AObj: TStatusBar): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure StatusBar_SetAction(AObj: TStatusBar; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function StatusBar_GetAutoHint(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.AutoHint;
end;

procedure StatusBar_SetAutoHint(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.AutoHint := AValue;
end;

function StatusBar_GetAlign(AObj: TStatusBar): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure StatusBar_SetAlign(AObj: TStatusBar; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function StatusBar_GetAnchors(AObj: TStatusBar): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure StatusBar_SetAnchors(AObj: TStatusBar; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function StatusBar_GetBiDiMode(AObj: TStatusBar): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure StatusBar_SetBiDiMode(AObj: TStatusBar; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function StatusBar_GetBorderWidth(AObj: TStatusBar): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure StatusBar_SetBorderWidth(AObj: TStatusBar; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function StatusBar_GetColor(AObj: TStatusBar): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure StatusBar_SetColor(AObj: TStatusBar; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function StatusBar_GetDoubleBuffered(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure StatusBar_SetDoubleBuffered(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function StatusBar_GetDragCursor(AObj: TStatusBar): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure StatusBar_SetDragCursor(AObj: TStatusBar; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function StatusBar_GetDragKind(AObj: TStatusBar): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure StatusBar_SetDragKind(AObj: TStatusBar; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function StatusBar_GetDragMode(AObj: TStatusBar): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure StatusBar_SetDragMode(AObj: TStatusBar; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function StatusBar_GetEnabled(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure StatusBar_SetEnabled(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function StatusBar_GetFont(AObj: TStatusBar): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure StatusBar_SetFont(AObj: TStatusBar; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function StatusBar_GetConstraints(AObj: TStatusBar): TSizeConstraints; extdecl;
begin
  Result :=  AObj.Constraints;
end;

procedure StatusBar_SetConstraints(AObj: TStatusBar; AValue: TSizeConstraints); extdecl;
begin
  AObj.Constraints := AValue;
end;

function StatusBar_GetPanels(AObj: TStatusBar): TStatusPanels; extdecl;
begin
  Result :=  AObj.Panels;
end;

procedure StatusBar_SetPanels(AObj: TStatusBar; AValue: TStatusPanels); extdecl;
begin
  AObj.Panels := AValue;
end;

function StatusBar_GetParentColor(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure StatusBar_SetParentColor(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function StatusBar_GetParentDoubleBuffered(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentDoubleBuffered;
end;

procedure StatusBar_SetParentDoubleBuffered(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.ParentDoubleBuffered := AValue;
end;

function StatusBar_GetParentFont(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure StatusBar_SetParentFont(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function StatusBar_GetParentShowHint(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure StatusBar_SetParentShowHint(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function StatusBar_GetPopupMenu(AObj: TStatusBar): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure StatusBar_SetPopupMenu(AObj: TStatusBar; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function StatusBar_GetShowHint(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure StatusBar_SetShowHint(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function StatusBar_GetSimplePanel(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.SimplePanel;
end;

procedure StatusBar_SetSimplePanel(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.SimplePanel := AValue;
end;

function StatusBar_GetSimpleText(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.SimpleText);
end;

procedure StatusBar_SetSimpleText(AObj: TStatusBar; AValue: PChar); extdecl;
begin
  AObj.SimpleText := AValue;
end;

function StatusBar_GetSizeGrip(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.SizeGrip;
end;

procedure StatusBar_SetSizeGrip(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.SizeGrip := AValue;
end;

function StatusBar_GetUseSystemFont(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.UseSystemFont;
end;

procedure StatusBar_SetUseSystemFont(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.UseSystemFont := AValue;
end;

function StatusBar_GetVisible(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure StatusBar_SetVisible(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure StatusBar_SetOnClick(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure StatusBar_SetOnContextPopup(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure StatusBar_SetOnDblClick(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure StatusBar_SetOnDragDrop(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure StatusBar_SetOnDragOver(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure StatusBar_SetOnEndDock(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure StatusBar_SetOnEndDrag(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure StatusBar_SetOnHint(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnHint}
  {$DEFINE EventMethodName := OnHint}
  EventMethodCode
end;

procedure StatusBar_SetOnMouseDown(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure StatusBar_SetOnMouseEnter(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure StatusBar_SetOnMouseLeave(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure StatusBar_SetOnMouseMove(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure StatusBar_SetOnMouseUp(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure StatusBar_SetOnResize(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure StatusBar_SetOnStartDock(AObj: TStatusBar; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

function StatusBar_GetCanvas(AObj: TStatusBar): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function StatusBar_GetDockClientCount(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function StatusBar_GetDockSite(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure StatusBar_SetDockSite(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function StatusBar_GetMouseInClient(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.MouseInClient;
end;

function StatusBar_GetVisibleDockClientCount(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function StatusBar_GetBrush(AObj: TStatusBar): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function StatusBar_GetControlCount(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function StatusBar_GetHandle(AObj: TStatusBar): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function StatusBar_GetParentWindow(AObj: TStatusBar): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure StatusBar_SetParentWindow(AObj: TStatusBar; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function StatusBar_GetTabOrder(AObj: TStatusBar): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure StatusBar_SetTabOrder(AObj: TStatusBar; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function StatusBar_GetTabStop(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure StatusBar_SetTabStop(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function StatusBar_GetUseDockManager(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure StatusBar_SetUseDockManager(AObj: TStatusBar; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

procedure StatusBar_GetBoundsRect(AObj: TStatusBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure StatusBar_SetBoundsRect(AObj: TStatusBar; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function StatusBar_GetClientHeight(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure StatusBar_SetClientHeight(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure StatusBar_GetClientOrigin(AObj: TStatusBar; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure StatusBar_GetClientRect(AObj: TStatusBar; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function StatusBar_GetClientWidth(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure StatusBar_SetClientWidth(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function StatusBar_GetControlState(AObj: TStatusBar): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure StatusBar_SetControlState(AObj: TStatusBar; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function StatusBar_GetControlStyle(AObj: TStatusBar): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure StatusBar_SetControlStyle(AObj: TStatusBar; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function StatusBar_GetFloating(AObj: TStatusBar): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function StatusBar_GetParent(AObj: TStatusBar): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure StatusBar_SetParent(AObj: TStatusBar; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function StatusBar_GetLeft(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure StatusBar_SetLeft(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function StatusBar_GetTop(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure StatusBar_SetTop(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function StatusBar_GetWidth(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure StatusBar_SetWidth(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function StatusBar_GetHeight(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure StatusBar_SetHeight(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function StatusBar_GetCursor(AObj: TStatusBar): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure StatusBar_SetCursor(AObj: TStatusBar; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function StatusBar_GetHint(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure StatusBar_SetHint(AObj: TStatusBar; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function StatusBar_GetComponentCount(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function StatusBar_GetComponentIndex(AObj: TStatusBar): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure StatusBar_SetComponentIndex(AObj: TStatusBar; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function StatusBar_GetOwner(AObj: TStatusBar): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function StatusBar_GetName(AObj: TStatusBar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure StatusBar_SetName(AObj: TStatusBar; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function StatusBar_GetTag(AObj: TStatusBar): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure StatusBar_SetTag(AObj: TStatusBar; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function StatusBar_GetDockClients(AObj: TStatusBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function StatusBar_GetControls(AObj: TStatusBar; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function StatusBar_GetComponents(AObj: TStatusBar; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function StatusBar_GetMargins(AObj: TStatusBar): TControlBorderSpacing; extdecl;
begin
  Result := AObj.BorderSpacing;
end;

procedure StatusBar_SetMargins(AObj: TStatusBar; AValue: TControlBorderSpacing); extdecl;
begin
  AObj.BorderSpacing := AValue;
end;

function StatusBar_StaticClassType: TClass; extdecl;
begin
  Result := TStatusBar;
end;

exports
  StatusBar_Create,
  StatusBar_Free,
  StatusBar_FlipChildren,
  StatusBar_SetBounds,
  StatusBar_CanFocus,
  StatusBar_ContainsControl,
  StatusBar_ControlAtPos,
  StatusBar_DisableAlign,
  StatusBar_EnableAlign,
  StatusBar_FindChildControl,
  StatusBar_Focused,
  StatusBar_HandleAllocated,
  StatusBar_InsertControl,
  StatusBar_Invalidate,
  StatusBar_RemoveControl,
  StatusBar_Realign,
  StatusBar_Repaint,
  StatusBar_ScaleBy,
  StatusBar_ScrollBy,
  StatusBar_SetFocus,
  StatusBar_Update,
  StatusBar_BringToFront,
  StatusBar_ClientToScreen,
  StatusBar_ClientToParent,
  StatusBar_Dragging,
  StatusBar_HasParent,
  StatusBar_Hide,
  StatusBar_Perform,
  StatusBar_Refresh,
  StatusBar_ScreenToClient,
  StatusBar_ParentToClient,
  StatusBar_SendToBack,
  StatusBar_Show,
  StatusBar_GetTextBuf,
  StatusBar_GetTextLen,
  StatusBar_SetTextBuf,
  StatusBar_FindComponent,
  StatusBar_GetNamePath,
  StatusBar_Assign,
  StatusBar_ClassType,
  StatusBar_ClassName,
  StatusBar_InstanceSize,
  StatusBar_InheritsFrom,
  StatusBar_Equals,
  StatusBar_GetHashCode,
  StatusBar_ToString,
  StatusBar_GetAction,
  StatusBar_SetAction,
  StatusBar_GetAutoHint,
  StatusBar_SetAutoHint,
  StatusBar_GetAlign,
  StatusBar_SetAlign,
  StatusBar_GetAnchors,
  StatusBar_SetAnchors,
  StatusBar_GetBiDiMode,
  StatusBar_SetBiDiMode,
  StatusBar_GetBorderWidth,
  StatusBar_SetBorderWidth,
  StatusBar_GetColor,
  StatusBar_SetColor,
  StatusBar_GetDoubleBuffered,
  StatusBar_SetDoubleBuffered,
  StatusBar_GetDragCursor,
  StatusBar_SetDragCursor,
  StatusBar_GetDragKind,
  StatusBar_SetDragKind,
  StatusBar_GetDragMode,
  StatusBar_SetDragMode,
  StatusBar_GetEnabled,
  StatusBar_SetEnabled,
  StatusBar_GetFont,
  StatusBar_SetFont,
  StatusBar_GetConstraints,
  StatusBar_SetConstraints,
  StatusBar_GetPanels,
  StatusBar_SetPanels,
  StatusBar_GetParentColor,
  StatusBar_SetParentColor,
  StatusBar_GetParentDoubleBuffered,
  StatusBar_SetParentDoubleBuffered,
  StatusBar_GetParentFont,
  StatusBar_SetParentFont,
  StatusBar_GetParentShowHint,
  StatusBar_SetParentShowHint,
  StatusBar_GetPopupMenu,
  StatusBar_SetPopupMenu,
  StatusBar_GetShowHint,
  StatusBar_SetShowHint,
  StatusBar_GetSimplePanel,
  StatusBar_SetSimplePanel,
  StatusBar_GetSimpleText,
  StatusBar_SetSimpleText,
  StatusBar_GetSizeGrip,
  StatusBar_SetSizeGrip,
  StatusBar_GetUseSystemFont,
  StatusBar_SetUseSystemFont,
  StatusBar_GetVisible,
  StatusBar_SetVisible,
  StatusBar_SetOnClick,
  StatusBar_SetOnContextPopup,
  StatusBar_SetOnDblClick,
  StatusBar_SetOnDragDrop,
  StatusBar_SetOnDragOver,
  StatusBar_SetOnEndDock,
  StatusBar_SetOnEndDrag,
  StatusBar_SetOnHint,
  StatusBar_SetOnMouseDown,
  StatusBar_SetOnMouseEnter,
  StatusBar_SetOnMouseLeave,
  StatusBar_SetOnMouseMove,
  StatusBar_SetOnMouseUp,
  StatusBar_SetOnResize,
  StatusBar_SetOnStartDock,
  StatusBar_GetCanvas,
  StatusBar_GetDockClientCount,
  StatusBar_GetDockSite,
  StatusBar_SetDockSite,
  StatusBar_GetMouseInClient,
  StatusBar_GetVisibleDockClientCount,
  StatusBar_GetBrush,
  StatusBar_GetControlCount,
  StatusBar_GetHandle,
  StatusBar_GetParentWindow,
  StatusBar_SetParentWindow,
  StatusBar_GetTabOrder,
  StatusBar_SetTabOrder,
  StatusBar_GetTabStop,
  StatusBar_SetTabStop,
  StatusBar_GetUseDockManager,
  StatusBar_SetUseDockManager,
  StatusBar_GetBoundsRect,
  StatusBar_SetBoundsRect,
  StatusBar_GetClientHeight,
  StatusBar_SetClientHeight,
  StatusBar_GetClientOrigin,
  StatusBar_GetClientRect,
  StatusBar_GetClientWidth,
  StatusBar_SetClientWidth,
  StatusBar_GetControlState,
  StatusBar_SetControlState,
  StatusBar_GetControlStyle,
  StatusBar_SetControlStyle,
  StatusBar_GetFloating,
  StatusBar_GetParent,
  StatusBar_SetParent,
  StatusBar_GetLeft,
  StatusBar_SetLeft,
  StatusBar_GetTop,
  StatusBar_SetTop,
  StatusBar_GetWidth,
  StatusBar_SetWidth,
  StatusBar_GetHeight,
  StatusBar_SetHeight,
  StatusBar_GetCursor,
  StatusBar_SetCursor,
  StatusBar_GetHint,
  StatusBar_SetHint,
  StatusBar_GetComponentCount,
  StatusBar_GetComponentIndex,
  StatusBar_SetComponentIndex,
  StatusBar_GetOwner,
  StatusBar_GetName,
  StatusBar_SetName,
  StatusBar_GetTag,
  StatusBar_SetTag,
  StatusBar_GetDockClients,
  StatusBar_GetControls,
  StatusBar_GetComponents,
  StatusBar_StaticClassType,
  StatusBar_GetMargins,
  StatusBar_SetMargins;

