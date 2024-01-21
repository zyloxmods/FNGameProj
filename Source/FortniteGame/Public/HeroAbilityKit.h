#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HeroAbilityKit.generated.h"

class UFortAbilityKit;

USTRUCT(BlueprintType)
struct FHeroAbilityKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> InherentAbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGPTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowInAbilityScreen;
    
    FORTNITEGAME_API FHeroAbilityKit();
};

