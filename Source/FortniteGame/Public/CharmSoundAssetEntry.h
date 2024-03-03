#pragma once
#include "CoreMinimal.h"
#include "CharmSoundAssetEntry.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FCharmSoundAssetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Desc;
    
    FORTNITEGAME_API FCharmSoundAssetEntry();
};

