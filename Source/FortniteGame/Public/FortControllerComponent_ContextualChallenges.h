#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EContextualContext.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_ContextualChallenges.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_ContextualChallenges : public UFortControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> SortedContextualObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> ContextualObjectivesToProcess;
    
public:
    UFortControllerComponent_ContextualChallenges();
protected:
    UFUNCTION(BlueprintCallable)
    void FirstTimePlayerLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetContext(EContextualContext NextContext);
    
};

