#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAccountItemDefinition.h"
#include "PlayerPerkLevel.h"
#include "TechCurrentLevelCap.h"
#include "FortPlayerPerksItemDefinition.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerPerksItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SecondaryXpSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* XpCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FPlayerPerkLevel> PlayerPerkLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTechCurrentLevelCap> LevelCaps;
    
public:
    UFortPlayerPerksItemDefinition(const FObjectInitializer& ObjectInitializer);
};

