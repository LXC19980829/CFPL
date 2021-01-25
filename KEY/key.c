//#include<STC15F2K60S2.h>
//#define uint unsigned int 
//#define uchar unsigned char
//	
//uchar a;
//uchar s7,s6,s5,s4;
//	void delay(uint z)
//	{
//	   uint x,y;
//		 for(x=z;x>0;x--)
//		 for(y=810;y>0;y--);
//	}
//	void keyscan()
//	{
//	   if(P30==0)
//			 {
//			    delay(10);
//				 if(P30==0)
//				 {
//				   //P0=0xfe;
////					 a--;
////					 P0=a;
//					 s7=1;
//				 }
//				 while(!P30);
//			 }
//		   else if(P31==0)
//			 {
//			   delay(10);
//				 if(P31==0)
//				 {
//				    //P0=0xfd;
//					 s6=1;
//				 }
//			 }
//			 else if(P32==0)
//			 {
//			   delay(10);
//				 if(P32==0)
//				 {
//				    P0=0xfb;
//				 }
//			 }
//			 else if(P33==0)
//			 {
//			   delay(10);
//				 if(P33==0)
//				 {
//				    P0=0xf7;
//				 }
//			 }
//	}
//	void main()
//	{
//		P2=0xa0;
//		P0=0x00;
//		P2=0x80;
//		P0=0xff;
//	  while(1)
//		 {
//		    keyscan();
//			  if(s7==1)
//				{
//				  s7=0;
//					P0=0x00;
//				}
//			else if(s6==1)
//				{
//				  s6=0;
//					P0=0xff;
//				}
//			else if(s5==1)
//			{
//			   s5=0;
//				 P2=0xa0;
//			}
//		 }
//	}

#include<STC15F2K60S2.h>
#define uint unsigned int 
#define uchar unsigned char

uchar temp;
uchar a=0x00;
void delay(uint z);
void keyscan16();
void main()
{
	P2=0xa0;
	P0=0x00;
	P2=0x80;
	P0=0xff;
   while(1)
	 {
	    keyscan16();
	 }
}
void delay(uint z)
{
    uint x,y;
	  for(x=z;x>0;x--)
	  for(y=810;y>0;y--);
}
void keyscan16()
{
      P3=0x7f;
    	P42=0;
		  temp=P3;
		  temp=temp&0x0f; 
		 if(temp!=0x0f)
		 {
		   delay(10);
			 temp=P3;
			 temp=temp&0x0f;
			 if(temp!=0x0f)
			 {
			    temp=P3;
				 switch(temp)
				 {
					 case 0x7e:a=a-1;P0=a;break;
					 case 0x7d:P0=0xff;break;
					 case 0x7b:P0=0xaa;break;
					 case 0x77:P0=0x55;break;
				 }
				 while(temp!=0x0f)
				 {
				     temp=P3;
					   temp=temp&0x0f;
				 }
			 }
		 }
		 
      P3=0xdf;
		  P44=0;
		  temp=P3;
		  temp=temp&0x0f; 
		 if(temp!=0x0f)
		 {
		   delay(10);
			 temp=P3;
			 temp=temp&0x0f;
			 if(temp!=0x0f)
			 {
			    temp=P3;
				 switch(temp)
				 {
					 case 0xde:a=a-1;P0=a;break;
					 case 0xdd:P0=0xff;break;
					 case 0xdb:P0=0xaa;break;
					 case 0xd7:P0=0x55;break;
				 }
				 while(temp!=0x0f)
				 {
				     temp=P3;
					   temp=temp&0x0f;
				 }
			 }
		 }
		 
		 P3=0xef;
		  temp=P3;
		  temp=temp&0x0f; 
		 if(temp!=0x0f)
		 {
		   delay(10);
			 temp=P3;
			 temp=temp&0x0f;
			 if(temp!=0x0f)
			 {
			    temp=P3;
				 switch(temp)
				 {
					 case 0xee:a=a-1;P0=a;break;
					 case 0xed:P0=0xff;break;
					 case 0xeb:P0=0xaa;break;
					 case 0xe7:P0=0x55;break;
				 }
				 while(temp!=0x0f)
				 {
				     temp=P3;
					   temp=temp&0x0f;
				 }
			 }
		 }
      P3=0xbf;
		  temp=P3;
		  temp=temp&0x0f; 
		 if(temp!=0x0f)
		 {
		   delay(10);
			 temp=P3;
			 temp=temp&0x0f;
			 if(temp!=0x0f)
			 {
			    temp=P3;
				 switch(temp)
				 {
					 case 0xbe:a=a-1;P0=a;break;
					 case 0xbd:P0=0xff;break;
					 case 0xbb:P0=0xaa;break;
					 case 0xb7:P0=0x55;break;
				 }
				 while(temp!=0x0f)
				 {
				     temp=P3;
					   temp=temp&0x0f;
				 }
			 }
		 }
}