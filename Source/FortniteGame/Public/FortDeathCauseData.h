#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortDeathCauseInfo.h"
#include "FortDeathCauseData.generated.h"

UCLASS(Blueprintable)
class UFortDeathCauseData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDeathCauseInfo> DeathCauseInfos;
    
public:
    UFortDeathCauseData();
};

