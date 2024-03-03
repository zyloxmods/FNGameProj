#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EChangeInStructDetected.h"
#include "FortChangeMonitoringStruct.h"
#include "FortChangeMonitoringStructHelpers.generated.h"

UCLASS(Blueprintable)
class UFortChangeMonitoringStructHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortChangeMonitoringStructHelpers();
    UFUNCTION(BlueprintCallable)
    static void ClearDirty(UPARAM(Ref) FFortChangeMonitoringStruct& CheckStruct, EChangeInStructDetected& ChangeState);
    
    UFUNCTION(BlueprintCallable)
    static void CheckIsDirty(const FFortChangeMonitoringStruct& CheckStruct, EChangeInStructDetected& ChangeState);
    
};

