#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortItemTier.h"
#include "EFortRarity.h"
#include "FortHeroGameplayPiece.generated.h"

class UFortAbilityKit;

USTRUCT(BlueprintType)
struct FFortHeroGameplayPiece {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilityKit> GrantedAbilityKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredCommanderTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommanderRequirementsText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGlobalDefaultMinima;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortItemTier MinimumHeroTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinimumHeroLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity MinimumHeroRarity;
    
    FORTNITEGAME_API FFortHeroGameplayPiece();
};

