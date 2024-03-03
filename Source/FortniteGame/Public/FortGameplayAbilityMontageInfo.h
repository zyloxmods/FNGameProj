#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayAbilityMontageSectionToPlay.h"
#include "FortCharacterPartMontageInfo.h"
#include "FortGameplayAbilityMontageInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FFortGameplayAbilityMontageInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimRootMotionTranslationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameplayAbilityMontageSectionToPlay MontageSectionToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRandomSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCharacterPartMontageInfo> CharacterPartMontages;
    
    FORTNITEGAME_API FFortGameplayAbilityMontageInfo();
};

