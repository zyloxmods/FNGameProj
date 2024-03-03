#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "InspectorScreenshotContext.h"
#include "FortControllerComponent_Inspector.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_Inspector : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UFortControllerComponent_Inspector();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEndRequestScreenshot();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBeginRequestScreenshot(FInspectorScreenshotContext InScreenshotContext);
    
};

