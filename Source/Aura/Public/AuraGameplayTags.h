// Copyright  ByViana

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * Aura Gameplay Tags
 * 
 * Singleton containing native Gameplay tags 
 */

struct FAuraGameplayTags
{
public:

	static const FAuraGameplayTags& Get() { return GameplayTags; }

	static void InitializeNativeGameplayTags();

protected:

private:

	static FAuraGameplayTags GameplayTags;
};