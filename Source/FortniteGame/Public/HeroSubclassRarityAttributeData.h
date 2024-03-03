#pragma once
#include "CoreMinimal.h"
#include "FortAttributeInitializationKey.h"
#include "HeroSubclassRarityAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FHeroSubclassRarityAttributeData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAttributeInitializationKey> AttributeInitKeysPerTier;
    
public:
    FORTNITEGAME_API FHeroSubclassRarityAttributeData();
};

