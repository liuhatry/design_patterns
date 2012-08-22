#ifndef BUILDER
#define BUILDER

class builder{
	public:
		builder();
		~builder();
		virtual void buildPart1()=0;
		virtual void buildPart2()=0;
};
#endif
