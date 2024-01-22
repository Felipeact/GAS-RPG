// Copyright  ByViana


#include "AbilitySystem/ModMagCalc/MMC_MaxHealth.h"
#include "AbilitySystem/AuraAttributeSet.h"

UMMC_MaxHealth::UMMC_MaxHealth()
{
    VigorDef.AttributeToCapture = UAuraAttributeSet::GetVigorAttribute();
    VigorDef.AttributeSource = EGameplayEffectAttributeCaptureSource::Target;
    VigorDef.bSnapshot = false;
}


float UMMC_MaxHealth::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec & Spec) const
{

}