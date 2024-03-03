#pragma once
#include "CoreMinimal.h"
#include "FortAwardDetector.h"
#include "FortAwardDetectorKillStreak.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortAwardDetectorKillStreak : public UFortAwardDetector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NeededKills;
    
public:
    UFortAwardDetectorKillStreak();
};

