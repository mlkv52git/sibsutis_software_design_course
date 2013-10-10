class IBase{
public:
	virtual void* DynamicCast(char*)=0;
	virtual void  AddRef()=0;
	virtual void  FreePointer()=0;
};

class IFunction : public IBase{
public:
	virtual double getValue()=0;
	virtual void setValue(double)=0;
};

class ISerialization : public IBase{
public:
	virtual void Load()=0;
	virtual void Store()=0;
};