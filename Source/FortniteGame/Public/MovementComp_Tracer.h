#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "MovementComp_Tracer.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovementComp_Tracer : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UMovementComp_Tracer();
};

