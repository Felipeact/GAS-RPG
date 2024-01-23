// Copyright  ByViana


#include "AbilitySystem/ModMagCalc/MMC_MaxHealth.h"
#include "AbilitySystem/AuraAttributeSet.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
    VigorDef.AttributeToCapture = UAuraAttributeSet::GetVigorAttribute();
    VigorDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    VigorDef.bSnapshot = false;

    RelevantAttributesToCapture.add(VigorDef);
}


float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec & Spec) const
{
    // Gather tags from source and target
    const FGameplayTagContainer* SourceTag = Spec.CapturedSourceTags.GetAggregatedTags();
    const FGameplayTagContainer* TargetTag = Spec.CapturedTargetTags.GetAggregatedTags();

    FAggregatorEvaluateParameters EvaluationParameters; 
    EvaluationParameters.SourceTags = SourceTag;
    EvaluationParameters.TargetTags = TargetTag;

    float Vigor  = 0.f;
    GetCapturedAttributeMagnitude(VigorDef, Spec, EvaluationParameters, Vigor);
    Vigor = FMath::Max<float>(Vigor, 0.f);

    

}