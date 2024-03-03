#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InfiltrationPOIInfo.generated.h"

class AInfiltrationCarryObjectCapturePoint;
class AInfiltrationCarryObjectSpawnPoint;

USTRUCT(BlueprintType)
struct FInfiltrationPOIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POITag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInfiltrationCarryObjectSpawnPoint*> IntelSpawnPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AInfiltrationCarryObjectCapturePoint*> IntelCapturePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText POIOverrideName;
    
    FORTNITEGAME_API FInfiltrationPOIInfo();
};

