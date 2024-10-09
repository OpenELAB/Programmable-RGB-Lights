# 可编程RGB灯，调整灯环颜色、状态
![1280X1280](https://github.com/user-attachments/assets/0941694b-6907-4668-9f11-22e44a1c85db)
故事（原理）
RGB灯由红、绿、蓝三种基本颜色的LED灯组成。通过控制这三种颜色的LED灯的亮度，可以混合出几乎任何颜色的光。RGB灯的亮度可以通过调节电流的大小来实现，通常使用PWM（脉冲宽度调制）技术来控制LED灯的通断时间比例，进而改变LED灯的亮度，可以通过单片机或其他控制芯片给PWM控制器发送控制信号，信号包含了红、绿、蓝三种颜色的电流信息。PWM控制器根据控制信号的不同，控制三种颜色的LED灯的亮度变化，从而实现不同颜色的发光效果
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
