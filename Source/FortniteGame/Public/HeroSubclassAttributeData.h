#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HeroSubclassRarityAttributeData.h"
#include "HeroSubclassAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FHeroSubclassAttributeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HeroClassAndSubclassTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHeroSubclassRarityAttributeData> AttributeInitKeysPerRarity;
    
public:
    FORTNITEGAME_API FHeroSubclassAttributeData();
};

