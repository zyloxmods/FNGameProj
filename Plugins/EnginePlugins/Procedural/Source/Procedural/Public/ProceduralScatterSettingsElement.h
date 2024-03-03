#pragma once
#include "CoreMinimal.h"
#include "ProceduralScatterSettingsElement.generated.h"

class UProceduralScatterSettings;

USTRUCT(BlueprintType)
struct PROCEDURAL_API FProceduralScatterSettingsElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralScatterSettings* ScatterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoints;
    
    FProceduralScatterSettingsElement();
};

