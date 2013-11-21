VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2220
   ClientLeft      =   108
   ClientTop       =   432
   ClientWidth     =   3624
   LinkTopic       =   "Form1"
   ScaleHeight     =   2220
   ScaleWidth      =   3624
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command3 
      Caption         =   "Test2013"
      Height          =   372
      Left            =   240
      TabIndex        =   4
      Top             =   1560
      Width           =   2412
   End
   Begin VB.CommandButton Command2 
      Caption         =   "get"
      Height          =   492
      Left            =   1440
      TabIndex        =   3
      Top             =   840
      Width           =   1212
   End
   Begin VB.TextBox Text2 
      Height          =   492
      Left            =   1440
      TabIndex        =   2
      Text            =   "Text2"
      Top             =   120
      Width           =   1212
   End
   Begin VB.TextBox Text1 
      Height          =   492
      Left            =   240
      TabIndex        =   1
      Text            =   "Text1"
      Top             =   120
      Width           =   972
   End
   Begin VB.CommandButton Command1 
      Caption         =   "set"
      Height          =   492
      Left            =   240
      TabIndex        =   0
      Top             =   840
      Width           =   972
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim obj
Dim V As Double

Private Sub Command1_Click()
obj.Val = Text1.Text
End Sub

Private Sub Command2_Click()
V = obj.Val
Text2.Text = V
End Sub

Private Sub Command3_Click()
obj.Test2013
End Sub

Private Sub Form_Load()
Set obj = CreateObject("ATLTest2013.ForStudents.1")
Text1.Text = ""
Text2.Text = ""
End Sub
