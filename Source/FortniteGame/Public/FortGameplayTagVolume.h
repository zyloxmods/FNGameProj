#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GameplayTagContainer.h"
#include "FortGameplayTagVolumeInterface.h"
#include "FortGameplayTagVolume.generated.h"

UCLASS(Blueprintable)
class AFortGameplayTagVolume : public AVolume, public IFortGameplayTagVolumeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToApplyOnSave;
    
    AFortGameplayTagVolume();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void ApplyTags() override PURE_VIRTUAL(ApplyTags,);
    
};

