#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaMapMarkerItemDefinition.generated.h"

class AFortMapMarkerTopperActor;

UCLASS(Blueprintable)
class UAthenaMapMarkerItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortMapMarkerTopperActor> TopperActorClass;
    
    UAthenaMapMarkerItemDefinition(const FObjectInitializer& ObjectInitializer);
};

