
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


AudioSynthWaveform       waveform3; 
AudioSynthWaveform       waveform1; 
AudioSynthWaveform       waveform2; 
AudioSynthWaveformSine   sine2; 
AudioSynthWaveform       waveform4;
AudioSynthWaveformSine   sine4;
AudioSynthNoisePink      pink1;    
AudioSynthWaveformSine   sine1;    
AudioSynthWaveform       waveform7; 
AudioSynthWaveform       waveform5;
AudioSynthWaveform       waveform6;
AudioSynthWaveformSine   sine6; 
AudioSynthWaveform       waveform8;
AudioSynthWaveformSine   sine3; 
AudioSynthWaveformSine   sine8; 
AudioSynthWaveformSine   sine5; 
AudioSynthWaveformSine   sine7; 
AudioSynthWaveform       waveform9; 
AudioSynthWaveformSine   sine10; 
AudioSynthWaveform       waveform10; 
AudioSynthWaveformSine   sine12;
AudioSynthWaveformSine   sine9;
AudioSynthWaveformSine   sine11;
AudioSynthNoiseWhite     noise1;       
AudioEffectMultiply      multiply4; 
AudioEffectMultiply      multiply8;
AudioEffectMultiply      multiply1;    
AudioEffectMultiply      multiply5;
AudioEffectMultiply      multiply3; 
AudioEffectMultiply      multiply12; 
AudioEffectMultiply      multiply2;
AudioEffectMultiply      multiply7;
AudioEffectMultiply      multiply6; 
AudioEffectMultiply      multiply9; 
AudioEffectMultiply      multiply11; 
AudioEffectMultiply      multiply10; 
AudioMixer4              mixer1;    
AudioMixer4              mixer2; 
AudioMixer4              mixer3;
AudioMixer4              mixer4; 
AudioOutputI2S           i2s1;         
AudioConnection          patchCord1(waveform3, 0, multiply3, 0);
AudioConnection          patchCord2(waveform1, 0, multiply1, 0);
AudioConnection          patchCord3(waveform2, 0, multiply2, 0);
AudioConnection          patchCord4(sine2, 0, multiply2, 1);
AudioConnection          patchCord5(waveform4, 0, multiply4, 0);
AudioConnection          patchCord6(sine4, 0, multiply4, 1);
AudioConnection          patchCord7(pink1, 0, multiply9, 0);
AudioConnection          patchCord8(sine1, 0, multiply1, 1);
AudioConnection          patchCord9(waveform7, 0, multiply7, 0);
AudioConnection          patchCord10(waveform5, 0, multiply5, 0);
AudioConnection          patchCord11(waveform6, 0, multiply6, 0);
AudioConnection          patchCord12(sine6, 0, multiply6, 1);
AudioConnection          patchCord13(waveform8, 0, multiply8, 0);
AudioConnection          patchCord14(sine3, 0, multiply3, 1);
AudioConnection          patchCord15(sine8, 0, multiply8, 1);
AudioConnection          patchCord16(sine5, 0, multiply5, 1);
AudioConnection          patchCord17(sine7, 0, multiply7, 1);
AudioConnection          patchCord18(waveform9, 0, multiply11, 0);
AudioConnection          patchCord19(sine10, 0, multiply10, 1);
AudioConnection          patchCord20(waveform10, 0, multiply12, 0);
AudioConnection          patchCord21(sine12, 0, multiply12, 1);
AudioConnection          patchCord22(sine9, 0, multiply9, 1);
AudioConnection          patchCord23(sine11, 0, multiply11, 1);
AudioConnection          patchCord24(noise1, 0, multiply10, 0);
AudioConnection          patchCord25(multiply4, 0, mixer1, 3);
AudioConnection          patchCord26(multiply8, 0, mixer2, 3);
AudioConnection          patchCord27(multiply1, 0, mixer1, 0);
AudioConnection          patchCord28(multiply5, 0, mixer2, 0);
AudioConnection          patchCord29(multiply3, 0, mixer1, 2);
AudioConnection          patchCord30(multiply12, 0, mixer4, 3);
AudioConnection          patchCord31(multiply2, 0, mixer1, 1);
AudioConnection          patchCord32(multiply7, 0, mixer2, 2);
AudioConnection          patchCord33(multiply6, 0, mixer2, 1);
AudioConnection          patchCord34(multiply9, 0, mixer4, 0);
AudioConnection          patchCord35(multiply11, 0, mixer4, 2);
AudioConnection          patchCord36(multiply10, 0, mixer4, 1);
AudioConnection          patchCord37(mixer1, 0, mixer3, 0);
AudioConnection          patchCord38(mixer2, 0, mixer3, 1);
AudioConnection          patchCord39(mixer4, 0, mixer3, 2);
AudioConnection          patchCord40(mixer3, 0, i2s1, 0);
AudioConnection          patchCord41(mixer3, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;  


void setup() {
  AudioMemory(100);

//waveform1
sine1.frequency(0.01308);
sine1.amplitude(0.5);
waveform1.begin(WAVEFORM_SINE);
waveform1.frequency(311);
waveform1.amplitude(0.5);

//waveform2
sine2.frequency(0.0313);
sine2.amplitude(0.4);
waveform2.begin(WAVEFORM_SINE);
waveform2.frequency(233);
waveform2.amplitude(0.351);

//waveform3
sine3.frequency(0.010);
sine3.amplitude(0.5);
waveform3.begin(WAVEFORM_SINE);
waveform3.frequency(261);
waveform3.amplitude(0.5);

//waveform4
sine4.frequency(0.0493);
sine4.amplitude(0.4);
waveform4.begin(WAVEFORM_TRIANGLE_VARIABLE);
waveform4.frequency(155);
waveform4.amplitude(0.35);



// livelli mixer
//mixer1
  
  mixer1.gain(0, 0.9);
  mixer1.gain(1, 0.9);
  mixer1.gain(2, 0.9);
  mixer1.gain(3, 0.9);





//waveform5
sine5.frequency(0.0410);
sine5.amplitude(0.5);
waveform5.begin(WAVEFORM_SINE);
waveform5.frequency(349);
waveform5.amplitude(0.5);

//waveform6
sine6.frequency(0.03413);
sine6.amplitude(0.4);
waveform6.begin(WAVEFORM_SINE);
waveform6.frequency(392);
waveform6.amplitude(0.5);

//waveform7
sine7.frequency(0.0210);
sine7.amplitude(0.5);
waveform7.begin(WAVEFORM_SINE);
waveform7.frequency(467);
waveform7.amplitude(0.312);

//waveform8
sine8.frequency(0.02143);
sine8.amplitude(0.4);
waveform8.begin(WAVEFORM_SINE);
waveform8.frequency(523);
waveform8.amplitude(0.35);



// livelli mixer
//mixer2
  
  mixer2.gain(0, 0.7);
  mixer2.gain(1, 0.7);
  mixer2.gain(2, 0.7);
  mixer2.gain(3, 0.7);


  // livelli mixer
//mixer3
  
  mixer3.gain(0, 0.8);
  mixer3.gain(1, 0.8);
  mixer3.gain(2, 0.8);
  mixer3.gain(3, 0.8);

  // livelli mixer
//mixer4

noise1.amplitude(0.13);
pink1.amplitude(0.24);


//waveform9

waveform9.begin(WAVEFORM_SINE);
waveform9.frequency(131);
waveform9.amplitude(0.21);

//waveform10

waveform10.begin(WAVEFORM_SINE);
waveform10.frequency(207);
waveform10.amplitude(0.23);


sine9.frequency(0.041493);
sine9.amplitude(0.2);

sine10.frequency(0.01361493);
sine10.amplitude(0.2);

sine11.frequency(0.0871493);
sine11.amplitude(0.3);

sine12.frequency(0.01493);
sine12.amplitude(0.5);
  
  mixer4.gain(0, 0.5);
  mixer4.gain(1, 0.5);
  mixer4.gain(2, 0.5);
  mixer4.gain(3, 0.5);
  

}

void loop() {
}
