#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "GameplayTagContainer.h"
#include "FortPlayerStart.generated.h"

class UParticleSystemComponent;

UCLASS(Blueprintable)
class AFortPlayerStart : public APlayerStart {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StartParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StartPointTags;
    
public:
    AFortPlayerStart();
};

