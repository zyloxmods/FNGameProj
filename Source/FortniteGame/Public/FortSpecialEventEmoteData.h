#pragma once
#include "CoreMinimal.h"
#include "FortSpecialEventEmoteData.generated.h"

class UAthenaDanceItemDefinition;

USTRUCT(BlueprintType)
struct FFortSpecialEventEmoteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoundActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAthenaDanceItemDefinition*> Emotes;
    
    FORTNITEGAME_API FFortSpecialEventEmoteData();
};

