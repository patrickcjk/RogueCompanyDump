// Class AudioCapture.AudioCapture
// Size: 0xb0 (Inherited: 0xa8)
struct UAudioCapture : public UAudioGenerator {
	char UnknownData_A8[0x8]; // 0xa8(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0x7a0 (Inherited: 0x6e0)
struct UAudioCaptureComponent : public USynthComponent {
	int32_t JitterLatencyFrames; // 0x6e0(0x04)
	char UnknownData_6E4[0xbc]; // 0x6e4(0xbc)
};

