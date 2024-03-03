#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortContextualTutorialController.generated.h"

class AFortPawn;
class AFortPlayerController;
class UFortContextualTutorial;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorialController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorial*> ActiveContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorial*> PendingContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorial*> CompletedContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortContextualTutorial*> PendingCompletedContextualTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwnerController;
    
public:
    UFortContextualTutorialController();
    UFUNCTION(BlueprintCallable)
    void HideGameModeMessageRequest();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleStartSkydivingForActivation();
    
    UFUNCTION(BlueprintCallable)
    void HandleDBNOChanged(AFortPawn* Pawn, bool IsBDNO);
    
    UFUNCTION(BlueprintCallable)
    void HandleDamageReceived();
    
};

