#pragma once
#include "CoreMinimal.h"
#include "RestrictedCountry.generated.h"

USTRUCT(BlueprintType)
struct FRestrictedCountry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHealthWarningShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAntiAddictionMessageShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRealMoneyStoreRestriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameplayRestrictions;
    
    FORTNITEGAME_API FRestrictedCountry();
};

