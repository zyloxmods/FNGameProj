#pragma once
#include "CoreMinimal.h"
#include "AthenaSpatialScreen.h"
#include "SpatialFactionScreen.generated.h"

class USpatialFactionChoiceScreen;
class USpatialFactionProgressScreen;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USpatialFactionScreen : public UAthenaSpatialScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionChoiceScreen* Screen_FactionChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpatialFactionProgressScreen* Screen_FactionProgress;
    
public:
    USpatialFactionScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetAboutScreenVisited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFactionChoiceRequired();
    
};

