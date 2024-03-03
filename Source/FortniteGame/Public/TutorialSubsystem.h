#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "TutorialSubsystem.generated.h"

class AFortAthenaTutorialManager;

UCLASS(Blueprintable)
class FORTNITEGAME_API UTutorialSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortAthenaTutorialManager> TutorialManager;
    
public:
    UTutorialSubsystem();
    UFUNCTION(BlueprintCallable)
    bool IsInTutorial();
    
};

