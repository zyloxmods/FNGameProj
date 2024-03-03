#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProceduralScatterContentSettings.generated.h"

class UProceduralScatterContentVariation;

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScatterContentSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SetActorTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UProceduralScatterContentVariation*> Variations;
    
    UProceduralScatterContentSettings();
};

