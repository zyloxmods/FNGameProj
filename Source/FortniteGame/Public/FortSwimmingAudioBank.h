#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortSwimmingAudioType.h"
#include "FortSwimmingAudioBank.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class UFortSwimmingAudioBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SwimmingAssets1P[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SwimmingAssets3P[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeammateVolumeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSwimmingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequiredImmersionDepth;
    
    UFortSwimmingAudioBank();
    UFUNCTION(BlueprintCallable)
    float GetTeammateVolumeMultiplier();
    
    UFUNCTION(BlueprintCallable)
    USoundBase* GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortSwimmingAudioType::Type> SwimType);
    
    UFUNCTION(BlueprintCallable)
    float GetRequiredImmersionDepth();
    
};

