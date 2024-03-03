#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_NearChest.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_NearChest : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ContainerTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChestCheckRayCastDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MarkerText;
    
public:
    UFortContextualTutorialDefinition_NearChest();
};

