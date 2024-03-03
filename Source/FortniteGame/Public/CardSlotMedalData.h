#pragma once
#include "CoreMinimal.h"
#include "CardSlotMedalData.generated.h"

class UFortAccoladeItemDefinition;

USTRUCT(BlueprintType)
struct FCardSlotMedalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccoladeItemDefinition* AccoladeForSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadedFromMcp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPunched;
    
    FORTNITEGAME_API FCardSlotMedalData();
};

