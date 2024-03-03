#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerLoudoutEntry.h"
#include "RandomItemEntries.h"
#include "PlayerLoadout.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerLoudoutEntry> AlwaysGrantedLoadoutItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRandomItemEntries> RandomlyGrantedLoadoutItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat LoadoutDuration;
    
    FORTNITEGAME_API FPlayerLoadout();
};

