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
    //[SerializeField] Toggle _toggle;
    void Start()
    {
        _sliderSFX.onValueChanged.AddListener(HandleSliderValueChangedSFX);
        _sliderBGM.onValueChanged.AddListener(HandleSliderValueChangedBGM);
        _sliderSFX.value = PlayerPrefs.GetFloat(_volumeParameterSFX, _sliderSFX.value);
        _sliderBGM.value = PlayerPrefs.GetFloat(_volumeParameterBGM, _sliderBGM.value);
    }
    void HandleSliderValueChangedSFX(float value)
    {
        _mixer.SetFloat(_volumeParameterSFX, Mathf.Log(value) * _multiplier) ;
        if (_sliderSFX.value <= 0)
            _sliderSFX.value = _sliderSFX.minValue;
    }
    void HandleSliderValueChangedBGM(float value)
    {
        _mixer.SetFloat(_volumeParameterBGM, Mathf.Log(value) * _multiplier) ;
        if (_sliderBGM.value <= 0)
            _sliderBGM.value = _sliderBGM.minValue;
    }
    void Update()
    {
        
    }
    private void OnDisable()
    {
        
    }
}
