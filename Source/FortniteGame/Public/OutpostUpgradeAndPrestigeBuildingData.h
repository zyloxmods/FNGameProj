#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.h"
#include "OutpostPOSTBoost.h"
#include "OutpostPOSTPerTheaterData.h"
#include "OutpostPrestigeEffects.h"
#include "OutpostPrestigeEffectsPerTheater.h"
#include "OutpostUpgradesPerTheaterData.h"
#include "Templates/SubclassOf.h"
#include "OutpostUpgradeAndPrestigeBuildingData.generated.h"

class UDataTable;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct FOutpostUpgradeAndPrestigeBuildingData : public FOutpostBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPrestigeLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultOutpostBuildingUpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutpostUpgradesPerTheaterData> PerTheaterOutpostBuildingUpgradeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostPrestigeEffects DefaultPrestigeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutpostPrestigeEffectsPerTheater> PrestigePerTheaterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOutpostPOSTBoost DefaultPOSTData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FOutpostPOSTPerTheaterData> POSTPerTheaterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> POSTBuildingGameplayEffectClass;
    
    FORTNITEGAME_API FOutpostUpgradeAndPrestigeBuildingData();
};

