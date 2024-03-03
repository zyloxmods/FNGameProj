#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortWinterQuestTitleScreen.generated.h"

class UCommonButton;
class UFortGameStateComponent_EventLevel;
class UFortWinterQuestScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestTitleScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CameraToPushWinterQuestScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortWinterQuestScreen> WinterQuestScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Continue;
    
public:
    UFortWinterQuestTitleScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetScreen();
    
    UFUNCTION(BlueprintCallable)
    void OnCabinTransitionDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCabinTransition();
    
};

