// Copyright  ByViana


#include "AbilitySystem/Data/AttributeInfo.h"



FAuraAttributeInfo UAttributeInfo::FindAttributeInfoForTag(const FGameplayTag& AttributeTag, bool bLogNotFound)
{
    for ( const FAuraAttributeInfo& Info : AttributeInformation){
        if (Info.AttributeTag == AttributeTag) 
        {
            return Info;
        }
    }

    if (bLogNotFound)
    {
        UE_LOG(LogTemp, Error, TEXT("Cant find info for attribute tag [%s] on AttributeInfo [%s]"), *AttributeTag.ToString(), *GetNameSafe(this));
    }

    return FAuraAttributeInfo();
}

