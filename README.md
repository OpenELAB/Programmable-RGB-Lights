
嗨！👋 这个项目是个超酷的可编程RGB灯小创意！RGB灯由红、绿、蓝三种基本颜色的LED组成，通过调节它们的亮度，就能混合出几乎任意颜色的光✨。想要浪漫的粉红色还是酷炫的紫蓝色？轻松搞定！🎨  

RGB灯的亮度调节其实很简单——通过调整电流的大小来实现。我们通常用到的就是**PWM（脉冲宽度调制）**技术，它通过控制LED的“开关”时间比例来改变亮度🌈。你可以用单片机或其他控制芯片给PWM控制器发送控制信号，控制红、绿、蓝三种颜色的电流强度，PWM控制器会根据这些信号调整每种颜色的亮度，从而创造出各种炫彩的灯光效果💡。  

不管你是想营造温馨的氛围，还是打造一场闪耀的灯光秀，这个RGB灯项目都能让你玩出新花样，点亮你的创意灵感！🚀
![QQ20241009-114523](https://github.com/user-attachments/assets/fe60ac31-4235-4fdc-ab48-8893f06db0f1)
故事（原理）

我们制作这个项目所需的材料
1. Arduino UNO
2. 可编程RGB灯
3. 串口线
4. 公对公杜邦线3根
引脚介绍以及接线
- VIN：应将VCC引脚连接到ESP32开发板或其他兼容开发板的3.3V电源引脚（或根据传感器规格选择适当的工作电压）。
- GND：参考地。
- RGB：发送控制信号
- NC：不需要连接
- 其他引脚：可编程的GPIO引脚，用于实现额外的功能，如测量准备和门限中断。
[图片]
具体步骤
1. 使用串口线连接Arduino UNO。
2. 按照接线图连接Arduino和可编程RGB灯，再将串口连接至电脑USB口。
3. 选择想要实现的效果的相应文件，以此分别为点亮全部灯光、流水灯、跑马灯、呼吸灯。
暂时无法在飞书文档外展示此内容
暂时无法在飞书文档外展示此内容
暂时无法在飞书文档外展示此内容
暂时无法在飞书文档外展示此内容
4. 以跑马灯为例，打开跑马灯例程文件，打开Marquee.ino
[图片]
5.  连接好Arduino和模块的线后，点击编译以及上传
[图片]
实验现象
灯光依次亮起熄灭，并呈现出多种颜色
[图片]
[图片]
