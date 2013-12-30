/*
==============================================================================

This file was auto-generated by the Introjucer!

It contains the basic startup code for a Juce application.

==============================================================================
*/
#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
ObxdAudioProcessorEditor::ObxdAudioProcessorEditor (ObxdAudioProcessor* ownerFilter)
	: AudioProcessorEditor (ownerFilter)
{
	// This is where our plugin's editor size is set.
	setSize (800, 350);
	cutoffKnob = addNormalKnob(400+30,20,ownerFilter,CUTOFF,"Cutoff");
	resonanceKnob = addNormalKnob(450+30,20,ownerFilter,RESONANCE,"Resonance");
	filterEnvelopeAmtKnob = addNormalKnob(500+30,20,ownerFilter,ENVELOPE_AMT,"Envelope");
	multimodeKnob = addNormalKnob(450+30,115-40,ownerFilter,MULTIMODE,"Multimode");

	volumeKnob = addNormalKnob(10+30,20,ownerFilter,VOLUME,"Volume");
	portamentoKnob = addNormalKnob(60+30,20,ownerFilter,PORTAMENTO,"Portamento");
	osc1PitchKnob = addNormalKnob(160+30,20,ownerFilter,OSC1P,"Osc1Pitch");
	pulseWidthKnob = addNormalKnob(210+30,20,ownerFilter,PW,"PW");
	osc2PitchKnob = addNormalKnob(260+30,20,ownerFilter,OSC2P,"Osc2Pitch");

	osc1MixKnob = addTinyKnob(340+30,20,ownerFilter,OSC1MIX,"Osc1");
	osc2MixKnob = addTinyKnob(340+30,60,ownerFilter,OSC2MIX,"Osc2");
	noiseMixKnob = addTinyKnob(340+30,100,ownerFilter,NOISEMIX,"Noise");

	xmodKnob = addTinyKnob(215+30,100,ownerFilter,XMOD,"Xmod");
	osc2DetuneKnob = addTinyKnob(265+30,100,ownerFilter,OSC2_DET,"Detune");

	envPitchModKnob = addTinyKnob(265+30,140,ownerFilter,ENVPITCH,"PEnv");
	brightnessKnob = addTinyKnob(215+30,140,ownerFilter,BRIGHTNESS,"Bri");

	attackKnob = addNormalKnob(590+30,90,ownerFilter,LATK,"Atk");
	decayKnob = addNormalKnob(630+30,90,ownerFilter,LDEC,"Dec");
	sustainKnob = addNormalKnob(670+30,90,ownerFilter,LSUS,"Sus");
	releaseKnob = addNormalKnob(710+30,90,ownerFilter,LREL,"Rel");

	fattackKnob = addNormalKnob(590+30,20,ownerFilter,FATK,"Atk");
	fdecayKnob = addNormalKnob(630+30,20,ownerFilter,FDEC,"Dec");
	fsustainKnob = addNormalKnob(670+30,20,ownerFilter,FSUS,"Sus");
	freleaseKnob = addNormalKnob(710+30,20,ownerFilter,FREL,"Rel");

	placeLabel(645,145,"LFO");
	lfoFrequencyKnob = addNormalKnob(590+30,160,ownerFilter,LFOFREQ,"Freq");
	lfoAmt1Knob = addNormalKnob(650+30,160,ownerFilter,LFO1AMT,"Pitch");
	lfoAmt2Knob = addNormalKnob(710+30,160,ownerFilter,LFO2AMT,"PWM");

	lfoSinButton = addNormalTooglableButton(590+30,215,ownerFilter,LFOSINWAVE,"Sin");
	lfoSquareButton = addNormalTooglableButton(590+30,240,ownerFilter,LFOSQUAREWAVE,"SQ");
	lfoSHButton = addNormalTooglableButton(590+30,265,ownerFilter,LFOSHWAVE,"S&H");

	lfoOsc1Button = addNormalTooglableButton(650+30,215,ownerFilter,LFOOSC1,"Osc1");
	lfoOsc2Button = addNormalTooglableButton(650+30,240,ownerFilter,LFOOSC2,"Osc2");
	lfoFilterButton = addNormalTooglableButton(650+30,265,ownerFilter,LFOFILTER,"Filt");

	lfoPwm1Button = addNormalTooglableButton(710+30,215,ownerFilter,LFOPW1,"Osc1");
	lfoPwm2Button = addNormalTooglableButton(710+30,240,ownerFilter,LFOPW2,"Osc2");

	hardSyncButton = addNormalTooglableButton(210+30,115-40,ownerFilter,OSC2HS,"Sync");
	osc1SawButton = addTinyTooglableButton(160+30,115-40,ownerFilter,OSC1Saw,"S");
	osc2SawButton = addTinyTooglableButton(260+30,115-40,ownerFilter,OSC2Saw,"S");

	osc1PulButton = addTinyTooglableButton(160+50,115-40,ownerFilter,OSC1Pul,"P");
	osc2PulButton = addTinyTooglableButton(260+50,115-40,ownerFilter,OSC2Pul,"P");

	pitchQuantButton =  addNormalTooglableButton(160+30,100,ownerFilter,OSCQuantize,"Step");

	filterBPBlendButton = addNormalTooglableButton(460+70,115-15,ownerFilter,BANDPASS,"Bp");
	fourPoleButton = addNormalTooglableButton(460+70,115-40,ownerFilter,FOURPOLE,"24");
	filterHQButton = addNormalTooglableButton(440-10,115-15,ownerFilter,FILTER_WARM,"HQ");

	filterKeyFollowButton =  addNormalTooglableButton(400+30,115-40,ownerFilter,FLT_KF,"Key");
	unisonButton = addNormalTooglableButton(40,85,ownerFilter,UNISON,"Uni");
	tuneKnob = addTinyKnob(45,105,ownerFilter,TUNE,"Tune");
	voiceDetuneKnob =addNormalKnob(90,85,ownerFilter,UDET,"VoiceDet");

	placeLabel(42,205,"Voice pannings");

	pan1Knob = addTinyKnob(35,220,ownerFilter,PAN1,"1");
	pan2Knob = addTinyKnob(65,220,ownerFilter,PAN2,"2");
	pan3Knob = addTinyKnob(95,220,ownerFilter,PAN3,"3");
	pan4Knob = addTinyKnob(125,220,ownerFilter,PAN4,"4");

	pan5Knob = addTinyKnob(35,260,ownerFilter,PAN5,"5");
	pan6Knob = addTinyKnob(65,260,ownerFilter,PAN6,"6");
	pan7Knob = addTinyKnob(95,260,ownerFilter,PAN7,"7");
	pan8Knob = addTinyKnob(125,260,ownerFilter,PAN8,"8");

	placeLabel(330,220,"BendControls");
	bendOsc2OnlyButton = addNormalTooglableButton(340,240,ownerFilter,BENDOSC2,"Osc2");
	bendRangeButton = addNormalTooglableButton(340,265,ownerFilter,BENDRANGE,"12");

	filterDetuneKnob = addTinyKnob(40,165,ownerFilter,FILTERDER,"Flt");
	envelopeDetuneKnob = addTinyKnob(70,165,ownerFilter,ENVDER,"Env");
	portamentoDetuneKnob = addTinyKnob(100,165,ownerFilter,PORTADER,"Port");
	placeLabel(35,150,"Voice variance");
	placeLabel(645,5 , "Filter envelope");
	placeLabel(645,75,"Loudness envelope");
	placeLabel(213,5,"Oscillators");
	placeLabel(327,5,"Mixer");
	placeLabel(440,5,"Filter");
	placeLabel(210,220,"VoiceCount");
	voiceSwitch = addNormalButtonList(240,240,40,ownerFilter,VOICE_COUNT,"VoiceCount");
	voiceSwitch ->addChoise("1");
	voiceSwitch ->addChoise("2");
	voiceSwitch ->addChoise("3");
	voiceSwitch ->addChoise("4");
	voiceSwitch ->addChoise("5");
	voiceSwitch ->addChoise("6");
	voiceSwitch ->addChoise("7");
	voiceSwitch ->addChoise("8");
	voiceSwitch ->setValue(ownerFilter->getParameter(VOICE_COUNT),dontSendNotification);

	placeLabel(440,220,"Legato");
	legatoSwitch = addNormalButtonList(450,240,90,ownerFilter,LEGATOMODE,"Legato");
	legatoSwitch ->addChoise("Keep all");
	legatoSwitch ->addChoise("Keep fenv");
	legatoSwitch ->addChoise("Keep lenv");
	legatoSwitch ->addChoise("Retrig");
	legatoSwitch ->setValue(ownerFilter->getParameter(LEGATOMODE),dontSendNotification);

	placeLabel(440,270,"Transpose");
	octaveSwitch = addNormalButtonList(450,290,90,ownerFilter,OCTAVE,"Octave");

	octaveSwitch ->addChoise("-2");
	octaveSwitch ->addChoise("-1");
	octaveSwitch ->addChoise("0");
	octaveSwitch ->addChoise("+1");
	octaveSwitch ->addChoise("+2");
	octaveSwitch ->setValue(ownerFilter->getParameter(OCTAVE),dontSendNotification);

	getFilter()->addChangeListener(this);
}
void ObxdAudioProcessorEditor::placeLabel(int x , int y , String text)
{
	Label* lab = new Label();
	lab->setBounds(x,y,110,20);
	lab->setJustificationType(Justification::centred);
	lab->setText(text,dontSendNotification);lab->setInterceptsMouseClicks(false,true);
	addAndMakeVisible(lab);
}
ButtonList* ObxdAudioProcessorEditor::addNormalButtonList(int x, int y,int width, ObxdAudioProcessor* filter, int parameter,String name)
{
	ButtonList *bl = new ButtonList();
	bl->setBounds(x, y, width, 20);
	//bl->setValue(filter->getParameter(parameter),dontSendNotification);
	addAndMakeVisible(bl);
    bl->addListener (this);
	return bl;

}
ObxdAudioProcessorEditor::~ObxdAudioProcessorEditor()
{
	getFilter()->removeChangeListener(this);
	deleteAllChildren();
}
Knob* ObxdAudioProcessorEditor::addNormalKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name)
{
	Knob* knob = new Knob();
	Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	addAndMakeVisible(knobl);
	knob->setBounds(x, y, 40,40);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	knobl->setJustificationType(Justification::centred);
	knobl->setInterceptsMouseClicks(false,true);
	knobl->setBounds(x-10,y+40,60,10);
	knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->addListener (this);
	return knob;
}
Knob* ObxdAudioProcessorEditor::addTinyKnob(int x , int y ,ObxdAudioProcessor* filter, int parameter,String name)
{
	Knob* knob = new Knob();
	Label* knobl = new Label();
	knob->setSliderStyle(Slider::RotaryVerticalDrag);
	knob->setTextBoxStyle(knob->NoTextBox,true,0,0);
	knob->setRange(0,1);
	addAndMakeVisible(knob);
	addAndMakeVisible(knobl);
	knob->setBounds(x, y, 30,30);
	knob->setValue(filter->getParameter(parameter),dontSendNotification);
	knobl->setJustificationType(Justification::centred);
	knobl->setInterceptsMouseClicks(false,true);
	knobl->setBounds(x-10,y+25,50,10);
	knobl->setText(name,dontSendNotification);
	knob->setTextBoxIsEditable(false);
	knob->addListener (this);
	return knob;
}
TooglableButton*  ObxdAudioProcessorEditor::addNormalTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton();
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,40,20);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}
TooglableButton*  ObxdAudioProcessorEditor::addTinyTooglableButton(int x , int y , ObxdAudioProcessor* filter,int parameter,String name)
{
	TooglableButton* button = new TooglableButton();
	//	button->setButtonStyle(DrawableButton::ButtonStyle::ImageAboveTextLabel);
	addAndMakeVisible(button);
	button->setBounds(x,y,20,20);
	button->setButtonText(name);
	button->setValue(filter->getParameter(parameter),0);
	button->addListener(this);
	return button;
}
void ObxdAudioProcessorEditor::buttonClicked(Button * b)
{
	TooglableButton* tb = (TooglableButton*)(b);
	ObxdAudioProcessor* flt = getFilter();
#define bp(T) {flt->setParameterNotifyingHost(T,tb->getValue());}
#define handleBParam(K,T)  if (tb == K) {bp(T)} else
	handleBParam(hardSyncButton,OSC2HS)
		handleBParam(osc1SawButton,OSC1Saw)
		handleBParam(osc2SawButton,OSC2Saw)
		handleBParam(osc1PulButton,OSC1Pul)
		handleBParam(osc2PulButton,OSC2Pul)
		handleBParam(filterKeyFollowButton,FLT_KF)
		handleBParam(pitchQuantButton,OSCQuantize)
		handleBParam(unisonButton,UNISON)
		handleBParam(filterHQButton,FILTER_WARM)
		handleBParam(filterBPBlendButton,BANDPASS)

		handleBParam(lfoSinButton,LFOSINWAVE)
		handleBParam(lfoSquareButton,LFOSQUAREWAVE)
		handleBParam(lfoSHButton,LFOSHWAVE)

		handleBParam(lfoOsc1Button,LFOOSC1)
		handleBParam(lfoOsc2Button,LFOOSC2)
		handleBParam(lfoFilterButton,LFOFILTER)
		handleBParam(lfoPwm1Button,LFOPW1)
		handleBParam(lfoPwm2Button,LFOPW2)
		handleBParam(bendOsc2OnlyButton,BENDOSC2)
		handleBParam(bendRangeButton,BENDRANGE)
		handleBParam(fourPoleButton,FOURPOLE)
	{};

}
void ObxdAudioProcessorEditor::comboBoxChanged (ComboBox* cb)
{
	ButtonList* bl = (ButtonList*)(cb);
	ObxdAudioProcessor* flt = getFilter();
	#define cp(T) {flt->setParameterNotifyingHost(T,bl->getValue());}
#define handleCParam(K,T)  if (bl == K) {cp(T)} else
	handleCParam(voiceSwitch,VOICE_COUNT)
		handleCParam(legatoSwitch,LEGATOMODE)
		handleCParam(octaveSwitch,OCTAVE)
	{};
}
void ObxdAudioProcessorEditor::sliderValueChanged (Slider* c)
{
	ObxdAudioProcessor* flt = getFilter();
	//		flt->beginParameterChangeGesture();
#define sp(T) {flt->setParameterNotifyingHost(T,c->getValue());}
#define handleSParam(K,T)  if (c == K) {sp(T)} else
	handleSParam(cutoffKnob,CUTOFF)
		handleSParam(resonanceKnob,RESONANCE)
		handleSParam(volumeKnob,VOLUME)
		handleSParam(osc1PitchKnob,OSC1P)
		handleSParam(osc2PitchKnob,OSC2P)
		handleSParam(osc2DetuneKnob,OSC2_DET)
		handleSParam(portamentoKnob,PORTAMENTO)
		handleSParam(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		handleSParam(pulseWidthKnob,PW)
		handleSParam(xmodKnob,XMOD)
		handleSParam(multimodeKnob,MULTIMODE)

		handleSParam(attackKnob,LATK)
		handleSParam(decayKnob,LDEC)
		handleSParam(sustainKnob,LSUS)
		handleSParam(releaseKnob,LREL)

		handleSParam(fattackKnob,FATK)
		handleSParam(fdecayKnob,FDEC)
		handleSParam(fsustainKnob,FSUS)
		handleSParam(freleaseKnob,FREL)

		handleSParam(osc1MixKnob,OSC1MIX)
		handleSParam(osc2MixKnob,OSC2MIX)
		handleSParam(noiseMixKnob,NOISEMIX)
		handleSParam(voiceDetuneKnob,UDET)

		handleSParam(filterDetuneKnob,FILTERDER)
		handleSParam(envelopeDetuneKnob,ENVDER)
		handleSParam(portamentoDetuneKnob,PORTADER)

		handleSParam(lfoFrequencyKnob,LFOFREQ)
		handleSParam(lfoAmt1Knob,LFO1AMT)
		handleSParam(lfoAmt2Knob,LFO2AMT)

				handleSParam(pan1Knob,PAN1)
		handleSParam(pan2Knob,PAN2)
		handleSParam(pan3Knob,PAN3)
		handleSParam(pan4Knob,PAN4)
		handleSParam(pan5Knob,PAN5)
		handleSParam(pan6Knob,PAN6)
		handleSParam(pan7Knob,PAN7)
		handleSParam(pan8Knob,PAN8)

		handleSParam(tuneKnob,TUNE)
		handleSParam(brightnessKnob,BRIGHTNESS)
		handleSParam(envPitchModKnob,ENVPITCH)
		//magic crystal
	{};



	//else if(c == cutoffKnob)
	//{sp(CUTOFF);}
	//else if(c == resonanceKnob)
	//{sp(RESONANCE);}
	//else if(c == portamentoKnob)
	//{sp(PORTAMENTO);}
	//else if(c == volumeKnob)
	//{sp(VOLUME);}
	//else if(c == osc1PitchKnob)
	//{sp(OSC1P);}
	//else if (c == osc2PitchKnob)
	//{sp(OSC2P);}
}
//==============================================================================
void ObxdAudioProcessorEditor::changeListenerCallback (ChangeBroadcaster* source)
{
	ObxdAudioProcessor* filter = getFilter();
	float pr[PARAM_COUNT];
	filter->getCallbackLock().enter();
	for(int i = 0 ; i < PARAM_COUNT;++i)
		pr[i] = filter->parameters.values[i];
	filter->getCallbackLock().exit();
#define rn(T,P) (T->setValue(pr[P],dontSendNotification));
	rn(cutoffKnob,CUTOFF)
		rn(resonanceKnob,RESONANCE)
		rn(volumeKnob,VOLUME)
		rn(osc1PitchKnob,OSC1P)
		rn(osc2PitchKnob,OSC2P)
		rn(osc2DetuneKnob,OSC2_DET)
		rn(portamentoKnob,PORTAMENTO)
		rn(filterEnvelopeAmtKnob,ENVELOPE_AMT)
		rn(pulseWidthKnob,PW)
		rn(xmodKnob,XMOD)
		rn(multimodeKnob,MULTIMODE)
		rn(brightnessKnob,BRIGHTNESS)
		rn(envPitchModKnob,ENVPITCH)

		rn(attackKnob,LATK)
		rn(decayKnob,LDEC)
		rn(sustainKnob,LSUS)
		rn(releaseKnob,LREL)

		rn(fattackKnob,FATK)
		rn(fdecayKnob,FDEC)
		rn(fsustainKnob,FSUS)
		rn(freleaseKnob,FREL)

		rn(osc1MixKnob,OSC1MIX)
		rn(osc2MixKnob,OSC2MIX)
		rn(noiseMixKnob,NOISEMIX)
		rn(voiceDetuneKnob,UDET)

		rn(lfoFrequencyKnob,LFOFREQ)
		rn(lfoAmt1Knob,LFO1AMT)
		rn(lfoAmt2Knob,LFO2AMT)
		rn(tuneKnob,TUNE)
		//buttons
		rn(hardSyncButton,OSC2HS)
		rn(osc1SawButton,OSC1Saw)
		rn(osc2SawButton,OSC2Saw)
		rn(osc1PulButton,OSC1Pul)
		rn(osc2PulButton,OSC2Pul)

		rn(filterKeyFollowButton,FLT_KF)
		rn(pitchQuantButton,OSCQuantize)
		rn(unisonButton,UNISON)

		rn(filterDetuneKnob,FILTERDER)
		rn(envelopeDetuneKnob,ENVDER)
		rn(portamentoDetuneKnob,PORTADER)

		rn(filterHQButton,FILTER_WARM)
		rn(filterBPBlendButton,BANDPASS)
		rn(lfoSinButton,LFOSINWAVE)
		rn(lfoSquareButton,LFOSQUAREWAVE)
		rn(lfoSHButton,LFOSHWAVE)

		rn(bendOsc2OnlyButton,BENDOSC2)
		rn(bendRangeButton,BENDRANGE)

		rn(lfoOsc1Button,LFOOSC1)
		rn(lfoOsc2Button,LFOOSC2)
		rn(lfoFilterButton,LFOFILTER)
		rn(lfoPwm1Button,LFOPW1)
		rn(lfoPwm2Button,LFOPW2)
		rn(fourPoleButton,FOURPOLE)

		rn(pan1Knob,PAN1)
		rn(pan2Knob,PAN2)
		rn(pan3Knob,PAN3)
		rn(pan4Knob,PAN4)
		rn(pan5Knob,PAN5)
		rn(pan6Knob,PAN6)
		rn(pan7Knob,PAN7)
		rn(pan8Knob,PAN8)

		rn(voiceSwitch,VOICE_COUNT)
		rn(legatoSwitch,LEGATOMODE)
		rn(octaveSwitch,OCTAVE)

}
void ObxdAudioProcessorEditor::paint (Graphics& g)
{
	g.fillAll (Colours::white);
	// g.setColour (Colours::black);
	//g.setFont (15.0f);
	//g.drawFittedText ("Hello World!",
	//                0, 0, getWidth(), getHeight(),
	//                Justification::centred, 1);
}