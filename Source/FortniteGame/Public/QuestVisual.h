#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "QuestVisual.generated.h"

class AFortPlayerController;
class UFortLocalPlayer;

UCLASS(Abstract, Blueprintable)
class AQuestVisual : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* OwningLocalPlayer;
    
public:
    AQuestVisual();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void QuestCompleted(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ObjectiveCompleted(AFortPlayerController* PlayerController);
    
};

