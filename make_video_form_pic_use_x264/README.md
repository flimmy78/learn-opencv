编码:   
目前:
使用命令行从含有好几张YUYV图片的单个raw文件在中 编码成为 .264文件 或者 mp4文件.  
```
 x264 \ 			#应用程序,使用那个x264命令行程序
	./in-i420-yuv420p.raw \	#输入文件,当前目录下.raw文件,包含多幅YUV(i420/i422)格式文件
				#的连续放置
	--input-res 640x480 \	#明示视频尺寸,因为raw不包含这些信息
	--fps 25 \		#告诉编码器每秒帧数.
	-o ./out2.mp4 \		#输出文件.264纯视频文件 mp4 包含在容器中
	--log-level debug \	#输入调试信息
	--nal-hrd vbr \		#网络层? 暂时没弄懂
       	--seek 147 \		#指定从输入文件的第147帧开始编码.
```

```
264 ./in-i420-yuv420p.raw\
	--input-res 640x480 \
	--fps 25 \
	-o ./out2.mp4 \
	--log-level debug \
	--nal-hrd vbr \
	--seek 448 	\
	resize:width=320,height=240 \
	--verbose \
	--dump-yuv ./dump-yuv.raw	#Dumps(转存) the reconstructed YUV frames to the specified file. Useful mostly for debugging. Not for general use
```