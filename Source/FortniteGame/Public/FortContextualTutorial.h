#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortContextualTutorial.generated.h"

class AActor;
class AFortPlayerController;
class UFortContextualTutorialDefinition;
class UFortHighlightObjectInWorldComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorial : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MarkerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText MarkerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortHighlightObjectInWorldComponent* MarkerHighlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortContextualTutorialDefinition* TutorialDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* OwnerController;
    
public:
    UFortContextualTutorial();
};

