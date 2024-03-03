#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortSpecialEventGEData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FFortSpecialEventGEData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    FORTNITEGAME_API FFortSpecialEventGEData();
};

