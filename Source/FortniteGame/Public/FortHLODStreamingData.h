#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WorldHLODStreamingData.h"
#include "FortHLODStreamingData.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=FortStreamingData)
class FORTNITEGAME_API UFortHLODStreamingData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FWorldHLODStreamingData> WorldData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldHLODStreamingData GlobalData;
    
    UFortHLODStreamingData();
};

