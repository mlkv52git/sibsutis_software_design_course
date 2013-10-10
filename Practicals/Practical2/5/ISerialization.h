class ISerialization{
public:
	virtual void Delete()=0;
	virtual void Load()=0;
	virtual void Store()=0;
};