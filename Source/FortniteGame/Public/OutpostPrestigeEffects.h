#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OutpostPrestigeEffects.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FOutpostPrestigeEffects {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> EnemyPrestigeEffect;
    
    FORTNITEGAME_API FOutpostPrestigeEffects();
};

