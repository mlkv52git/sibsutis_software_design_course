class IFunction : public IUnknown{
 public:
   STDMETHOD(getValue)(double*)=0;
   STDMETHOD(setValue)(double)=0;	
};

class ISerialization : public IUnknown{
 public:
   STDMETHOD(Load)()=0;
   STDMETHOD(Store)()=0;	
};




