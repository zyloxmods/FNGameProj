#pragma once
#include "CoreMinimal.h"
#include "EFortItemTier.h"
#include "FortUIPerkTier.generated.h"

class UFortHero;
class UFortHeroSpecialization;

USTRUCT(BlueprintType)
struct FFortUIPerkTier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHeroSpecialization* HeroSpecialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHero* CurrentHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier Tier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEvolution;
    
    FORTNITEUI_API FFortUIPerkTier();
};

