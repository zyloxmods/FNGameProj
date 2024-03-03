#pragma once
#include "CoreMinimal.h"
#include "GunGameGunEntry.h"
#include "GunGameGunEntries.generated.h"

USTRUCT(BlueprintType)
struct FGunGameGunEntries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGunGameGunEntry> Entries;
    
    FORTNITEGAME_API FGunGameGunEntries();
};

