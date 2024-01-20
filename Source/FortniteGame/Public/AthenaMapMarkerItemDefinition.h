#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaMapMarkerItemDefinition.generated.h"

class AFortMapMarkerTopperActor;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaMapMarkerItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortMapMarkerTopperActor> TopperActorClass;
    
    UAthenaMapMarkerItemDefinition();
};

