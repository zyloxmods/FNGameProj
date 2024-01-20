#pragma once
#include "CoreMinimal.h"
#include "DamagerInfoAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDamagerInfoAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageAmount;
    
    FORTNITEGAME_API FDamagerInfoAnalytics();
};

