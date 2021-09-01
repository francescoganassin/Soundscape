
// _________________________________________________
// 
// Soundscape for Casa Armonica by Mirko Artuso
// Agosto - Settembre 2021
// Francesco Ganassin
// 
// _________________________________________________

#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioSynthWaveformSine   sine5;          //xy=79.03180694580078,695.4285707473755
AudioSynthWaveformSine   sine6;          //xy=86.74614334106445,826.2857608795166
AudioSynthWaveform       waveform4;      //xy=92.74601364135742,381.4285831451416
AudioSynthWaveform       waveform6;      //xy=92.74614715576172,776.2857465744019
AudioSynthWaveformSine   sine9;          //xy=91.03181076049805,1242.412621498108
AudioSynthNoisePink      pink2;          //xy=91.26983642578124,1194.9206107003347
AudioSynthWaveform       waveform5;      //xy=94.03179931640625,632.2856931686401
AudioSynthWaveformSine   sine3;          //xy=96.42857360839844,335.5714302062988
AudioSynthWaveform       waveform9;      //xy=96.03179931640625,1411.4126615524292
AudioSynthWaveform       waveform3;      //xy=101.03175354003906,262.1428871154785
AudioSynthWaveform       waveform1;      //xy=103.88887786865234,56.9999942779541
AudioSynthWaveformSine   sine11;         //xy=100.03181076049805,1446.5237197875977
AudioSynthWaveform       waveform2;      //xy=105.8888931274414,151
AudioSynthWaveformSine   sine2;          //xy=105.88889694213867,193.0000057220459
AudioSynthWaveform       waveform8;      //xy=102.74614715576172,1039.7302112579346
AudioSynthWaveform       waveform7;      //xy=103.74614334106445,914.2857484817505
AudioSynthWaveformSine   sine4;          //xy=105.88888549804688,442.5714683532715
AudioSynthWaveformSine   sine7;          //xy=105.74614715576172,969.2857713699341
AudioSynthNoisePink      pink1;          //xy=105.55555071149553,1296.349182128906
AudioSynthWaveformSine   sine1;          //xy=114.88889694213867,99.0000114440918
AudioSynthWaveformSine   sine10;         //xy=113.03180313110352,1348.301526069641
AudioSynthWaveformSine   sine8;          //xy=119.74614715576172,1105.5079908370972
AudioSynthWaveform       waveform10;     //xy=135.03179931640625,1506.6347465515137
AudioSynthWaveformSine   sine12;         //xy=142.03180313110352,1547.523717880249
AudioEffectMultiply      multiply1;      //xy=296.8887939453125,80.00000286102295
AudioEffectMultiply      multiply2;      //xy=296.8888626098633,159.00001525878906
AudioEffectMultiply      multiply10;     //xy=293.03179931640625,1318.8570575714111
AudioEffectMultiply      multiply3;      //xy=303.3174858093262,272.5714530944824
AudioEffectMultiply      multiply5;      //xy=305.4604682922363,667.5714931488037
AudioEffectMultiply      multiply11;     //xy=304.0318069458008,1430.8571166992188
AudioEffectMultiply      multiply12;     //xy=305.0317916870117,1526.8570518493652
AudioEffectMultiply      multiply4;      //xy=310.6030921936035,407.7143154144287
AudioEffectMultiply      multiply9;      //xy=311.0317916870117,1216.8570013046265
AudioEffectMultiply      multiply6;      //xy=316.0318603515625,791.8573522567749
AudioEffectMultiply      multiply7;      //xy=323.7461700439453,946.2857904434204
AudioEffectMultiply      multiply8;      //xy=323.46039962768555,1073.42857837677
AudioMixer4              mixer1;         //xy=555.6031761169434,246.71428298950195
AudioMixer4              mixer2;         //xy=578.746166229248,830.2858247756958
AudioMixer4              mixer4;         //xy=618.0319404602051,1361.8570938110352
AudioMixer4              mixer3;         //xy=785.0317611694336,392.57143211364746
AudioOutputI2S           i2s1;           //xy=1015.1747131347656,388.00000762939453
AudioConnection          patchCord1(sine5, 0, multiply5, 1);
AudioConnection          patchCord2(sine6, 0, multiply6, 1);
AudioConnection          patchCord3(waveform4, 0, multiply4, 0);
AudioConnection          patchCord4(waveform6, 0, multiply6, 0);
AudioConnection          patchCord5(sine9, 0, multiply9, 1);
AudioConnection          patchCord6(pink2, 0, multiply9, 0);
AudioConnection          patchCord7(waveform5, 0, multiply5, 0);
AudioConnection          patchCord8(sine3, 0, multiply3, 1);
AudioConnection          patchCord9(waveform9, 0, multiply11, 0);
AudioConnection          patchCord10(waveform3, 0, multiply3, 0);
AudioConnection          patchCord11(waveform1, 0, multiply1, 0);
AudioConnection          patchCord12(sine11, 0, multiply11, 1);
AudioConnection          patchCord13(waveform2, 0, multiply2, 0);
AudioConnection          patchCord14(sine2, 0, multiply2, 1);
AudioConnection          patchCord15(waveform8, 0, multiply8, 0);
AudioConnection          patchCord16(waveform7, 0, multiply7, 0);
AudioConnection          patchCord17(sine4, 0, multiply4, 1);
AudioConnection          patchCord18(sine7, 0, multiply7, 1);
AudioConnection          patchCord19(pink1, 0, multiply10, 0);
AudioConnection          patchCord20(sine1, 0, multiply1, 1);
AudioConnection          patchCord21(sine10, 0, multiply10, 1);
AudioConnection          patchCord22(sine8, 0, multiply8, 1);
AudioConnection          patchCord23(waveform10, 0, multiply12, 0);
AudioConnection          patchCord24(sine12, 0, multiply12, 1);
AudioConnection          patchCord25(multiply1, 0, mixer1, 0);
AudioConnection          patchCord26(multiply2, 0, mixer1, 1);
AudioConnection          patchCord27(multiply10, 0, mixer4, 1);
AudioConnection          patchCord28(multiply3, 0, mixer1, 2);
AudioConnection          patchCord29(multiply5, 0, mixer2, 0);
AudioConnection          patchCord30(multiply11, 0, mixer4, 2);
AudioConnection          patchCord31(multiply12, 0, mixer4, 3);
AudioConnection          patchCord32(multiply4, 0, mixer1, 3);
AudioConnection          patchCord33(multiply9, 0, mixer4, 0);
AudioConnection          patchCord34(multiply6, 0, mixer2, 1);
AudioConnection          patchCord35(multiply7, 0, mixer2, 2);
AudioConnection          patchCord36(multiply8, 0, mixer2, 3);
AudioConnection          patchCord37(mixer1, 0, mixer3, 0);
AudioConnection          patchCord38(mixer2, 0, mixer3, 1);
AudioConnection          patchCord39(mixer4, 0, mixer3, 2);
AudioConnection          patchCord40(mixer3, 0, i2s1, 0);
AudioConnection          patchCord41(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000;       //xy=875.317455291748,154.42857551574707
// GUItool: end automatically generated code




void setup() {
  Serial.begin(9600);
  delay(1000);

  AudioMemory(1000);
  
  sgtl5000.enable();
  sgtl5000.volume(0.8);


//waveform7
waveform7.begin(WAVEFORM_SINE);
waveform7.frequency(65.41);
waveform7.amplitude(0.25);
sine7.frequency(0.0029);
sine7.amplitude(0.55);

//waveform2
waveform2.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform2.frequency(155.6);
waveform2.amplitude(0.35);
sine2.frequency(0.0088);
sine2.amplitude(0.4);

//waveform10
waveform10.begin(WAVEFORM_SINE);
waveform10.frequency(207.7);
waveform10.amplitude(0.35);
sine12.frequency(0.0183);
sine12.amplitude(0.3);

//waveform1
waveform1.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform1.frequency(311.1);
waveform1.amplitude(0.25);
sine1.frequency(0.0071);
sine1.amplitude(0.2);

//waveform8
waveform8.begin(WAVEFORM_SINE);
waveform8.frequency(392);
waveform8.amplitude(0.25);
sine8.frequency(0.0049);
sine8.amplitude(0.15);

//waveform3
waveform3.begin(WAVEFORM_SINE);
waveform3.frequency(466.2);
waveform3.amplitude(0.25);
sine3.frequency(0.0085);
sine3.amplitude(0.2);

//waveform4
waveform4.begin(WAVEFORM_SINE);
waveform4.frequency(523.3);
waveform4.amplitude(0.25);
sine4.frequency(0.0099);
sine4.amplitude(0.15);

//waveform9
waveform9.begin(WAVEFORM_SINE);
waveform9.frequency(698);
waveform9.amplitude(0.25);
sine11.frequency(0.017);
sine11.amplitude(0.10);

//waveform5
waveform5.begin(WAVEFORM_SINE);
waveform5.frequency(1047);
waveform5.amplitude(0.25);
sine5.frequency(0.0069);
sine5.amplitude(0.05);

//windy pink noise here

pink1.amplitude(0.18);
pink2.amplitude(0.06);

sine9.frequency(0.0074);
sine9.amplitude(0.512);

sine10.frequency(0.026);
sine10.amplitude(0.342);

// livelli mixer
  mixer1.gain(0, 0.5);
  mixer1.gain(1, 0.5);
  mixer1.gain(2, 0.5);
  mixer1.gain(3, 0.5);
  
  mixer2.gain(0, 0.5);
  mixer2.gain(1, 0.5);
  mixer2.gain(2, 0.5);
  mixer2.gain(3, 0.5);

  mixer3.gain(0, 0.5);
  mixer3.gain(1, 0.5);
  mixer3.gain(2, 0.5);
  mixer3.gain(3, 0.5);
  
  mixer4.gain(0, 0.5);
  mixer4.gain(1, 0.5);
  mixer4.gain(2, 0.5);
  mixer4.gain(3, 0.5);
  
}

void loop() {
}
