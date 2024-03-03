#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralDataMap.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralDataMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRemapCurve;
    
    UProceduralDataMap();
};

