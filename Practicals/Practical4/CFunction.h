#include "root.h"

extern ULONG g_cLock;

class CFunction: public IFunction, ISerialization{
	public:
		CFunction(){
		  m_nRef=0;
		}

		STDMETHOD(QueryInterface)(REFIID, void**);
		STDMETHOD_(ULONG, AddRef)();
		STDMETHOD_(ULONG, Release)();


		STDMETHOD(getValue)(double*);
		STDMETHOD(setValue)(double);

		STDMETHOD(Load)();
		STDMETHOD(Store)();

	protected:
		ULONG m_nRef;
	private:
		double d;

};

class CFunctionClassFactory : public IClassFactory
{
 public:
   CFunctionClassFactory(){
	m_nRef = 0;
	g_cLock++;
	printf("Class factory object created\n");
   }

   ~CFunctionClassFactory(){
	g_cLock--;
	printf("Class factory object destroyed\n");
   }

   STDMETHOD(QueryInterface)(REFIID, void**);
   STDMETHOD_(ULONG, AddRef)();
   STDMETHOD_(ULONG, Release)();

   STDMETHOD(CreateInstance)(LPUNKNOWN, REFIID, void**);
   STDMETHOD(LockServer)(BOOL);

 protected:
   ULONG m_nRef;
   double d;
};
