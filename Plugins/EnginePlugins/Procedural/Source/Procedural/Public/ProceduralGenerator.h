#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralDebugSettings.h"
#include "ProceduralGenerator.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralGenerator : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProceduralDebugSettings DebugSettings;
    
    UProceduralGenerator();
};

