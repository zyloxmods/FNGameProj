#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFortAILODLevel.h"
#include "FortForcedLODZone.generated.h"

UCLASS(Blueprintable)
class AFortForcedLODZone : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAILODLevel ForcedLODLevel;
    
    AFortForcedLODZone();
};

