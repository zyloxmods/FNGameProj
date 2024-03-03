#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_Actor.h"
#include "GameplayTagContainer.h"
#include "FortGameplayCueAttachInfo.h"
#include "FortGameplayCueSpawnCondition.h"
#include "FortGameplayCueNotify_Actor.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class AFortGameplayCueNotify_Actor : public AGameplayCueNotify_Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueSpawnCondition DefaultCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAttachInfo DefaultAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HUDElementTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ExecutionTarget;
    
    AFortGameplayCueNotify_Actor();
};

