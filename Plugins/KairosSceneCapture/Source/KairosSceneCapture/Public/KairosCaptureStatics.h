#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WebJSFunction.h"
#include "KairosSnippetParams.h"
#include "KairosCaptureStatics.generated.h"

class AKairosSceneManagerActor;
class UObject;

UCLASS(Blueprintable)
class KAIROSSCENECAPTURE_API UKairosCaptureStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKairosCaptureStatics();
    UFUNCTION(BlueprintCallable)
    static void ToggleAutoRotate(bool bIsAutoRotateAllowed);
    
  //  UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
//    void PauseOrResumeSnippet(FKairosSnippetParams Params, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AKairosSceneManagerActor* GetSceneManager(const UObject* WorldContextObject);
    
};

