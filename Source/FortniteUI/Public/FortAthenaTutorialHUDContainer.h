#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "FortAthenaTutorialHUDContainer.generated.h"

class AFortAthenaTutorialManager;
class UFortAthenaTutorialHUD;
class UFortAthenaTutorialScreen;
class UFortAthenaTutorialScreenData;
class UOverlay;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaTutorialHUDContainer : public UBacchusHUDElement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialScreen* CurrentScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaTutorialManager* TutorialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialHUD* TutorialHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> TutorialHUDWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_TutorialHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAthenaTutorialScreenData* TutorialScreenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTutorialStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTutorialSubstep;
    
public:
    UFortAthenaTutorialHUDContainer();
};

