#pragma once
#include "CoreMinimal.h"
#include "ProceduralScatterContentVariation.h"
#include "Templates/SubclassOf.h"
#include "ProceduralScatterActorContentVariation.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UProceduralScatterActorContentVariation();
};

