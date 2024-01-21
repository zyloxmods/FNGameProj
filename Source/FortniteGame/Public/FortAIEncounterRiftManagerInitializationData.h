#pragma once
#include "CoreMinimal.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortEncounterSettings.h"
#include "Templates/SubclassOf.h"
#include "FortAIEncounterRiftManagerInitializationData.generated.h"

class ABuildingRift;
class UFortAIEncounterInfo;

USTRUCT(BlueprintType)
struct FFortAIEncounterRiftManagerInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* EncounterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo CurrentEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncounterEnvironmentQueryInfo FallbackEnvironmentQueryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingRift> RiftClassTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinRiftsToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateIntervalTimeSeconds;
    
    FORTNITEGAME_API FFortAIEncounterRiftManagerInitializationData();
};

