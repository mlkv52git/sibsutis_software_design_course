
ATLTest2013ps.dll: dlldata.obj ATLTest2013_p.obj ATLTest2013_i.obj
	link /dll /out:ATLTest2013ps.dll /def:ATLTest2013ps.def /entry:DllMain dlldata.obj ATLTest2013_p.obj ATLTest2013_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \

.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ATLTest2013ps.dll
	@del ATLTest2013ps.lib
	@del ATLTest2013ps.exp
	@del dlldata.obj
	@del ATLTest2013_p.obj
	@del ATLTest2013_i.obj
