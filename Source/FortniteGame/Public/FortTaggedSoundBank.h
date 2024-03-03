#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "TaggedSoundBankResponseList.h"
#include "FortTaggedSoundBank.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class UFortTaggedSoundBank : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTaggedSoundBankResponseList> FlattenedResponseMap;
    
public:
    UFortTaggedSoundBank();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetSoundToPlayByExactMatch(const FGameplayTag& Tag, const FGameplayTagContainer& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetSoundToPlay(const FGameplayTag& Tag, const FGameplayTagContainer& Context);
    
};

