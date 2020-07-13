#include <Adafruit_NeoPixel.h> // ����Arduino��ʹ��NeoPixel�����ڴ˲�ͼ�д�������������

#define PIN 2	 // ��΢��������ʹ��2����

#define NUMPIXELS      12 // �����ַ����ض��ַ�������12������

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800); // �����԰���΢����������ͨ����NeoPixel

int delayval = 100; // ��ʱ�ӳ�1s

int redColor = 0;
int greenColor = 0;
int blueColor = 0;

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();// ��ͼ��ʼ����
}

void loop() {
  setColor();

  for (int i=0; i < NUMPIXELS; i++) {
    // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
    pixels.setPixelColor(i, pixels.Color(redColor, greenColor, blueColor));//�޸����ص���ɫ iΪ�ĸ�����  pixels.Color��Ϊ��ɫ��ֵ �ֱ�Ϊ��ɫ��ɫ��ɫ

    // This sends the updated pixel color to the hardware.
    pixels.show();//����ǰ���÷��͵�����

    // Delay for a period of time (in milliseconds).
    delay(delayval);//�ӳ�һ��ʱ��
  }
}

// setColor()
// picks random values to set for RGB
void setColor(){
  redColor = random(0, 255);
  greenColor = random(0,255);
  blueColor = random(0, 255);
}
