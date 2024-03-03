#pragma once
#include "CoreMinimal.h"
#include "FortChangeMonitoringStruct.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortChangeMonitoringStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAnyValueDirty;
    
public:
    FFortChangeMonitoringStruct();
};

