#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDProfileIdentifier.h"
#include "FortMobileHUDProfileBase.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMobileHUDProfileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileIdentifier HUDProfileIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HUDProfileBaseType;
    
    FFortMobileHUDProfileBase();
};

