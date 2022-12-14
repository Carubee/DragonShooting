using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioMIxer : MonoBehaviour
{
    [SerializeField] string _volumeParameterSFX = "SFX";
    [SerializeField] string _volumeParameterBGM = "BGM";
    [SerializeField] AudioMixer _mixer;
    [SerializeField] Slider _sliderSFX;
    [SerializeField] Slider _sliderBGM;
    [SerializeField] float _multiplier = 30f;
    public AudioSource BGM;
    public static AudioMIxer instance;
    //[SerializeField] Toggle _toggle;
    void Start()
    {
        instance = this;
        _sliderSFX.onValueChanged.AddListener(HandleSliderValueChangedSFX);
        _sliderBGM.onValueChanged.AddListener(HandleSliderValueChangedBGM);
        _sliderSFX.value = PlayerPrefs.GetFloat(_volumeParameterSFX, _sliderSFX.value);
        _sliderBGM.value = PlayerPrefs.GetFloat(_volumeParameterBGM, _sliderBGM.value);
    }
    void HandleSliderValueChangedSFX(float value)
    {
        _mixer.SetFloat(_volumeParameterSFX, Mathf.Log(value) * _multiplier) ;
        PlayerPrefs.SetFloat("SFX", _sliderSFX.value);
        PlayerPrefs.Save();
        if (_sliderSFX.value <= 0)
            _sliderSFX.value = _sliderSFX.minValue;
    }
    void HandleSliderValueChangedBGM(float value)
    {
        _mixer.SetFloat(_volumeParameterBGM, Mathf.Log(value) * _multiplier) ;
        PlayerPrefs.SetFloat("BGM", _sliderBGM.value);
        PlayerPrefs.Save();
        if (_sliderBGM.value <= 0)
            _sliderBGM.value = _sliderBGM.minValue;
    }
    void Update()
    {
        
    }
    private void SaveValue(float value)
    {
        
    }
}
