#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ETutorialType.h"
#include "FortBangWrapperContentInterface.generated.h"

UINTERFACE(Blueprintable)
class UFortBangWrapperContentInterface : public UInterface {
    GENERATED_BODY()
};

class IFortBangWrapperContentInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopCallout();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartCallout(FName TutorialObjectiveName, ETutorialType TutorialType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBangStateChanged(bool bEnabled, int32 Count);
    
};

