#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoundIndicatorInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FSoundIndicatorInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    FORTNITEGAME_API FSoundIndicatorInitializationData();
};

