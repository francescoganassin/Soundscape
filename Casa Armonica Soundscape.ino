/* 

 Casa Armonica

 slowly fluctuating soundscape
 for Casa Armonica, small wood craftworks by Mirko Artuso
   
 10 oscillators (sine and triangle variable)
 2 pink noise generator
 AM controlled 

 Agosto - Settembre 2021
 Francesco Ganassin
 
*/


#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

AudioSynthWaveformSine   sine1; 
AudioSynthWaveformSine   sine2; 
AudioSynthWaveformSine   sine3; 
AudioSynthWaveformSine   sine4; 
AudioSynthWaveformSine   sine5;          
AudioSynthWaveformSine   sine6; 
AudioSynthWaveformSine   sine7; 
AudioSynthWaveformSine   sine8; 
AudioSynthWaveformSine   sine9; 
AudioSynthWaveformSine   sine10;
AudioSynthWaveformSine   sine11;
AudioSynthWaveformSine   sine12;
   
AudioSynthWaveform       waveform1;
AudioSynthWaveform       waveform2;
AudioSynthWaveform       waveform3;  
AudioSynthWaveform       waveform4; 
AudioSynthWaveform       waveform5;
AudioSynthWaveform       waveform6;
AudioSynthWaveform       waveform7;
AudioSynthWaveform       waveform8;
AudioSynthWaveform       waveform9;
AudioSynthWaveform       waveform10;

AudioSynthNoisePink      pink1;
AudioSynthNoisePink      pink2;    
   
AudioEffectMultiply      multiply1;      
AudioEffectMultiply      multiply2;      
AudioEffectMultiply      multiply3;      
AudioEffectMultiply      multiply4;      
AudioEffectMultiply      multiply5;      
AudioEffectMultiply      multiply6;      
AudioEffectMultiply      multiply7;      
AudioEffectMultiply      multiply8;      
AudioEffectMultiply      multiply9;      
AudioEffectMultiply      multiply10;     
AudioEffectMultiply      multiply11;     
AudioEffectMultiply      multiply12;     

AudioMixer4              mixer1;         
AudioMixer4              mixer2;
AudioMixer4              mixer3;      
AudioMixer4              mixer4;      

AudioOutputI2S           i2s1;           

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

AudioControlSGTL5000     sgtl5000;    

void setup() {
  Serial.begin(9600);
  delay(1000);

  AudioMemory(1000);
  
  sgtl5000.enable();
  sgtl5000.volume(0.8);
  
  
// oscillators

waveform7.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform7.frequency(130.8);
waveform7.amplitude(0.35);
sine7.frequency(0.0029);
sine7.amplitude(0.5);

waveform2.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform2.frequency(155.6);
waveform2.amplitude(0.35);
sine2.frequency(0.0088);
sine2.amplitude(0.4);

waveform10.begin(WAVEFORM_SINE);
waveform10.frequency(207.7);
waveform10.amplitude(0.35);
sine12.frequency(0.0183);
sine12.amplitude(0.3);

waveform1.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform1.frequency(311.1);
waveform1.amplitude(0.25);
sine1.frequency(0.0071);
sine1.amplitude(0.2);

waveform8.begin(WAVEFORM_SINE);
waveform8.frequency(392);
waveform8.amplitude(0.25);
sine8.frequency(0.0049);
sine8.amplitude(0.15);

waveform3.begin(WAVEFORM_SINE);
waveform3.frequency(466.2);
waveform3.amplitude(0.25);
sine3.frequency(0.0085);
sine3.amplitude(0.2);

waveform4.begin(WAVEFORM_SINE);
waveform4.frequency(523.3);
waveform4.amplitude(0.25);
sine4.frequency(0.0099);
sine4.amplitude(0.15);

waveform9.begin(WAVEFORM_SINE);
waveform9.frequency(698.6);
waveform9.amplitude(0.25);
sine11.frequency(0.017);
sine11.amplitude(0.10);

waveform6.begin(WAVEFORM_SINE);
waveform6.frequency(830.6);
waveform6.amplitude(0.25);
sine6.frequency(0.0029);
sine6.amplitude(0.05);

waveform5.begin(WAVEFORM_SINE);
waveform5.frequency(1047);
waveform5.amplitude(0.25);
sine5.frequency(0.0069);
sine5.amplitude(0.05);

// pink noise

pink1.amplitude(0.20);
sine9.frequency(0.0074);
sine9.amplitude(0.6);

pink2.amplitude(0.08);
sine10.frequency(0.026);
sine10.amplitude(0.3);

//  mixer

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
