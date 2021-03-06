// 由res2go自动生成，不要编辑。
package main

import (
    "github.com/ying32/govcl/vcl"
)

type TMainForm struct {
    *vcl.TForm
    Splitter1  *vcl.TSplitter
    ToolBar1   *vcl.TToolBar
    StatusBar1 *vcl.TStatusBar
    Panel1     *vcl.TPanel
    Panel3     *vcl.TPanel
    Panel4     *vcl.TPanel `events:"OnPanel3MouseEnter,OnPanel3MouseLeave"`
    Panel5     *vcl.TPanel `events:"OnPanel3MouseEnter,OnPanel3MouseLeave"`
    Panel2     *vcl.TPanel
    Label1     *vcl.TLabel
    Button1    *vcl.TButton
    Button2    *vcl.TButton
    Button3    *vcl.TButton `events:"OnButton2Click"`
    Button4    *vcl.TButton `events:"OnButton2Click"`

    //::private::
    TMainFormFields
}

var MainForm *TMainForm




// 以字节形式加载
// vcl.Application.CreateForm(&MainForm)

func NewMainForm(owner vcl.IComponent) (root *TMainForm)  {
    vcl.CreateResForm(owner, &root)
    return
}

var mainFormBytes = []byte("\x54\x50\x46\x30\x09\x54\x4D\x61\x69\x6E\x46\x6F\x72\x6D\x08\x4D\x61\x69\x6E\x46\x6F\x72\x6D\x04\x4C\x65\x66\x74\x02\x00\x03\x54\x6F\x70\x02\x00\x0B\x42\x6F\x72\x64\x65\x72\x53\x74\x79\x6C\x65\x07\x08\x62\x73\x44\x69\x61\x6C\x6F\x67\x07\x43\x61\x70\x74\x69\x6F\x6E\x12\x03\x00\x00\x00\x3B\x4E\x97\x7A\xE3\x53\x0C\x43\x6C\x69\x65\x6E\x74\x48\x65\x69\x67\x68\x74\x03\x1E\x01\x0B\x43\x6C\x69\x65\x6E\x74\x57\x69\x64\x74\x68\x03\xE6\x01\x05\x43\x6F\x6C\x6F\x72\x07\x09\x63\x6C\x42\x74\x6E\x46\x61\x63\x65\x0C\x46\x6F\x6E\x74\x2E\x43\x68\x61\x72\x73\x65\x74\x07\x0F\x44\x45\x46\x41\x55\x4C\x54\x5F\x43\x48\x41\x52\x53\x45\x54\x0A\x46\x6F\x6E\x74\x2E\x43\x6F\x6C\x6F\x72\x07\x0C\x63\x6C\x57\x69\x6E\x64\x6F\x77\x54\x65\x78\x74\x0B\x46\x6F\x6E\x74\x2E\x48\x65\x69\x67\x68\x74\x02\xF5\x09\x46\x6F\x6E\x74\x2E\x4E\x61\x6D\x65\x06\x06\x54\x61\x68\x6F\x6D\x61\x0A\x46\x6F\x6E\x74\x2E\x53\x74\x79\x6C\x65\x0B\x00\x0E\x4F\x6C\x64\x43\x72\x65\x61\x74\x65\x4F\x72\x64\x65\x72\x08\x08\x50\x6F\x73\x69\x74\x69\x6F\x6E\x07\x0E\x70\x6F\x53\x63\x72\x65\x65\x6E\x43\x65\x6E\x74\x65\x72\x08\x4F\x6E\x43\x72\x65\x61\x74\x65\x07\x0A\x46\x6F\x72\x6D\x43\x72\x65\x61\x74\x65\x0D\x50\x69\x78\x65\x6C\x73\x50\x65\x72\x49\x6E\x63\x68\x02\x60\x0A\x54\x65\x78\x74\x48\x65\x69\x67\x68\x74\x02\x0D\x00\x09\x54\x53\x70\x6C\x69\x74\x74\x65\x72\x09\x53\x70\x6C\x69\x74\x74\x65\x72\x31\x04\x4C\x65\x66\x74\x03\xB9\x00\x03\x54\x6F\x70\x02\x1D\x06\x48\x65\x69\x67\x68\x74\x03\xEB\x00\x0C\x45\x78\x70\x6C\x69\x63\x69\x74\x4C\x65\x66\x74\x03\xBA\x00\x00\x00\x08\x54\x54\x6F\x6F\x6C\x42\x61\x72\x08\x54\x6F\x6F\x6C\x42\x61\x72\x31\x04\x4C\x65\x66\x74\x02\x00\x03\x54\x6F\x70\x02\x00\x05\x57\x69\x64\x74\x68\x03\xE6\x01\x06\x48\x65\x69\x67\x68\x74\x02\x1D\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x08\x54\x6F\x6F\x6C\x42\x61\x72\x31\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x00\x00\x00\x0A\x54\x53\x74\x61\x74\x75\x73\x42\x61\x72\x0A\x53\x74\x61\x74\x75\x73\x42\x61\x72\x31\x04\x4C\x65\x66\x74\x02\x00\x03\x54\x6F\x70\x03\x08\x01\x05\x57\x69\x64\x74\x68\x03\xE6\x01\x06\x48\x65\x69\x67\x68\x74\x02\x16\x06\x50\x61\x6E\x65\x6C\x73\x0E\x00\x00\x00\x06\x54\x50\x61\x6E\x65\x6C\x06\x50\x61\x6E\x65\x6C\x31\x04\x4C\x65\x66\x74\x02\x00\x03\x54\x6F\x70\x02\x1D\x05\x57\x69\x64\x74\x68\x03\xB9\x00\x06\x48\x65\x69\x67\x68\x74\x03\xEB\x00\x05\x41\x6C\x69\x67\x6E\x07\x06\x61\x6C\x4C\x65\x66\x74\x0A\x42\x65\x76\x65\x6C\x4F\x75\x74\x65\x72\x07\x06\x62\x76\x4E\x6F\x6E\x65\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x02\x00\x06\x54\x50\x61\x6E\x65\x6C\x06\x50\x61\x6E\x65\x6C\x33\x04\x4C\x65\x66\x74\x02\x1A\x03\x54\x6F\x70\x02\x2F\x05\x57\x69\x64\x74\x68\x02\x57\x06\x48\x65\x69\x67\x68\x74\x02\x29\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x06\x50\x61\x6E\x65\x6C\x33\x05\x43\x6F\x6C\x6F\x72\x07\x05\x63\x6C\x52\x65\x64\x10\x50\x61\x72\x65\x6E\x74\x42\x61\x63\x6B\x67\x72\x6F\x75\x6E\x64\x08\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x00\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x00\x00\x06\x54\x50\x61\x6E\x65\x6C\x06\x50\x61\x6E\x65\x6C\x34\x04\x4C\x65\x66\x74\x02\x1A\x03\x54\x6F\x70\x02\x5E\x05\x57\x69\x64\x74\x68\x02\x57\x06\x48\x65\x69\x67\x68\x74\x02\x29\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x06\x50\x61\x6E\x65\x6C\x34\x05\x43\x6F\x6C\x6F\x72\x07\x07\x63\x6C\x47\x72\x65\x65\x6E\x10\x50\x61\x72\x65\x6E\x74\x42\x61\x63\x6B\x67\x72\x6F\x75\x6E\x64\x08\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x01\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x00\x00\x06\x54\x50\x61\x6E\x65\x6C\x06\x50\x61\x6E\x65\x6C\x35\x04\x4C\x65\x66\x74\x02\x1A\x03\x54\x6F\x70\x03\x8D\x00\x05\x57\x69\x64\x74\x68\x02\x57\x06\x48\x65\x69\x67\x68\x74\x02\x29\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x06\x50\x61\x6E\x65\x6C\x35\x05\x43\x6F\x6C\x6F\x72\x07\x06\x63\x6C\x42\x6C\x75\x65\x10\x50\x61\x72\x65\x6E\x74\x42\x61\x63\x6B\x67\x72\x6F\x75\x6E\x64\x08\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x02\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x45\x6E\x74\x65\x72\x0C\x4F\x6E\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x07\x10\x50\x61\x6E\x65\x6C\x33\x4D\x6F\x75\x73\x65\x4C\x65\x61\x76\x65\x00\x00\x00\x06\x54\x50\x61\x6E\x65\x6C\x06\x50\x61\x6E\x65\x6C\x32\x04\x4C\x65\x66\x74\x03\xBC\x00\x03\x54\x6F\x70\x02\x1D\x05\x57\x69\x64\x74\x68\x03\x2A\x01\x06\x48\x65\x69\x67\x68\x74\x03\xEB\x00\x05\x41\x6C\x69\x67\x6E\x07\x08\x61\x6C\x43\x6C\x69\x65\x6E\x74\x0A\x42\x65\x76\x65\x6C\x4F\x75\x74\x65\x72\x07\x06\x62\x76\x4E\x6F\x6E\x65\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x03\x00\x06\x54\x4C\x61\x62\x65\x6C\x06\x4C\x61\x62\x65\x6C\x31\x04\x4C\x65\x66\x74\x02\x68\x03\x54\x6F\x70\x03\x80\x00\x05\x57\x69\x64\x74\x68\x02\x41\x06\x48\x65\x69\x67\x68\x74\x02\x0D\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x0C\x53\x68\x61\x72\x65\x64\x20\x45\x76\x65\x6E\x74\x00\x00\x07\x54\x42\x75\x74\x74\x6F\x6E\x07\x42\x75\x74\x74\x6F\x6E\x31\x04\x4C\x65\x66\x74\x02\x58\x03\x54\x6F\x70\x02\x38\x05\x57\x69\x64\x74\x68\x02\x4B\x06\x48\x65\x69\x67\x68\x74\x02\x19\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x0A\x53\x68\x6F\x77\x20\x41\x62\x6F\x75\x74\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x00\x07\x4F\x6E\x43\x6C\x69\x63\x6B\x07\x0C\x42\x75\x74\x74\x6F\x6E\x31\x43\x6C\x69\x63\x6B\x00\x00\x07\x54\x42\x75\x74\x74\x6F\x6E\x07\x42\x75\x74\x74\x6F\x6E\x32\x04\x4C\x65\x66\x74\x02\x30\x03\x54\x6F\x70\x03\xA8\x00\x05\x57\x69\x64\x74\x68\x02\x4B\x06\x48\x65\x69\x67\x68\x74\x02\x19\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x07\x42\x75\x74\x74\x6F\x6E\x32\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x01\x07\x4F\x6E\x43\x6C\x69\x63\x6B\x07\x0C\x42\x75\x74\x74\x6F\x6E\x32\x43\x6C\x69\x63\x6B\x00\x00\x07\x54\x42\x75\x74\x74\x6F\x6E\x07\x42\x75\x74\x74\x6F\x6E\x33\x04\x4C\x65\x66\x74\x03\x81\x00\x03\x54\x6F\x70\x03\xA8\x00\x05\x57\x69\x64\x74\x68\x02\x4B\x06\x48\x65\x69\x67\x68\x74\x02\x19\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x07\x42\x75\x74\x74\x6F\x6E\x33\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x02\x07\x4F\x6E\x43\x6C\x69\x63\x6B\x07\x0C\x42\x75\x74\x74\x6F\x6E\x32\x43\x6C\x69\x63\x6B\x00\x00\x07\x54\x42\x75\x74\x74\x6F\x6E\x07\x42\x75\x74\x74\x6F\x6E\x34\x04\x4C\x65\x66\x74\x03\xD2\x00\x03\x54\x6F\x70\x03\xA8\x00\x05\x57\x69\x64\x74\x68\x02\x4B\x06\x48\x65\x69\x67\x68\x74\x02\x19\x07\x43\x61\x70\x74\x69\x6F\x6E\x06\x07\x42\x75\x74\x74\x6F\x6E\x34\x08\x54\x61\x62\x4F\x72\x64\x65\x72\x02\x03\x07\x4F\x6E\x43\x6C\x69\x63\x6B\x07\x0C\x42\x75\x74\x74\x6F\x6E\x32\x43\x6C\x69\x63\x6B\x00\x00\x00\x00")

// 注册Form资源
var _ = vcl.RegisterFormResource(MainForm, &mainFormBytes)
