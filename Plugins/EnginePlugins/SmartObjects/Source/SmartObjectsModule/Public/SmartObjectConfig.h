#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "SmartObjectUseConfig.h"
#include "SmartObjectConfig.generated.h"

UCLASS(Blueprintable)
class SMARTOBJECTSMODULE_API USmartObjectConfig : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartObjectUseConfig> Uses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DescriptionTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxConcurrentUsers;
    
public:
    USmartObjectConfig();
};

