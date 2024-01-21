#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "TaggedSoundBankResponseList.h"
#include "FortTaggedSoundBank.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTaggedSoundBank : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTaggedSoundBankResponseList> FlattenedResponseMap;
    
public:
    UFortTaggedSoundBank();
};

