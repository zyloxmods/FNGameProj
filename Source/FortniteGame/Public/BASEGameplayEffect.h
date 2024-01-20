#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BASEGameplayEffect.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FBASEGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelOverride;
    
    FORTNITEGAME_API FBASEGameplayEffect();
};

