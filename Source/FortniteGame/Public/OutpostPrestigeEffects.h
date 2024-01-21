#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OutpostPrestigeEffects.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostPrestigeEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> EnemyPrestigeEffect;
    
    FOutpostPrestigeEffects();
};

