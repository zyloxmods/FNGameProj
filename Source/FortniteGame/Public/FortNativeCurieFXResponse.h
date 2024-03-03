#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortNativeCurieFXCueResponse.h"
#include "FortNativeCurieFXResponse.generated.h"

USTRUCT(BlueprintType)
struct FFortNativeCurieFXResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverrideGameplayCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortNativeCurieFXCueResponse GameplayCueResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayGeneralVFX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayAmbientAudio: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayGlow: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayFXAsAOE: 1;
    
    FORTNITEGAME_API FFortNativeCurieFXResponse();
};

