#pragma once
#include "CoreMinimal.h"
#include "EFortRarity.h"
#include "FortHeroTierAbilityKit.generated.h"

class UFortAbilityKit;

USTRUCT(BlueprintType)
struct FFortHeroTierAbilityKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MinimumHeroRarity;
    
    FORTNITEGAME_API FFortHeroTierAbilityKit();
};

