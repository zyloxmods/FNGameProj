#pragma once
#include "CoreMinimal.h"
#include "ProceduralScatterContentSettings.h"
#include "ProceduralScatterActorContentSettings.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideFromWorldOutliner;
    
    UProceduralScatterActorContentSettings();
};

