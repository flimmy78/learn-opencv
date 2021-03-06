/*
  手动生成一幅width*hight大小 rgb24 3byte per pix(BGR)格式的位图文件.
  从 unsigned char 数组的数据 RAW RGB888/24
*/
#include <stdio.h>
#include "main.h"
const int  width=4;
const int  hight=3;
int main(void)
{
	FILE *fp;
	char *bmp="./test.bmp";
	if((fp = fopen(bmp,"w")) == NULL){
		perror("Fail to fopen");
		exit(1);
	}
	write_file_head(&fp); //文件头
	//数据域顺序 ,先底行,至顶行;行内从左到右;像素内BGR排列
	char color[]={//第 2 行
			0xff, 0xff, 0xff//白 最低行
		      //B  ,  G  ,  R
		      ,0x00, 0x00, 0xFF//红
		      ,0x00, 0xff, 0x00 //绿
		      ,0xFF, 0x00, 0x00 //蓝 //这样一行共12字节
		      //,0x00,... //一行不四字节对齐,则补齐
		      //第 1 行
		      ,0xff,0x00,0x00//蓝
		      ,0x00,0xff,0x00 //绿
		      ,0xff,0x00,0x00//蓝
		      ,0x00,0xff,0x00 //绿
		      //第 0 行
		      ,0x00, 0x00, 0xFF//红
		      ,0xFF, 0xFF, 0xFF//白
		      ,0x00, 0x00, 0xFF//红
		      ,0xFF, 0xFF, 0xFF//白
		     };
	int r;
	r=fwrite(color,sizeof(color),1,fp);//写入文件的数据区
	if(r<=0){
		perror("Fail to write color data");
		exit(2);
	}
	fclose(fp);
	printf(":)\n");
	return 0;
}

/*
	bmp位图文件 文件头 参见:维基百科
	https://en.wikipedia.org/wiki/BMP_file_format
*/
void write_file_head(FILE**fp)
{
	struct bmp_file_head head;//文件头 14byte
	struct bmp_info_head infohead; //位图头 40 byte
	//Magic number 0~1
	head.bfSize=width*hight*3+14+40 ;//文件大小 //2~5
	head.bfReserved1=0;  //6~7
	head.bfReserved2=0; //8~9
	head.bfOffBits=2+12+40;//偏置 10~13
	//bmp file info head
	infohead.biSize=40; //14~17
	infohead.biWidth=width;//18-21
	infohead.biHeight=hight;//22-25
	infohead.biPlanes=1;//26-27
	infohead.biBitCount=24;//28-29
	infohead.biCompression=0;//30-33
	infohead.biSizeImage=width*hight*3;//34-37
	infohead.biXPelsPerMerer=width;//38-41
	infohead.biYPelsPerMerer=hight;//42-45
	infohead.biClrUsed=0;//46-49
	infohead.biClrImportant=0;//50-53
	//写入头文件
	fwrite(MagicNumber_hex,2,1,*fp);  //magic number
	fwrite(&head,sizeof(head),1,*fp); //file head
	fwrite(&infohead,sizeof(infohead),1,*fp); //bmp info head
}
