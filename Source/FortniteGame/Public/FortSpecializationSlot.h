#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HeroSpecializationAttributeRequirement.h"
#include "FortSpecializationSlot.generated.h"

class UFortAbilityKit;

USTRUCT(BlueprintType)
struct FFortSpecializationSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> RemovedAbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroSpecializationAttributeRequirement> AttributeRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumHeroLevel;
    
    FORTNITEGAME_API FFortSpecializationSlot();
};

