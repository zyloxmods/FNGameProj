#pragma once
#include "CoreMinimal.h"
#include "FortAIComponent_Telemetry.h"
#include "EHardyExtractionReason.h"
#include "FortHardyComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortHardyComponent_Telemetry : public UFortAIComponent_Telemetry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHardyExtractionReason ExtractionReason;
    
public:
    UFortHardyComponent_Telemetry();
    UFUNCTION(BlueprintCallable)
    void SetExtractionReason(const EHardyExtractionReason Reason);
    
};

