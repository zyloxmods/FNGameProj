#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "FortPlayerStart.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StartParticleComponent;
    
    AFortPlayerStart();
};

