#include<stdio.h>
#include<math.h>
#include<string.h>

int width=6,height=11;

char spc='*';


void n0(int jindex)
{
	for(int i=0; i<=width;i++)
	{
		if(i%width==0 && jindex!=0 && jindex!=height-1)
			printf("%c ",spc);
		else if(jindex%(height-1)==0 && i!=width && i!=0)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");//space
}

void n1(int jindex)
{
	int wt=width;
	if(width%2!=0){
		wt=width-1;
	}
	for(int i=0; i<=wt;i++)
		{
			if(jindex<=height/3 && i<wt/2 && i==(width-jindex/2)/2)
			{
				printf("%c ",spc);
			}
			else if(jindex==(height-1))
				printf("%c ",spc);
			else if(width/2==i)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

void n2(int jindex)
{
	for(int i=0; i<=width;i++)
	{
		if(i%width==0 && jindex!=0 && jindex!=height/2 && jindex!=height-1)
			printf("%c ",spc);
		else if(jindex%(height-1)==0 && i!=width && i!=0)
			printf("%c ",spc);
		else if(jindex%((height)/2)==0 && ((height)/2)==jindex && i!=width&& i!=0)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");//space
}

void n6(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%(width+1)==0 || (jindex>=(height)/2 && i==width))
				printf("%c ",spc);
			else if(jindex%((height)/2)==0) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}


void n8(int jindex)
{
	for(int i=0; i<=width;i++)
	{
		if(i%width==0 && jindex!=0 && jindex!=height/2 && jindex!=height-1)
			printf("%c ",spc);
		else if(jindex%(height-1)==0 && i!=width && i!=0)
			printf("%c ",spc);
		else if(jindex%((height)/2)==0 && ((height)/2)==jindex && i!=width&& i!=0)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");//space
}


void a(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0)
				printf("%c ",spc);
			else if(jindex%((height)/2)==0 && ((height)/2)>=jindex) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void b(int jindex)
{
	for(int i=0; i<=width;i++)
	{
		if(i%width==0 && jindex!=0 && jindex!=height/2 && jindex!=height-1)
			printf("%c ",spc);
		else if(jindex%(height-1)==0 && i!=width)
			printf("%c ",spc);
		else if(jindex%((height)/2)==0 && ((height)/2)==jindex && i!=width)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");//space
}

void c(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(jindex%(height-1)==0)
				printf("%c ",spc);
			else if(i==0)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

void d(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && jindex!=0 && jindex!=height-1)
				printf("%c ",spc);
			else if(jindex%(height-1)==0 && i!=width)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void e(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && i!=width)
				printf("%c ",spc);
			else if(jindex%(height-1)==0 &&i!=width)
				printf("%c ",spc);
			else if(jindex%((height)/2)==0 && ((height)/2)==jindex &&i!=width)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void  f(int jindex)
{
	
	for(int i=0; i<=width;i++)
	{
		if(jindex%(height/2)==0 && (height/2)>=jindex)
			printf("%c ",spc);
		else if(i==0)
		{
			printf("%c ",spc);
		}
		else
			printf("  ");
	}
	printf("  ");
}

void g(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%(width+1)==0 || (jindex>=(height)/2 && i==width))
				printf("%c ",spc);
			else if(jindex==((height)/2) && i>width/2) {
				printf("%c ",spc);
			}
			else if(jindex%((height)/2)==0 && jindex!=((height)/2)) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}


void h(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0)
				printf("%c ",spc);
			else if(jindex%((height)/2)==0 && ((height)/2)==jindex) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void i(int jindex)
{
	int wt=width;
	if(width%2!=0){
		wt=width-1;
	}
	for(int i=0; i<=wt;i++)
		{
			if(jindex%(height-1)==0)
				printf("%c ",spc);
			else if(width/2==i)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

void j(int jindex)
{
	int wt=width;
	if(width%2!=0){
		wt=width-1;
	}
	for(int i=0; i<=wt;i++)
		{
			if(jindex%(height-1)==0 && ((i<width/2)||jindex==0))
				printf("%c ",spc);
			else if(width/2==i)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

int qot=0;
void k(int jindex)
{
	int p=width+1;
	if(width%2==0){
		p=width;
	}
	for(int i=0; i<=p;i++)
	{		
		if(p==jindex)
		{
			qot=2;
		}
		if(i==abs(p-jindex-qot)||i==0)
			printf("%c ",spc);
		else
			printf("  ");
	}
	if(jindex==height-1)
	{
		qot=0;
	}
	printf("  ");
}

void l(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(jindex==(height-1))
				printf("%c ",spc);
			else if(i==0)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

void m(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 || jindex==0)
				printf("%c ",spc);
			else if(width/2==i) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void n(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 )
				printf("%c ",spc);
			else if(i==jindex) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void o(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0)
				printf("%c ",spc);
			else if(jindex%(height-1)==0)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void p(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%(width+1)==0 || (jindex<=(height)/2 && i==width))
				printf("%c ",spc);
			else if(jindex%((height+1)/2)==0) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void q(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && jindex !=0 && jindex!=height-1)
				printf("%c ",spc);
			else if(jindex>height/2  && 2*i<=jindex+1 && 2*i>jindex-1)
				printf("%c ",spc);
			else if(jindex%(height-1)==0 && i!=0&&i!=width)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void r(int jindex)
{
	for(int i=0; i<=width;i++)
	{
		if(i%width==0 && jindex!=0 && (jindex<height/2 || i==0 ))
			printf("%c ",spc);
		else if(i%width==0 && jindex!=0 && (jindex>height/2 || i==0 ))
			printf("%c ",spc);
		else if(jindex==0 && i!=width)
			printf("%c ",spc);
		else if(jindex%((height)/2)==0 && ((height)/2)==jindex && i!=width)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");//space
}

void s(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && (jindex==0 || i!=width)&& ((height)/2)>=jindex)
				printf("%c ",spc);
			else if(i%width==0 && i==width && ((height)/2)<=jindex)
				printf("%c ",spc);
			else if(jindex%(height-1)==0 &&i!=width)
				printf("%c ",spc);
			else if(jindex%((height)/2)==0 && ((height)/2)==jindex &&i!=width)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void t(int jindex)
{
	int wt=width;
	if(width%2!=0){
		wt=width-1;
	}
	for(int i=0; i<=wt;i++)
		{
			if(jindex==0)
				printf("%c ",spc);
			else if(width/2==i)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");
}

void u(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0)
				printf("%c ",spc);
			else if(jindex%(height-1)==0 && jindex!=0)
				printf("%c ",spc);
			else
				printf("  ");
		}
		printf("  ");//space
}

void v(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && (jindex<=height/2)||i==0)
				printf("%c ",spc);
			else if(i==(height-jindex)){
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void w(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 || jindex==height-1)
				printf("%c ",spc);
			else if(width/2==i) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}


void x(int jindex)
{
	int wt=width+2;
	for(int i=0; i<=wt;i++)
	{		
		if((i<=(wt-1.2-jindex/2)&&i>=(wt-2.2-jindex/1.7))||(i<=(jindex+1/1.5) && i>=(jindex/1.3)))
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");
}

void y(int jindex)
{
	for(int i=0; i<=width;i++)
		{
			if(i%width==0 && i!=0)
				printf("%c ",spc);
			else if(i==jindex) {
				printf("%c ",spc);
			}
			else
				printf("  ");
		}
		printf("  ");//space
}

void z(int jindex)
{
	int wt=width+2;
	for(int i=0; i<=wt;i++)
	{		
		if((i<=(wt-1.2-jindex/2)&&i>=(wt-2.2-jindex/1.7))||(jindex==0 && i!=wt)||jindex==height-1)
			printf("%c ",spc);
		else
			printf("  ");
	}
	printf("  ");
}

void print(char strg[],int sz,char ch)
{
	printf("\n");
	spc=ch;
	if(sz%2!=0)
	{
		sz++;
	}
	height=2*sz-1;
	width=sz;
	for(int jindex=0;jindex<height;jindex++)
	{
		for(int kk=0;kk<strlen(strg);kk++)
		{
			
			switch(strg[kk])
			{
				case '0':n0(jindex);break;
				case '1':n1(jindex);break;
				case '2':n2(jindex);break;
				case '3':n1(jindex);break;
				case '4':n1(jindex);break;
				case '5':n1(jindex);break;
				case '6':n6(jindex);break;
				case '7':n1(jindex);break;
				case '8':n8(jindex);break;
				case '9':n9(jindex);break;
				case 'A':
				case 'a':a(jindex);break;
				case 'B':
				case 'b':b(jindex);break;
				case 'C':	
				case 'c':c(jindex);break;
				case 'D':	
				case 'd':d(jindex);break;
				case 'E':	
				case 'e':e(jindex);break;
				case 'F':	
				case 'f':f(jindex);break;
				case 'G':	
				case 'g':g(jindex);break;
				case 'H':	
				case 'h':h(jindex);break;
				case 'I':	
				case 'i':i(jindex);break;
				case 'J':	
				case 'j':j(jindex);break;
				case 'K':	
				case 'k':k(jindex);break;
				case 'L':	
				case 'l':l(jindex);break;
				case 'M':
				case 'm':m(jindex);break;
				case 'N':	
				case 'n':n(jindex);break;
				case 'O':	
				case 'o':o(jindex);break;
				case 'P':	
				case 'p':p(jindex);break;
				case 'Q':	
				case 'q':q(jindex);break;
				case 'R':	
				case 'r':r(jindex);break;
				case 'S':	
				case 's':s(jindex);break;
				case 'T':	
				case 't':t(jindex);break;
				case 'U':	
				case 'u':u(jindex);break;
				case 'V':	
				case 'v':v(jindex);break;
				case 'W':	
				case 'w':w(jindex);break;
				case 'X':	
				case 'x':x(jindex);break;
				case 'Y':	
				case 'y':y(jindex);break;
				case 'Z':	
				case 'z':z(jindex);break;
				case ' ':printf(" ");break;
				case '\t':printf("\t");break;				
			}
		}	
		printf("\n");	
	}
}

